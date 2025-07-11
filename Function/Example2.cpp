// #include<iostream>
// using namespace std;
// void FuncName(){
//     int a=10,b=20,result;
//     cout<<"Today we lern about Function"<<endl;
//     cout<<"We know about to declare function."<<endl;
//     cout<<"a= "<<a<<endl;
//     cout<<"b= "<<b<<endl;
//     cout<<"result= "<<result<<endl;
// }
// int main(){
//     FuncName();
//     return 0;
// }
#include<iostream>
using namespace std;
int ID;
double salary;
string name,gender,addres,phone,email,address;
void Inputinformation(){
    cout<<"=====input information======"<<endl;
    cout<<"ID : "<<ID<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"gender : "<<gender<<endl;
    cout<<"salary : "<<salary<<endl;
    cout<<"address : "<<address<<endl;
    cout<<"phone : "<<phone<<endl;
    cout<<"email : "<<email<<endl;
}
void outputinformation(){
    cout<<"=====outputinformation========"<<endl;
    cout<<"ID : ";cin>>ID;
    cout<<"name : ";cin>>name;
    cout<<"gender : ";cin>>gender;
    cout<<"salary : ";cin>>salary;
    cout<<"address : ";cin>>address;
    cout<<"phone : ";cin>>phone;
    cout<<"email : ";cin>>email;
}
int main(){
    Inputinformation();
    outputinformation();
    return 0;
}