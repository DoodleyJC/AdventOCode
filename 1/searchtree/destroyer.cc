#include "searchtree.ih"


searchTree::~searchTree(){
    delete[] this->d_children;
}