#include "cardhand.ih"

int CardHand::compareCard(char c1, char c2) const{
    if(c1==c2){
        return 0;
    }
    std::string cards = "AKQJT9876543210";
    if(cards.find(c1)< cards.find(c2)){
        return 1;
    } else{
        return -1;
    }
}