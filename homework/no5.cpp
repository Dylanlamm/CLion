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
    cout<<"     工号：";cin>>id;
    cout<<" 基本工资：";cin>>base;
    cout<<" 绩效工资：";cin>>perf;
    cout<<" 水电费：";cin>>cost;
    cout<<endl;
    realgive = base + perf - cost;
}

void Salary::output() {
    cout<<id<<"的实发工资："<<realgive<<endl;
}

int main(){
    Salary s1, s2;
    s1.input();
    s2.input();
    s1.output();
    s2.output();
    return 0;
}