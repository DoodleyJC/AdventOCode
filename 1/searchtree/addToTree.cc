#include "searchtree.ih"
void searchTree::addToTree(std::string s, int value){
    std::cout << "adding:" << s << ". to tree with text:" << d_text << "\n";
    size_t idx = matchText(s);
    if(idx >= d_text.size()){ //keep this as final node, add rest of arg string to child
        if(idx >= s.size()){
            std::cout << "did you add the same text twice?, this shouldnot happen\n";
            return;
        }
        int leftM = matchLeft(s.substr(idx).at(0));
        if(leftM!=-1){
            d_children[leftM]->addToTree(s.substr(idx), value);
        } else{
            addChild(s.substr(idx), value);
        }
    } else if(idx >= s.size()){ //turn this into final node, change d_text to arg, add rest of d_text to child, TODO set current children to new child
        d_isFinal = true;
        int oldvalue = d_value;
        d_value = value;
        std::string oldText = d_text;
        d_text = s;
        searchTree** copyChildren = d_children;
        d_children = 0;
        size_t sizecopy = d_size;
        d_size =0 ;
        addToTreeHelp(oldText.substr(idx), oldvalue, sizecopy, copyChildren, d_isFinal);
        d_isFinal = true; 

    } else{ //split text
        bool finalCopy = d_isFinal;
        d_isFinal = false;
        
        int value2 = d_value;
        std::string substr2 = d_text.substr(idx);
        searchTree** copyChildren = d_children;
        size_t sizecopy = d_size;
        d_children = 0;
        d_size = 0;
        addToTreeHelp(substr2, value2, sizecopy, copyChildren, finalCopy);
        std::string substr1 = s.substr(idx);
        addChild(substr1, value);
        d_text = d_text.substr(0, idx);
    }

}