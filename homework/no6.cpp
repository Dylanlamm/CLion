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
    cout<<"     ѧ�ţ�";cin>>num;
    cout<<" ��ѧ��";cin>>math;
    cout<<" Ӣ�";cin>>english;
    cout<<" �������";cin>>computer;
    cout<<endl;
    total = math + english + computer;
}

void Student::cave() {
    ave = total / 3;
}

void Student::output() {
    cout<<"ѧ��Ϊ"<<num<<"��ƽ���ɼ���"<<ave<<endl;
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