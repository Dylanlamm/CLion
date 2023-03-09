//
// Created by Dylan on 2023/3/9.
//
#include <iostream>
#include <string>
using namespace std;

class Point{
private:
    string name;
    float x, y;
public:
    Point(string n, float a, float b):name(n), x(a), y(b){} //因为在成员函数中，操作运算符必须是左操作符的成员。
    Point(const Point& p);                                  // 而在<<操作符中，左操作符是ostream对象。所以就要使用友元函数进行定义。
    ~Point(){}
    friend ostream& operator<<(ostream& os, Point& p);    //   使用friend，两个参数都作为操作数
    ostream& operator<<(ostream& os);                    //不使用friend，只能用传一个参数，第一个操作数则是当前类的对象
    Point operator+(Point& p);
};

Point::Point(const Point &p) {
    name = p.name;
    x = p.x;
    y = p.y;
}

ostream &operator<<(ostream &os, Point &p) {
    os<<"name:"<<p.name<<", x:"<<p.x<<", y:"<<p.y;
    return os;
}

ostream &Point::operator<<(ostream &os) {
    os<<name<<"  "<<x<<"  "<<y;
    return os;
}

Point Point::operator+(Point &p) {                     //测试两点相加  仅作测试
    return {name + p.name, x + p.x, y + p.y};
}

int main(){
    Point p1("a", 1.2, 3.6);
    Point p2(p1);
    cout<<p2<<endl;
    cout<<p1<<endl;
    cout<<&p1<<" "<<&p2<<endl;
    p2<<cout<<endl;      //可以这样用：但是很奇怪.
    Point p3 = p1 + p2;
    cout<<p3<<endl;
    return 0;
}