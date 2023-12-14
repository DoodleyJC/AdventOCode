#include <vector>
#include <string>
#include <iostream>
using namespace std;

void moveNorth(vector<string> &platform){
    for(int y=1; y!=platform.size(); ++y){
                for(int x=0; x!=platform.at(y).size(); ++x){
                    if(platform.at(y).at(x) != 'O')
                        continue;
                    int aux = 1;
                    while(y-aux>=0 && platform.at(y-aux).at(x)=='.' ){
                        ++aux;
                    }
                    platform.at(y).at(x) = '.';
                    platform.at(y-aux+1).at(x) = 'O';
                }
            }
}

void moveSouth(vector<string> &platform){
    for(int y= platform.size()-2; y!=-1; --y){
        for(int x=0; x!=platform.at(y).size(); ++x){
            if(platform.at(y).at(x) != 'O'){
                continue;
            }
            int aux = 1;
            while(y+aux < platform.size() && platform.at(y+aux).at(x) == '.'){
                ++aux;
            }
            platform.at(y).at(x) = '.';
            platform.at(y+aux-1).at(x) = 'O';
        }
    }
}

void moveEast(vector<string> &platform){
    for(int x=platform.at(0).size()-2; x!=-1; --x){
        for(int y=0; y!=platform.size(); ++y){
            if(platform.at(y).at(x)!= 'O'){
                continue;
            }
            int aux = 1;
            while(x+aux < platform.at(y).size() && platform.at(y).at(x+aux) == '.'){
                ++aux;
            }
            platform.at(y).at(x) = '.';
            platform.at(y).at(x+aux-1) = 'O';
        }
    }
}

void moveWest(vector<string> &platform){
    for(int x=1; x!=platform.at(0).size(); ++x){
        for(int y=0; y!=platform.size(); ++y){
            if(platform.at(y).at(x)!= 'O'){
                continue;
            }
            int aux = 1;
            while(x-aux >=0 && platform.at(y).at(x-aux) == '.'){
                ++aux;
            }
            platform.at(y).at(x) = '.';
            platform.at(y).at(x-aux+1) = 'O';
        }
    }
}

void movePlat(char direction, vector<string> &platform){
    switch(direction){
        case 'N':
            moveNorth(platform);
            break;
        case 'E':
            moveEast(platform);
            break;
        case 'W':
            moveWest(platform);
            break;
        case 'S':
            moveSouth(platform);
            break;
        default: 
            break;
    }
}