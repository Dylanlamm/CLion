//
// Created by Dylan on 2023/3/8.
//
#include <iostream>
using namespace std;

class Rectangle{
private:
    float length, width;
public:
    Rectangle(float l = 8, float w = 8):length(l), width(w){};
    float area();
    void output();
};
float Rectangle::area() {
    return length * width;
}

void Rectangle::output() {
    cout<<"³¤£º"<<length<<"£¬¿í£º"<<width<<"£¬Ãæ»ý£º"<<area()<<endl;
}

int main(){
    Rectangle r1, r2(120, 23), r3(14, 3);
    r1.output();
    r2.output();
    r3.output();
    return 0;
}
