#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    long input,min,max;
    long long sum;
    sum = 0;
    cin >> num;

    for(int i = 0; i < num;i++){
        cin >> input;
        sum += input;

        if (i == 0){
            min = input;
            max = input;
            continue;
        }

        if (min > input ){
            min = input;
        }

        if (max < input) {
            max = input;
        }

    }

    printf("%ld %ld %ld\n",min,max,sum);

    return 0;
}
