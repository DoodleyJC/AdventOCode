#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "path/path.h"
using namespace std;

bool locationsDone(vector<string> locations){
    size_t idx = 0;
    while(idx!=locations.size()){
        if(locations.at(idx).at(2)!='z' && locations.at(idx).at(2)!='Z'){
            return false;
        }
        ++idx;
    }
    return true;
}

string updateLocation(string location, char instruction, map<string, Path> pathmap){
    Path p = pathmap.at(location);
    if(instruction == 'L'){
        location = p.getLeft();
    } else{
        location = p.getRight();
    }
    return location;
}

int main(int argc, char** argv){

    string buffer; 
    ifstream file;
    if(argc!=2){
        cout << "usage: ./main [program name]\n";
        throw(1);
    }
    file.open(argv[1]);
    int idx =0 ;
    string instructions;
    map<string, Path> mapmap;
    vector<string> locations;
    while(getline(file, buffer)){
        ++idx;
        if(idx==1){
            instructions = buffer;
            continue;
        }
        
        if(buffer.size()==0){
            cout << "empty at line =" << idx << "\n";
            continue;
        }
        cout << "buffer=" << buffer << ", size=" << buffer.size() << "\n";
        Path p = Path(buffer);
        mapmap.insert({p.getBase(), p});
        if(p.getBase().at(2)== 'A'){
            locations.push_back(p.getBase());
        }
    }
    string location = "AAA";
    size_t instructionIdx = 0;
    size_t steps = 0;
    cout << "debug" << locations.size() << "\n";
    while(!locationsDone(locations)){

        if(instructionIdx==instructions.size()){
            instructionIdx = 0;
        }
        for(size_t idx =0; idx!= locations.size(); ++idx){
            locations.at(idx) = updateLocation(locations.at(idx), instructions.at(instructionIdx), mapmap);
        }
        ++steps;
        ++instructionIdx;
        /*
        for(size_t idx =0; idx!= locations.size(); ++idx){
            cout << "location=" << locations.at(idx) << "steps=" << steps << "\n";
        }
        */
        if(steps % 10000 == 0){
            cout << steps << "\n";
        }
    }

    file.close();

    cout << "steps=" << steps << "\n";

}