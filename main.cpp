#include <iostream>
#include "libraryA.h"


using namespace std;
int add (int a, int b) {
        return a + b;
    }

int adding (int a, int b, int &c) {
    return c = a + b;
}

double pole(double a,double b, double &c ) {
    return c = a * b;
}
double pole(int a, int b, int c, double &p) {
    return p = 2*c*(a+b);
}

int main() {
    std::cout << "Hello" << std::endl;
    sayHello(std::cout);
    meow();
    int k;
    double p,o;
    pole(4,5,p);
      cout << p << endl;
    pole(4,5,10,p);
    cout << p << endl;
    adding(5,9, k);
    cout << k << endl;
    int w = add(1,2);
    cout << w << endl;
    return 0;
}
