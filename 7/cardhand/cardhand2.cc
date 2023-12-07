
#include "cardhand.ih"

CardHand::CardHand(CardHand &&other) : CardHand(){

    for(size_t idx=0; idx!= other.d_hand.size(); ++idx){
        d_hand += other.d_hand.at(idx);
    }
    d_bet = other.d_bet;
}
