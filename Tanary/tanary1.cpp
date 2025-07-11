#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,num2,sum;
    string result;
    cout<<"Enter value number 1 : ";cin>>num1;
    cout<<"Enter value number 2 : ";cin>>num2;
    sum=num1+num2;
    result=(sum>0)?"positive":
           (sum<0)?"nagative":
            "sum=zero";
            cout<<"result:"<<result<<endl;
return 0;
}