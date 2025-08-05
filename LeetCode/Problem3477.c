#include<stdbool.h>

int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int unplaced = 0;
    bool used[fruitsSize];
    memset(used, 0, sizeof(used)); 

    for(int i=0; i<fruitsSize; i++){
        bool placed =  false;
        for(int j=0; j<basketsSize; j++){
            if(!used[j] && baskets[j] >= fruits[i]){
                used[j] = true;
                placed  = true;
                break;
            }
        }
        if(!placed){
            unplaced++;
        }
    }
    return unplaced;
}
