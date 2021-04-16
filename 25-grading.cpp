#include <iostream>
#include <stdio.h>

using namespace std;

char scoring(int midterm,int final,int re);

int main()
{
    int m,f,r;
    for(int i = 0;i < 50;i++){
        cin >> m >> f >> r;

        bool absence_midterm = m == -1;
        bool absence_final = f == -1;
        bool absence_re = r == -1;
        if(absence_midterm && absence_final && absence_re){
            break;
        }

        if(absence_midterm || absence_final){
            cout << 'F' << endl;
            continue;
        }

        int mf = m + f;

        if(mf >= 80){
            cout << 'A' << endl;
            continue;
        }

        if(mf >= 65 && mf < 80){
            cout << 'B' << endl;
            continue;
        }

        if(mf >= 50 && mf < 65){
            cout << 'C' << endl;
            continue;
        }

        if(mf >= 30 && mf < 50){
            char s = 'D';
            if(r >= 50){
                s = 'C';
            }
            cout << s << endl;
            continue;
        }

        if(mf < 30){
            cout << 'F' << endl;
            continue;
        }

    }

    return 0;
}
