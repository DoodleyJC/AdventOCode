
#include "cardhand.ih"


CardHand& CardHand::operator=(CardHand const &other){
    for(size_t idx=0; idx!=other.d_hand.size(); ++idx){
        d_hand.at(idx) = other.d_hand.at(idx);
    }
    d_bet = other.d_bet;
    return *this;
}
