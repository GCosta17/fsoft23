#include <iostream>
#include <ctime>
#define ARRAY_SIZE 10
using namespace std;

int * getRandom( ) {
    int* r = new int [ARRAY_SIZE];

    srand( (unsigned)time( NULL ) );
    for (int *p = r; p < r + ARRAY_SIZE; p++) {
        *p = rand();
    }
    return r;
}
void incrementOne(int *r) {
    for (int *p = r; p < r + ARRAY_SIZE; p++) {
        *p = *p + 1;
    }
}
int main() {
    int i;
    int *v = getRandom();
    incrementOne(v);
    cout <<"done"<<endl;
    for(i = ARRAY_SIZE - 1 ; i >= 0; i--) {
        std::cout << "Value: " << v[i] << std::endl;
    }
    delete[] v;
    return 0;
}