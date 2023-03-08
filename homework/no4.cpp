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
    cout<<"请输入销售件数：";
    cin>>n;
    cout<<"请输入单价：";
    cin>>price;
    sum = n * price;
}

void Sale::output() {
    cout<<"总销售额："<<sum<<endl;
}

int main(){
    Sale s;
    s.input();
    s.output();
    return 0;
}