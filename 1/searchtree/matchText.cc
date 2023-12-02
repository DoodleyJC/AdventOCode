#include "searchtree.ih"

size_t searchTree::matchText(std::string s1){
    size_t idx=0;

    while(idx!= s1.size() && idx!= this->d_text.size()){
        if(s1.at(idx) != this->d_text.at(idx)){
            return idx;
        }
        ++idx;
    }
    return idx;
}