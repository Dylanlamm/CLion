//
// Created by Dylan on 2023/3/9.
//
#include <iostream>
using namespace std;
void move(const int a[],int (&temp)[], int len, int m){
    for (int i = m; i < len; ++i) {
        temp[i-m] = a[i];
    }
    for (int i = 0; i < m; ++i) {
        temp[len-m+i] = a[i];
    }
}

void display(const int a[], int len){
    for (int i = 0; i < len; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int m, array[] = {12, 52, 23, 94, 22, 78, 11, 8, 93, 36, 16};
    cout<<"请输入需移动的范围：";
    cin>>m;
    int len = sizeof(array) / sizeof(int);
    int temp[len];
    move(array, reinterpret_cast<int (&)[]>(temp), len, m);
    display(temp, len);
    return  0;
}