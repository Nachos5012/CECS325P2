//Deck.h

#ifndef DECK_H
#define DECK_H
using namespace std;

#include <vector>
#include "Card.h"

class Deck
{
private:
    std::vector<Card> cards;
    const static 

public:
    Deck();
    Card deal();
    void display();
    void shuffle();
};

#endif 

