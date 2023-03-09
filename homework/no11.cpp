//
// Created by Dylan on 2023/3/9.
//

#include <iostream>
#include "head/bubble.h"
using namespace std;

int BiSearch(int a[], int n, int x, int count = 0){
    int begin = 0, mid, last = n - 1;
    if(begin > last) return -1;
    while (begin <= last){
        count++;
        mid = (begin + last) / 2;
        if (x == a[mid]){
    cout<<"找到了"<<x<<"！比较次数为"<<count<<"次。"<<endl;
    return mid;
} else if(x > a[mid]){
            begin = mid + 1;
} else if (x < a[mid]){
            last = mid -1;
}
}
    cout<<"没找到"<<x<<"！比较次数为"<<count<<"次。"<<endl;
    return -1;
}

void display(const int v[], int size){
    for (int i = 0; i < size; ++i) {
        cout<<v[i]<<",";
    }
    cout<<endl;
}

int main(){
    int x, array[] = {12, 52, 23, 94, 22, 78, 11, 8, 93, 36, 16};
    cout<<"请输入要查找的值:";
    cin>>x;
    int len = sizeof(array) / sizeof(int);
    bubble(reinterpret_cast<int (&)[]>(array), len);
    display(array, len);
    cout<<BiSearch(array, len, x);
    return 0;
}