#include "searchtree.ih"



void searchTree::printTree(size_t lvl){
    for(size_t idx=0; idx!=lvl; ++idx){
        std::cout << "  ";
    }
    std::cout << d_text << "\n";
    for(size_t idx=0; idx!=d_size; ++idx){
        d_children[idx]->printTree(lvl+1);
    }
}