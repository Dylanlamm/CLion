//
// Created by Dylan on 2023/3/9.
//

#include <iostream>
using namespace std;
void bubble(int (&v)[], int size);
void display(const int v[], int size);

int main(){
    int array[] = {12, 52, 23, 94, 22, 78, 11, 8, 93, 36, 16};
    int len = sizeof(array) / sizeof(int);
    bubble(reinterpret_cast<int (&)[]>(array), len);
    display(array, len);
    return 0;
}
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
void display(const int v[], int size){
    for (int i = 0; i < size; ++i) {
        cout<<v[i]<<",";
    }
    cout<<endl;
}