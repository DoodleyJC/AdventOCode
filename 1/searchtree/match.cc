#include "searchtree.ih"

int searchTree::match(std::string s){
    size_t matchIndex = matchText(s);
    if(matchIndex < d_text.size()){
        return -1;
    }
    if(matchIndex == s.size()){
        if(d_isFinal){
            return d_value;
        } else{
            std::cout << "matched to non final value";
            return -1;
        }
    }
    size_t childIndex = matchLeft(s.at(matchIndex));
    if(childIndex!=((size_t) -1)){
        return d_children[childIndex].match(s.substr(matchIndex));
    } else{
        std::cout << "could not find child to match with";
        return -1;
    }

}