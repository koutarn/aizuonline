#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    const double pi = 3.141592653589;
    double r,are,circ;
    cin >> r ;

    are = r * r * pi;
    circ = r * 2 * pi;

    printf("%lf %lf",are,circ);

    return 0;
}
