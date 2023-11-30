#include "Cards.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Card::Card() {
  suit = 0;
  rank = 0;
}

Card::Card(int s, int r) {
  suit = s;
  rank = r;
}

string Card::to_string() const
{
    vector<string> suit_strings = {"None", "Clubs", "Diamonds",
                                   "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King",
                                   "Ace"};

    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::equals(const Card& c2) const
{
    return (rank == c2.rank && suit == c2.suit);
}

bool Card::is_greater(const Card& c2) const
{
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;
    
    return false;
}
