//CECS325-sec2
//prog1
//main.cpp
//c++
//Name: Krisha Hemani
// Project Name: (Prog 1 – War Game)
// Due Date: (Tue-Thu 02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.


#include <iostream>
#include <string>
#include "Deck.h"
#include "Card.h"

using namespace std;

int main()
{
    Deck deck;
    string name1, name2;
    cout << "Enter the name of the first player: ";
    cin >> name1;
    cout << "Enter the name of the second player: ";
    cin >> name2;

    cout << "Original Deck\n";
    deck.display();
    //void Deck::display()

    deck.shuffle();
    //void Deck::shuffle()


    cout << "Shuffled Deck\n";
    deck.display();
    //void Deck::display()


    int game = 1; 
    int win1 = 0; 
    int win2 = 0; 
    int tie = 0; 

    while (game <= 26)
    {
        Card card1 = deck.deal();
        Card card2 = deck.deal();

        cout << "Game " << game << "\n";
        cout << "--------\n";
        cout << name1 << "=>" << card1.display() << "\n";
        cout << name2 << "=>" << card2.display() << "\n";

        int result = card1.compare(card2);
        if (result == 1) 
        {
            cout << name1 << "=> Winner\n";
            win1++;
        }
        else if (result == -1) 
        {
            cout << name2 << "=> Winner\n";
            win2++;
        }
        else 
        {
            cout << "Tie game\n";
            tie++;
        }

        game++;
    }

    cout << "-----Final Statistics------\n";
    cout << "---------------------------\n";
    cout << '\t\t' << name1 << "Vs." << "" << name2;
    //cout << "Wins" << win1 << "\t\t\t"<< win2;
    cout << name1 << " won " << win1 << " games\n";
    cout << name2 << " won " << win2 << " games\n";
    cout << "There were " << tie << " ties\n";

    return 0;
}

