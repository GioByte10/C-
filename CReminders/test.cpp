#include <stdio.h>

int main(){

    char word1[10] = "energy";
    char word2[10];

    int j = 0;
    for(int i = 0; i < sizeof(word1); i++){
        if(word1[i] != 'e')
            word2[j++] = word1[i];
    }
    word2[j] = '\0';

    printf("%s", word2);

    return 0;
}