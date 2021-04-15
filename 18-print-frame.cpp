#include <iostream>
#include <stdio.h>

using namespace std;

void write(int width,int height);

int main()
{
    int W,H;
    while(true){
        cin >> H >> W;

        if (W == 0 && H == 0){
            break;
        }

        write(W,H);
    }

    return 0;
}

void write(int width,int height)
{
    for(int i = 0; i < height;i++){
        if (i == 0 || i == height - 1){
            for(int j = 0; j < width;j++){
                cout << "#";
            }
        }
        else {
            for(int j = 0; j < width;j++){
                if (j == 0 || j == width - 1){
                    cout << "#";
                }
                else {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
}

