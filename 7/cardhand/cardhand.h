#ifndef INCLUDEDCARDHAND_H
#define INCLUDEDCARDHAND_H

#include <string>
class CardHand{

    std::string d_hand;
    int d_bet;
    
    public: 
        CardHand() = default;
        CardHand(std::string hand, int bet);
        CardHand(CardHand &&other);

        int getPower() const;
        int compare(CardHand const &other) const;

        std::string getHand(){return d_hand;}
        int getBet(){return d_bet;}
        CardHand& operator=(CardHand const &other);
        friend void swap(CardHand &orig, CardHand &other);

    private:
        int uniquechars() const;
        int countOccurence(char c) const;
        int compareCard(char c1, char c2) const;

};

bool operator<(CardHand const &oneHand, CardHand const &other );

void swap(CardHand &orig, CardHand &other);


#endif