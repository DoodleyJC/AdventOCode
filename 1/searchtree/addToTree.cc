#include "searchtree.ih"
void searchTree::addToTree(std::string s, int value){
    std::cout << "adding:" << s << ". to tree with text:" << d_text << "\n";
    size_t idx = matchText(s);
    if(idx >= this->d_text.size()){ //keep this as final node, add rest of arg string to child
        if(idx >= s.size()){
            std::cout << "did you add the same text twice?, this shouldnot happen\n";
            return;
        }
        int leftMatch = matchLeft(s.at(idx));
        if(leftMatch == -1){
            addChild(s.substr(idx), value);
            return;
        } else{
            addToTree(s.substr(idx), value);
        }
    } else if(idx >= s.size()){ //turn this into final node, change d_text to arg, add rest of d_text to child
        
    } else{ //split text

    }

}