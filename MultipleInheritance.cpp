#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string n,int a){
        name=n;
        age=a;
    }
    void DisplayPersonInfor(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Teacher: public Person{
    protected:
    string subject;
    public:
    Teacher(string n,int a,string s):Person(n,a),subject(s){}
        
    void DisplayTeacherInfor(){
        DisplayPersonInfor();
        cout<<"Subject: "<<subject<<endl;
    }
};
int main(){
    Teacher obj("NANA",14,"MM");
    cout<<"Information"<<endl;
    obj.DisplayTeacherInfor();
    cout<<endl;
    return 0;
}