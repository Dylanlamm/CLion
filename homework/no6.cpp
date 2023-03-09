//
// Created by Dylan on 2023/3/8.
//

#include <iostream>
using namespace std;

class Student{
private:
    int num;
    float math;
    float english;
    float computer;
    float total;
    float ave;
public:
    void input();
    void output();
    void cave();
};

void Student::input() {
    cout<<"     学号：";cin>>num;
    cout<<" 数学：";cin>>math;
    cout<<" 英语：";cin>>english;
    cout<<" 计算机：";cin>>computer;
    cout<<endl;
    total = math + english + computer;
}

void Student::cave() {
    ave = total / 3;
}

void Student::output() {
    cout<<"学号为"<<num<<"的平均成绩："<<ave<<endl;
}

int main(){
    Student s1, s2;
    s1.input();
    s1.cave();
    s2.input();
    s2.cave();
    s1.output();
    s2.output();
    return 0;
}