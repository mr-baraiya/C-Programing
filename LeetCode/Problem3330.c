#include<stdio.h>
#include<string.h>

int possibleStringCount(char* word) {
    if(strlen(word) == 1){
        return 1;
    }
    int count = 1;
    for(int i=0; i<strlen(word); i++){
        if(word[i] == word[i+1]){
            count++;
        }
    }
    return count;
}
