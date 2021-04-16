#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main()
{
    int r,c;
    cin >> r >> c;

    int row_sum = 0;
    int col_sum[c];
    memset(&col_sum,0,sizeof(col_sum));
    int all_sum = 0;
    for(int i = 0; i < r; i++){
        row_sum = 0;
        for(int j = 0; j < c;j++){
            int input;
            cin >> input;
            cout << input << " ";

            row_sum += input;
            col_sum[j] += input;
        }

        cout << row_sum << endl;
        all_sum += row_sum;
    }

    for(int k = 0; k < c;k++){
        cout << col_sum[k] << " ";
    }

    cout << all_sum << endl;

    return 0;
}
