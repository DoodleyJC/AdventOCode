#include "cardhand.ih"



bool operator<(CardHand const &oneHand, CardHand const &other ){
    if(oneHand.compare(other)==-1){
        return true;
    }
    return false;
}