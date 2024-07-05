#include<iostream>
using namespace std;
void change(int &z,int &y){
    z=100;
    y=99;
    cout<<&z<<endl;
}
int main(){
    int a=5;
    int b=6;
    change(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<&a<<endl;
}