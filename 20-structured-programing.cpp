#include <iostream>
#include <stdio.h>

using namespace std;

void check_num(int x);
void include3(int x);

int main()
{
    int n;
    cin >> n;
    // n = 60;

    for (int i = 1;i <= n;i++){
        check_num(i);
    }

    cout << endl;
    return 0;
}

void check_num(int x)
{
    if ( x % 3 == 0 ){
        cout << " " << x;
        return;
    }

    include3(x);
}

void include3(int x)
{
    int include = x;
    while(include){
        if( include % 10 == 3 ){
            cout << " " << x;
            return;
        }

        include /= 10;
    }
}

