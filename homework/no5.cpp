//
// Created by Dylan on 2023/3/8.
//

#include <iostream>
using namespace std;

class Salary{
private:
    int id;
    float base;
    float perf;
    float cost;
    float realgive;
public:
    void input();
    void output();
};

void Salary::input() {
    cout<<"     ���ţ�";cin>>id;
    cout<<" �������ʣ�";cin>>base;
    cout<<" ��Ч���ʣ�";cin>>perf;
    cout<<" ˮ��ѣ�";cin>>cost;
    cout<<endl;
    realgive = base + perf - cost;
}

void Salary::output() {
    cout<<id<<"��ʵ�����ʣ�"<<realgive<<endl;
}

int main(){
    Salary s1, s2;
    s1.input();
    s2.input();
    s1.output();
    s2.output();
    return 0;
}