#include <vector> 
#include <string>
using namespace std;



int countO(string s){
    int count =0;
    for(int i=0; i!=s.size(); ++i){
        if(s.at(i)=='O'){
            ++count;
        }
    }
    return count;
}

int calcScore(vector<string> platform){
    int total =0;
    int mod = platform.size();

    for(int i=0; i!=platform.size(); ++i){
        total += mod*countO(platform.at(i));
        --mod;
    }
    return total;
}