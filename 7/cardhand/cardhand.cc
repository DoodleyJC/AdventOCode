#include "cardhand.ih"



CardHand::CardHand(std::string const hand, int bet){
    for(size_t idx=0; idx!= hand.size(); ++idx)
        d_hand += hand.at(idx);
    d_bet = bet;
}