#include<iostream>
using namespace std;
template<class T,class S>
class Person{
    private:
    T id,salary;
    S name;
    public:
    void Input(){
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter Id: ";cin>>id;
        cout<<"Enter Salary: ";cin>>salary;
    }
    void Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

};
int main(){
    Person <float,string> obj;
    obj.Input();
    obj.Display();
};
