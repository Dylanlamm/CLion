//
// Created by Dylan on 2023/3/7.
//
#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
private:
    double a, b, c;
public:
    Triangle(double a = 3, double b = 4, double c = 5):a(a), b(b), c(c){};
    double area();
    void output();
};

double Triangle::area() {
    double s = (a+b+c)/2;
    double re = sqrt(s*(s-a)*(s-b)*(s-c));
    return re;
}

void Triangle::output() {
    cout<<"a:"<<a<<", b:"<<b<<", c:"<<c<<", Ãæ»ýÊÇ£º"<<area()<<endl;
}

int main(){
    Triangle tri, tri1(12, 18, 190);
    tri.output();
    cout<<tri1.area()<<endl;
    tri1.output();
    return 0;

}
