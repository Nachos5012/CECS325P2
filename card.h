//card.h
#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card
{
    private:
        char suit; 
        char rank; 
    public:
        Card(char suit, char rank); 
        void display();
        void display() const;
        // string display();
        int compare(Card); 
};

#endif

