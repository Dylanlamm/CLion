//
// Created by Dylan on 2023/3/8.
//
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    int num;
    string name;
    float score[5];
public:
    void input();
    void display();
    float cave();
};

void Student::input() {
    cout<<"请输入该学生的学号和姓名，以及五门成绩（分别用空格隔开）：";
    cin>>num>>name;
    for (int i = 0; i < 5; ++i) {
        cin>>score[i];
    }
}

void Student::display() {
    cout<<"学号："<<num<<", 姓名："<<name<<"， 五门成绩：";
    for (auto item: score) {
        cout<<item<<" ";
    }
}
float Student::cave() {
    float sum = 0.0;
    for (float item: score) {
        sum += item;
    }
    return (sum / 5);
}

int main(){
    Student s1, s2;
    s1.input();
    s2.input();
    s1.cave() > s2.cave() ? s1.display(): s2.display();
    return 0;
}