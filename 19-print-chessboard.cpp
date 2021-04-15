#include <iostream>
#include <stdio.h>

using namespace std;

void write(int height,int width);

int main()
{
    int W,H;
    while(true){
        cin >> H >> W;
        // write(3,4);
        // write(5,6);

        if (W == 0 && H == 0){
            break;
        }

        write(H,W);
    }

    return 0;
}

void write(int height,int width)
{
    int count = 0;
    char next;
    for(int i = 1; i <= height;i++){
        if (i % 2 == 0 ){
            next = '.';
        }
        else {
            next = '#';
        }

        for(int j = 0; j < width;j++){
            if (next == '.'){
                cout << ".";
                next = '#';
            }
            else {
                cout << "#";
                next = '.';
            }
        }
        cout << endl;
    }
    cout << endl;
}

