// #include<iostream>
// using namespace std;
// template<typename T>
// T Sum(T a, T b){
//     return a + b;
// }
// int main(){
//     int value1=10,value2=20;
//     cout<<"Result1 = "<<Sum(value1,value2)<<endl;
//     float value3=10.2,value4=20.4;
//     cout<<"Result2 = "<<Sum(value3,value4)<<endl;
//     long value5=2000,value6=10000;
//      cout<<"Result3 = "<<Sum(value5,value6)<<endl;
// }
#include<iostream>
using namespace std;
template<typename T> 
void swap(T *x,T *y){
    cout<<"Outside The Function"<<endl;
    cout<<"X="<<*x <<"," <<"y="<<*y<<endl;
    T temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Inside The Function"<<endl;
    cout<<"X="<<*x <<"," <<"y="<<*y<<endl;
}
int main(){
    int num1=10,num2=20;
    cout<<"Before Swap: "<<endl;
    cout<<"Num1: "<<num1<<", Num2: "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After Swap:"<<endl;
    cout<<"Num1: "<<num1<<", Num2: "<<num2<<endl;
}
