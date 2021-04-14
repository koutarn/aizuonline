#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num,input,min,max;
    long sum;
    cin >> num;

    for(int i = 0; i < num;i++){
        cin >> input;
        if (min > input ){
            min = input;
        }

        if (max < input) {
            max = input;
        }

        sum += input;
    }

    printf("%d %d %ld",min,max,sum);

    return 0;
}
