#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);

    string to_string() const;
    bool equals(const Card& c2) const;
    bool is_greater(const Card& c2) const;
};
