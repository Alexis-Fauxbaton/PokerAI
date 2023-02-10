#include <iostream>
#include <string>
#include "cards.hpp"

std::ostream& operator<<(std::ostream& out, const CardSigns value){
    static std::map<CardSigns, std::string> strings;
    if (strings.size() == 0){
#define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(Spade);     
        INSERT_ELEMENT(Heart);     
        INSERT_ELEMENT(Club);
        INSERT_ELEMENT(Diamond);             
        INSERT_ELEMENT(Dummy);             

#undef INSERT_ELEMENT
    }   

    return out << strings[value];
}

void Deck::initalizeDeck(){

    size_t card_count = 0;

    std::vector<Card> cards = getCardsVec();

    //Initializing Numbers
    for (size_t number = 1; number <= 13; number++){
        for (int int_sign = Spade; int_sign != Dummy; int_sign++){
            cards[card_count].setCardNumber(number);
            cards[card_count].setCardSign(static_cast<CardSigns>(int_sign));
            //std::cout << "Card" << card_count << " " << cards[card_count].getCardNumber() << cards[card_count].getCardSign() << std::endl;
            card_count+=1;
        }
    }



}

void Deck::printDeck(){
    for (size_t card_idx = 0; card_idx < deck_size; card_idx++)
        std::cout << cards[card_idx].getCardNumber() << " " << cards[card_idx].getCardSign() << std::endl;
}

void Deck::removeCard(size_t idx){

    if (idx < deck_size)
        cards.erase(cards.begin() + idx);

}

/*Erase first card encountered that matches sign and number*/
void Deck::removeCard(size_t number, CardSigns sign){
    size_t c_number;
    CardSigns c_sign;

    for (size_t idx = 0; idx < deck_size; idx++){
        c_number = cards[idx].getCardNumber();
        c_sign = cards[idx].getCardSign();


        if(c_number == number && c_sign == sign){
            cards.erase(cards.begin() + idx);
            return;
        }
    }

}

Card* Deck::pickCards(size_t n){
    Card* picked = new Card[n];


    return picked;

}