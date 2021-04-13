#include <iostream>
using namespace std;

int main()
{
    int S;
    cin >> S;

    int hour,min,s;
    hour = S / 3600;
    S = S % 3600;
    min = S / 60;
    S = S % 60;
    s = S;

    cout << hour << ":" << min << ":" << s << endl;
}

