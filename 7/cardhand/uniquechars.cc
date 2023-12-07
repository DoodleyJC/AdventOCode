#include "cardhand.ih"



int CardHand::uniquechars() const{
    std::string uniques;
    for(size_t idx=0; idx!=d_hand.size(); ++idx){
        if(uniques.find(d_hand.at(idx))==std::string::npos){
            uniques += d_hand.at(idx);
        }
    }
    return uniques.size();
}