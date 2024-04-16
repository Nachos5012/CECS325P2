//Deck.cpp
#include <iostream>
#include <algorithm>
#include <random>
#include "Deck.h"
#include "Card.h"
#include <random>

using namespace std;

// a deck of 52 cards
Deck::Deck()
{
        char suits[] = {'C', 'S', 'D', 'H'};
        char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            //std::Card card(suits[i], ranks[j]);
            Card card(suits[i], ranks[j]);
            cards.push_back(card);
        }
    }
}

Card Deck::deal()
{
    if (cards.empty())
    {
        throw runtime_error("The deck is empty");
    }
    Card card = cards.back();
    cards.pop_back();
    return card;
}
/*
void Deck::display()
{
    for (int i = 0; i < cards.size(); i++)
    {
        cout<<cards[i].display();
        if (i < cards.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "\n";
}
*/
void Deck::display()
{
    for (int i = 0; i < cards.size(); i++)
    {
        cout << cards[i].display();

        if (i < cards.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "\n";
}
//std::Card card(suits[i], ranks[j]);

void Deck::shuffle()
{   random_device rd;
    mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}
