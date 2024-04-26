#include <iostream>
#include "pl2.h"

using namespace std;

bool isEven(int n) {

    cout << "Enter a number: \n " << n;
    cin >> n;

    if ((n % 2) == 0) {
        return true;
    }
    return false;
}