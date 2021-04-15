#include <iostream>
#include <stdio.h>

using namespace std;

int string_to_type(char s);
char type_to_string(int type);

typedef enum
{
    CARD_TYPE_SPADE = 0,
    CARD_TYPE_HERT,
    CARD_TYPE_CRUB,
    CARD_TYPE_DIA,
    CARD_TYPE_MAX
} CARD_TYPE;

int cards[CARD_TYPE_MAX][13] = {};

int main()
{

    int n;
    cin >> n;

    int load_num = n * 2;

    int type;

    char input;
    int num;
    for(int i = 1;i <= load_num; i++){

        if(i % 2 != 0){
            cin >> input;
            type = string_to_type(input);
        }
        else {
            cin >> num;
            cards[type][num - 1] = 1;
        }
    }


    for(int i = 0;i < CARD_TYPE_MAX;i++){
        for(int j = 0;j < 13;j++){
            // カードをもっていなければ
            if (cards[i][j] != 1){
                printf("%c %d\n",type_to_string(i),j+1);
            }
        }
    }

}

int string_to_type(char s){
    if (s == 'S'){
        return CARD_TYPE_SPADE;
    }
    if (s == 'H'){
        return CARD_TYPE_HERT;
    }
    if (s == 'C'){
        return CARD_TYPE_CRUB;
    }
    if (s == 'D'){
        return CARD_TYPE_DIA;
    }

    return 0;
}

char type_to_string(int type){
    if (type == CARD_TYPE_SPADE){
        return 'S';
    }
    if (type == CARD_TYPE_HERT){
        return 'H';
    }
    if (type == CARD_TYPE_CRUB){
        return 'C';
    }
    if (type == CARD_TYPE_DIA){
        return 'D';
    }
    return 0;
}
