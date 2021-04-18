#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    // 行列 = 縦×横
    // A = n * m
    // B = m * l
    // C = n * l

    // Cij = Aik * Bkj    k=1...m
    // mが増加 A = 横が増加 B = 縦が増加
    // いまいち3つの変数というのが分っていない。

    int n,m,l;
    cin >> n >> m >> l;

    n = 1;
    m = 2;
    l = 2;

    cout << "A = " << n << "*" << m << endl;
    cout << "B = " << m << "*" << l << endl;
    cout << "C = " << n << "*" << l << endl;


    return 0;
}
