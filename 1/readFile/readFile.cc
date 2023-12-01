#include "readFile.ih"

bool isNum(char c){
    if (c>='0' && c<='9')
        return true;
    return false; 
}

int extractNum(std::string s, size_t &idx){
    int res = s.at(idx) - '0';
    idx = idx+1;
    return res;
    int num =0;
    while(idx!= s.size() && isNum(s.at(idx))){
        num *=10;
        num += s.at(idx) - '0';
        ++idx;
    }
    return num;
}

int findSum(std::string x){
    //std::cout << "processing: " << x << "\n";
    size_t idx = 0;
    int lowest=0;
    int highest =0;
    int flag =0;
    while(idx != x.size()){
        if(isNum(x.at(idx))){
            int num = extractNum(x, idx);
            if(flag==0){
                lowest = num;
                flag = 1;
            }
            highest = num;
        } else{
            ++idx;
        }
    }
    //std::cout << lowest << highest << "\n";
    return lowest*10 + highest;
}


int getTotal(char* ni){    
    std::string buffer; 
    std::ifstream file;
    file.open(ni);
    int sum =0;
    while(std::getline(file, buffer)){
        sum += findSum(buffer);
    }
    
    file.close();
    
    return sum;
}
