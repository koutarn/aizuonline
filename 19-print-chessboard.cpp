#include <iostream>
#include <stdio.h>

using namespace std;

void write(int width,int height);

int main()
{
    int W,H;
    while(true){
        // cin >> H >> W;
        write(2,2);
        write(3,3);

        if (W == 0 && H == 0){
            break;
        }

        // write(H,W);
    }

    return 0;
}

void write(int height,int width)
{
    int count = 0;
    char pre = '.';
    for(int i = 0; i < height;i++){
        for(int j = 0; j < width;j++){
            if (pre == '#'){
                cout << ".";
                pre = '.';
            }
            else {
                cout << "#";
                pre = '#';
            }
        }
        cout << endl;
    }
    cout << endl;
}

