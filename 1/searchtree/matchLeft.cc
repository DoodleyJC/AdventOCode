#include "searchtree.ih"

size_t searchTree::matchLeft(char c){
    std::cout << "matching left, max=" << d_size << "\n";
    for(size_t idx = 0; idx != d_size; ++idx){
        if(d_children[idx]->d_text[0] == c){
            return idx;
        }
    }
    return -1;
}