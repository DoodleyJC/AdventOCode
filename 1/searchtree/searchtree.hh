#ifndef INCLUDED_SEARCHTREE_H
#define INCLUDED_SEARCHTREE_H

#include "searchtree.ih"

class searchTree
{
    searchTree* d_children;
    size_t d_size;
    std::string d_text;
    int d_value;
    bool d_isFinal;
    public:
        searchTree() = default;
        searchTree(std::string s, int value);
        ~searchTree();

        void printTree();
        void addChild(std::string s, int value);
        void addToTree(std::string s, int value);
        int match(std::string s);

    private:
        size_t matchText(std::string s1);
        size_t matchLeft(char c);
};

#endif
