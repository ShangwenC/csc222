#include <iostream>
using namespace std;

class Duration {
public:
  Duration();
  Duration(int seconds);
  int elapsed;
  int seconds();
  int minutes();
  int hours();
  int days();
  Duration operator + (const Duration& d);
  Duration operator - (const Duration& d);
  string to_sring();
};
