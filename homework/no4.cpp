//
// Created by Dylan on 2023/3/8.
//
#include <iostream>
using namespace std;

class Sale{
private:
    int n;
    float price;
    float sum;
public:
    void input();

    void output();
};

void Sale::input() {
    cout<<"���������ۼ�����";
    cin>>n;
    cout<<"�����뵥�ۣ�";
    cin>>price;
    sum = n * price;
}

void Sale::output() {
    cout<<"�����۶"<<sum<<endl;
}

int main(){
    Sale s;
    s.input();
    s.output();
    return 0;
}