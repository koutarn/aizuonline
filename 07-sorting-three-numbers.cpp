#include <iostream>
using namespace std;

int main()
{
    long array[3];

    cin >> array[0] >> array[1] >> array[2];
    // array[0]= 1000;
    // array[1]= 1000;
    // array[2]= 100;

    int tmp;
    for (int i = 0; i < 3;i++){
        if (i == 2 && array[0] > array[1]){
            tmp = array[1];
            array[1] = array[0];
            array[0] = tmp;
            continue;
        }

        if (array[i] > array[i + 1]){
            tmp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = tmp;
        }
    }

    cout << array[0] << " "<< array[1] << " " << array[2] << endl;

    return 0;
}
