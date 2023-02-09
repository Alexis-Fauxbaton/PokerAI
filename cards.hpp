#pragma once

#include <iostream>
#include <string>
#include <map>

#define DECK_SIZE 52

typedef enum{
    Spade,
    Heart,
    Club,
    Diamond,
    Dummy
}CardSigns;

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

class Card{

    private:
    size_t number;
    CardSigns sign;

    public:
    Card(){};
    Card(size_t number_, CardSigns sign_):number(number_), sign(sign_){};
    ~Card(){};
    size_t getCardNumber(){return number;};
    void setCardNumber(size_t number_){number = number_;};
    CardSigns getCardSign(){return sign;};
    void setCardSign(CardSigns sign_){sign = sign_;};
    //TODO Add Draw method

};

class Deck{

    private:
    Card* cards;
    size_t deck_size;

    public:
    Deck():deck_size(DECK_SIZE){cards = new Card[deck_size];};
    ~Deck(){delete[] cards;};
    Card* getCardsPtr(){return cards;};
    void initalizeDeck();
    void printDeck();
};