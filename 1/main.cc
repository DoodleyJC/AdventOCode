#include <iostream>
#include <fstream>
#include "readFile/readFile.hh"

int main(int argc, char** argv){

    if(argc!=2){
        std::cout << "usage: ./main [filename]";
    } else{
        int answer = getTotal(argv[1]);
        std::cout << "final answers=" << answer << "\n";
    }
}