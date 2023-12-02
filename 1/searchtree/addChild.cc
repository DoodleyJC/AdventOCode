#include "searchtree.ih"


void searchTree::addChild(std::string s, int value){
    //std::cout << "adding child" << s << "to:" << d_text <<"\n";
    size_t newSize = d_size+1;
    searchTree** newChildren = new searchTree*[newSize];
    for(size_t idx = 0; idx !=d_size; ++idx ){
        newChildren[idx] = d_children[idx];
        d_children[idx] = 0;
    }
    newChildren[newSize-1] = new searchTree(s, value);
    delete[] d_children;
    this->d_children = newChildren;
    this->d_size = newSize;
}