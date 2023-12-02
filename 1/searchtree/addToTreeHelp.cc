#include "searchtree.ih"

void searchTree::addToTreeHelp(std::string s, int value, size_t size, searchTree** children, bool isFinal){

        addChild(s, value);
        d_children[0]->d_children = children;
        d_children[0]->d_size = size;
}