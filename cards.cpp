#include <iostream>
#include <string>
#include "cards.hpp"

void Deck::initalizeDeck(){

    size_t card_count = 0;

    Card* cards = getCardsPtr();

    //Initializing Numbers
    for (size_t number = 1; number <= 10; number++){
        for (int int_sign = Spade; int_sign != Dummy; int_sign++){
            cards[card_count].setCardNumber(number);
            cards[card_count].setCardSign(static_cast<CardSigns>(int_sign)); 
        }
    }

}

void Deck::printDeck(){
    for (size_t card_idx = 0; card_idx < deck_size; card_idx++)
        std::cout << cards[card_idx].getCardNumber() << cards[card_idx].getCardSign() << std::endl;
}

int main(){

    return 0;
}