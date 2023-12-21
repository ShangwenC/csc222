#include "Duration.h"
#include <iostream>
using namespace std;

Duration::Duration();  elapsed(0) {
}
Duration::Duration(int seconds) : elapsed(seconds){
}


//borrowed calculations from Marin because converting seconds at 1 AM is not somethng I find fun

int Duration::seconds() {
 return elapsed % 60;
}

int Duration::minutes() {
 return (elapsed % 3600) / 60;
}

int Duration::hours(){
 return (elapsed % 86400) / 3600;
}

int Duration::days(){
 return elapsed / 86400;
}

Duration Duration::operator + (const Duration& d) {
 return Duration(elapsed + d.elapsed);
}

Duration Duration::operator - (const Duration& d) {
 return Duration(elapsed - d.elapsed);
}
