#include <iostream>
#include <stdio.h>

using namespace std;

#define MAX_BUILDING 4
#define MAX_FLOOR 3
#define MAX_ROOM 10
int inhabitans[MAX_BUILDING][MAX_FLOOR][MAX_ROOM] = {};

int main()
{
    int n;
    cin >> n;

    //b = 棟
    //f = 階
    //r = 部屋
    //v = 人


    int b,f,r,v;
    //load
    for(int i = 1; i <= n ;i++){
        cin >> b >> f >> r >> v;
        inhabitans[b - 1][f - 1][r - 1] += v ;
    }

    for(int build_index = 0; build_index < MAX_BUILDING;build_index++){
        for(int floor_index = 0;floor_index < MAX_FLOOR;floor_index++){
            for(int room_index = 0;room_index < MAX_ROOM;room_index++){
                cout << " " << inhabitans[build_index][floor_index][room_index];
            }

            cout << endl;
        }

        if(build_index != MAX_BUILDING - 1){
            cout << "####################" << endl;
        }
    }

    return 0;
}
