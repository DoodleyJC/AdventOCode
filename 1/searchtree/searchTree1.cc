#include "searchtree.ih"


searchTree::searchTree(std::string s, int value){
    d_children = 0;
    d_text = s;
    d_isFinal =true;
    d_size = 0;
    d_value = value;
}