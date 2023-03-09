//
// Created by Dylan on 2023/3/9.
//

#ifndef CLION_BUBBLE_H
#define CLION_BUBBLE_H

#endif //CLION_BUBBLE_H

void bubble(int (&v)[], int size){
    int temp;
    for (int j = 1; j < size; ++j) {
        for (int k = 0; k < size - j; ++k) {
            if (v[k] > v[k + 1]){
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            }
        }
    }
}