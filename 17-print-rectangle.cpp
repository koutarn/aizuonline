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
        for(int j = 0; j < width;j++){
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
}
