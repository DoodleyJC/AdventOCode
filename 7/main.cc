#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "cardhand/cardhand.h"
#include <algorithm>
using namespace std;

int main(int argc, char** argv){

    vector<CardHand> chVector;
    CardHand test1 = CardHand("AABDD", 999);
    cout << test1.getPower() << "\n";

    
    string buffer; 
    ifstream file;
    if(argc!=2){
        cout << "usage: ./main [program name]\n";
        throw(1);
    }
    file.open(argv[1]);
    size_t idx = 0;
    while(getline(file, buffer)){
        cout << "buffer =" << buffer << "\n";
        chVector.push_back(CardHand(buffer.substr(0, 5), stoi(buffer.substr(6))) );
    }
    file.close();

    for(size_t idx=0; idx!=chVector.size(); ++idx){
        cout << "hand=" << chVector.at(idx).getHand() << " , " "power=" << chVector.at(idx).getPower() << "\n";
    }

    std::sort(chVector.begin(), chVector.end());
    cout << "\nboutta sort\n\n";
    int sum=0;
    for(size_t idx=0; idx!=chVector.size(); ++idx){
        sum = sum + chVector.at(idx).getBet() * (idx+1);
        cout << "hand=" << chVector.at(idx).getHand() << " , " "power=" << chVector.at(idx).getPower() << "\n";
    }

    cout << "totalsum==" << sum << "\n";

}