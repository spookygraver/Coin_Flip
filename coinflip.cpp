#include <iostream>
#include <std.lib.h>
#include <ctime>

int main () {

    //Create a number that's 0 or 1

    srand (time ((NULL)));

    int coin = rand () % 2;

    //If number is 0: Heads
    //IF number is not 0: Tails

    if (coin ==0) {

        std::cout << "Heads\n";

    }

    else {

        std::cout << "Tails\n";

    }
    
}