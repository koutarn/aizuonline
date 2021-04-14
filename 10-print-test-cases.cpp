#include <iostream>
using namespace std;

int main()
{
    int x,y,tmp;
    for(int i = 0;i<3000;i++){
        cin >> x >> y;
        // x = rand();
        if (x == 0 && y == 0){
            break;
        }

        if (x > y){
            tmp = y;
            y = x;
            x = tmp;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
