#include "cardhand.ih"



int CardHand::countOccurence(char c) const{
    int counter=0;
    for(size_t idx=0; idx!=d_hand.size(); ++idx){
        if(d_hand.at(idx)== c){
            ++counter;
        }
    }
    return counter;
}