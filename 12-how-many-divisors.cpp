#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b,d,r;
    double f;

    cin >> a >> b;
    // a=100000009;
    // b=2;

    d = a / b;
    r = a % b;
    f = 1.0 * a / b;

    printf("%d %d %.8f\n",d,r,f);

    return 0;
}
