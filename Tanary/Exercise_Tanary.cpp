#include<iostream>
using namespace std;
int main(){
    system("cls");
    float a,b,result;
    char op;
    cout<<"=========================================[Input Vslue of number]============================"<<endl;
    cout<<"Enter value a: ";cin>>a;
    cout<<"Enter value b: ";cin>>b;
    cout<<"Enter Opereter:(+,-,*,/) ";cin>>op;
    result=(op=='+')?a+b :
           (op=='-')?a-b :
           (op=='*')?a*b :
           (op=='/')?a/b :
           '?';
           cout<<"Enter value a: "<<a<<endl;
           cout<<"Enter value b: "<<b<<endl;
           cout<<"result is:"<<result<<endl;
           cout<<"=========================================[End]================================================"<<endl;
    return 0;
}