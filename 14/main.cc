#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void movePlat(char direction, vector<string> &platform);
int calcScore(vector<string> platform);

void printPlatform(vector<string> platform){
    for(int j=0; j!= platform.size(); ++j){
        cout << platform.at(j) << "\n";
    }
    cout << "\n";
}

int copyScore(vector<string> first, vector<string> second){
    int count =0;
        for(int i=0; i<first.size(); ++i){
            for(int j=0; j<first.at(i).size(); ++j){
                if(second.at(i).at(j) != first.at(i).at(j)){
                    ++count;
                }
            }
        }
    return count;
}

int copyPlatform(vector<string> &from, vector<string> &to){
    int count =0;
    for(int i=0; i<from.size(); ++i){
        for(int j=0; j<from.at(i).size(); ++j){
            if(to.at(i).at(j) != from.at(i).at(j)){
                ++count;
                to.at(i).at(j) = from.at(i).at(j);
            }
        }
    }
    return count;
}

int main(int argc, char** argv){
    if(argc!=2){
        cout << "usage: [programname] [inputname]";
        return 0;
    }

    vector<string> platform;
    vector<string> dummyPlatform;
    
    ifstream file;
    file.open(argv[1]);
    string buffer;
    int totalLines=0;
    while(getline(file, buffer)){
        platform.push_back(buffer);
        dummyPlatform.push_back(buffer);
        totalLines++;
        cout << totalLines << "\n";
    }
    int j = 0;
    for(int i=1; i<1000000000; ++i){
        movePlat('N', platform);
        //printPlatform(platform);
        movePlat('W', platform);
        //printPlatform(platform);
        movePlat('S', platform);
        //printPlatform(platform);
        movePlat('E', platform);
        //printPlatform(platform);
        if(i%10000==0){
            int copyScore = copyPlatform(platform, dummyPlatform);
            j =1;
            
        } else if(copyScore(platform, dummyPlatform)==0){
            cout << "j=" << j << " to get copyscore=0\n";
            break;
        }
        if(j>0){
            cout << "calcscore=" << calcScore(platform) << "at j=" << j << "\n";
            ++j; 
        }
        
    }

    printPlatform(platform);

    cout << calcScore(platform) << "\n";


    file.close();



}