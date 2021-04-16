#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // A = n * m
    // b = m * 1

    //     ↓i
    // b = 1
    //     2
    //     3
    //     m

    //     →j
    //     ↓i
    // A = 1 2 3 4 m
    //     2 2 2 2 m
    //     3 3 3 3 m
    //     n n n n nm
    
    int n,m;
    cin >> n >> m;

    int A[n][m];
    int b[m];

    int input;
    // load
    for(int i = 0; i < n;i++){
        for(int j=0;j < m;j++){
            cin >> input;
            A[i][j] = input;
        }
    }

    for(int j = 0;j < m;j++){
        cin >> input;
        b[j] = input;
    }

    int sum = 0;
    for(int i = 0; i < n;i++){
        sum = 0;
        for(int j=0;j < m;j++){
            sum += A[i][j] * b[j];
        }
        cout << sum << endl;
    }

    return 0;
}
