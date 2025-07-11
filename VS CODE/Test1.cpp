#include<iostream>
using namespace std;
class Person{
    protected:
    int code;
    string name;
    char sex;
    public:
    Person(){
        code=0;
        name="N/A";
        sex='N';
    }
    Person(int c,string n,char s){
        code=c;
        name=n;
        sex=s;

    }
    void Output(){
        cout<<"Code: "<<code<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Sex: "<<sex<<endl;
    }
    
};
class  Employee: public Person{
    protected:
    float salary;
    public:
    Employee():Person(){
           salary=0;
    }
    Employee(int c,string n,char s,float sa):Person(c,n,s)
  {
        salary=sa;
    }
    void Output1(){
        Person::Output();
        cout<<"salary: "<<salary<<endl;
    }

};
int main(){
    Employee obj2,obj1(101,"Thearith",'M',1000);
    cout<<"==============[Construtor With Parameter]================"<<endl;
    obj1.Output1();
    cout<<"==============[Defaul Construtor]================"<<endl;
    obj2.Output1();
    return 0;
}