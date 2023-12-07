
#include "cardhand.ih"



int CardHand::compare(CardHand const &other) const {
    if(other.getPower() > getPower()){
        return -1;
    }
    if(other.getPower() < getPower()){
        return 1;
    }
    if(other.getPower() == getPower()){
        for(size_t idx=0; idx!=d_hand.size(); ++idx){
            int comparison = compareCard(d_hand.at(idx), other.d_hand.at(idx));
            if(comparison!=0){
                return comparison;
            }
        }
    }
    return 0;
}
