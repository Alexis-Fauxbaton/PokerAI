#include "cards.hpp"


bool TestDeck(){
    Deck deck;
    deck.initalizeDeck();

    deck.printDeck();

    return true;

}

int main(){
    TestDeck();

    return 0;
}