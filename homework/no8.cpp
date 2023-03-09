//
// Created by Dylan on 2023/3/8.
//

#include <iostream>
#include <cmath>
using namespace std;
class Shape{
protected:
    double r;
public:
    explicit Shape(double i):r(i){}
    virtual void Area() = 0;
    virtual void Perimeter() = 0;
};

class Circle:public Shape{
public:
    explicit Circle(double i): Shape(i){}
    void Area() override{
        cout<<"圆的面积是："<<M_PI*r*r<<endl;
    }
    void Perimeter() override{
        cout<<"圆的周长是："<<2*M_PI*r<<endl;
    }
};

class In_Square:public Shape{
public:
    explicit In_Square(double i): Shape(i){}
    void Area() override{
        cout<<"圆内接正方形的面积是："<<2*r*r<<endl;
    }
    void Perimeter() override{
        cout<<"圆内接正方形的周长是："<<4*sqrt(2)*r<<endl;
    }
};

class Ex_Square:public Shape{
public:
    explicit Ex_Square(double i): Shape(i){}
    void Area() override{
        cout<<"圆外切正方形的面积是："<<4*r*r<<endl;
    }
    void Perimeter() override{
        cout<<"圆外切正方形的周长是："<<8*r<<endl;
    }
};

int main(){
    Shape* ps;
    ps = new Circle(8);
    ps->Area();
    ps->Perimeter();
    ps = new In_Square(8);
    ps->Area();
    ps->Perimeter();
    ps = new Ex_Square(8);
    ps->Area();
    ps->Perimeter();
    delete ps;
    return 0;
}