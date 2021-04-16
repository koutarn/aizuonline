#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,x;

    while(true){
        cin >> n >> x;

        bool is_end = n == 0 && x == 0;
        if(is_end){
            break;
        }

        int count = 0;
        for(int i = 1; i <= n;i++){
            for(int j = i+1; j <= n;j++){
                for(int k = j+1; k <= n; k++){
                    if(x == (i + j + k)){
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
