#include <iostream>
using namespace std;

Class Duration {
public:
  Duration();
  int seconds();
  int minutes();
  int hours();
  int days();
  Duration operator + (const Duration& d);
  Duration operator - (const Duration& d);
  string to_sring();
}
