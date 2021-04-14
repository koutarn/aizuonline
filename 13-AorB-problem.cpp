#include <iostream>
using namespace std;

int main()
{
    int a,b,c,count;
    count = 0;
    cin >> a >> b >> c;
    // a = 5;
    // b = 14;
    // c = 80;

    for(;a<=b;a++){
        bool is_devisors = c % a == 0;
        if (is_devisors){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
