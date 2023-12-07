#include "cardhand.ih"

int CardHand::getPower() const{

    int uniques = uniquechars();
    switch(uniques){
        case 1:
            return 6;
            break;
        case 2:
        {
            int occ0 = countOccurence(d_hand.at(0));
            if(occ0 == 4 || occ0 == 1)
                return 5;
            return 4;
            break;
        }  
        case 3:{
            char char1 = d_hand.at(0);
            size_t idx=0;
            while(d_hand.at(idx)==char1){
                ++idx;
            }
            char char2 = d_hand.at(idx);
            switch(countOccurence(char1)){
                case 1:
                    if(countOccurence(char2)==2){
                        return 2;
                    } else{
                        return 3;
                    }
                case 2: 
                    return 2;
                case 3: 
                    return 3;
            }
            break;
        }
        case 4:
            return 1;
            break;
        case 5:
            return 0;
            break;
        default:
            std::cerr<< "smth went wrong, uniques=" << uniques << "\n";
            return -1;
    }
}