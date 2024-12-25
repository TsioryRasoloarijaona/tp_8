#include <iostream>

#include "Heure.h"
#include <iostream>

#include "Sum.h"

using namespace std;
int main() {
    cout << "donner 3 nombre enttier 3 9 8" << endl
    << "methode 1 " << endl ;
     Sum::calculate_1(1,9) ;
    Sum::calculate_1(1,9,8) ;
    cout << "methode 2 " << endl ;
    Sum::calculate_2(3,9) ;
    Sum::calculate_2(1,9,8) ;

    cout << Heure::convert(2 , 39 , 45) << endl;

    return 0;
}