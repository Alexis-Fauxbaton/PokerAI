#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>

#define DECK_SIZE 52

typedef enum{
    Spade,
    Heart,
    Club,
    Diamond,
    Dummy
}CardSigns;

std::ostream& operator<<(std::ostream& out, const CardSigns value);

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
    std::vector<Card> cards;
    size_t deck_size;

    public:
    Deck():deck_size(DECK_SIZE){};
    ~Deck(){};
    std::vector<Card> getCardsVec(){return cards;};
    void initalizeDeck();
    void printDeck();
    void removeCard(size_t idx);
    void removeCard(size_t number, CardSigns sign);
    Card* pickCards(size_t n);
};