#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for(int i = 0;i < n;i++){
        cin >> array[i];
    }

    for(int i = n - 1; i >= 0;i-- ){
        if (i == n - 1) {cout << array[i];}
        else{cout << " " << array[i];}
    }
    cout << endl;

    return 0;
}
