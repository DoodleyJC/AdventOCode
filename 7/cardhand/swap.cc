
#include "cardhand.ih"
void swap(CardHand &orig, CardHand &other){
    std::string otherstringcopy = other.d_hand;
    int betcopy = other.d_bet;
    other.d_hand = orig.d_hand;
    other.d_bet = orig.d_bet;
    orig.d_hand = otherstringcopy;
    orig.d_bet = betcopy;    
}
