//
// Created by Dylan on 2023/3/8.
//
#include <iostream>
using namespace std;

class Circle{
private:
    float r;
public:
    Circle(float rr = 8):r(rr){};
    float area();
    void output();
};
float Circle::area() {
    return 3.14*r*r;
}
void Circle::output() {
    cout<<"°ë¾¶£º"<<r<<"£¬Ãæ»ý£º"<<area()<<endl;
}
int main(){
    Circle c1, c2(98.9);
    c1.output();
    c2.output();
    return 0;
}