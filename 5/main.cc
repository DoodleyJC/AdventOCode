#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<map<long long, long long>> maps;
size_t totalMaps;
int main(int argc, char** argv){
    string buffer; 
    ifstream file;
    if(argc!=2){
        cout << "usage: ./main [program name]\n";
        throw(1);
    }
    file.open(argv[1]);
    size_t idx = 0;
    while(getline(file, buffer)){
        ++idx;
        if(idx<3){
            continue;
        }
        if(buffer.size()<=1){
            cout << "empty\n";
            ++totalMaps;
            continue;
            
        }
        if()
        ++idx;
    }
    

    file.close();




}