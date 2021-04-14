#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b,result;
    char op;
    while(true){
        cin >> a >> op >> b;
        if (op == '?'){
            break;
        }

        if (op == '+'){
            result = a + b;
        }
        if (op == '-'){
            result = a - b;
        }
        if (op == '/'){
            result = a / b;
        }
        if (op == '*'){
            result = a * b;
        }

        printf("%d\n",result);
    }

    return 0;
}
