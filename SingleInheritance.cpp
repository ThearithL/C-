#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    float Base_salary;
    int rating;
    public:
    /*
    setEmployee(string n,float Bs,int r){
        name=n;
        Base_salary=Bs;
        rating=r;
    }
    */
    Employee(){
        name="N/A";
        Base_salary=0;
        rating=0;
    }
    Employee(string n,float Bs,int r){
        name=n;
        Base_salary=Bs;
        rating=r;
    }
    float CalRated(){
        if(rating == 5) return 0.3;
   else if(rating == 4) return 0.2;
   else if(rating == 3) return 0.1;
   else return 0.0;
    }
};
class Bonuscal: public Employee{
    private:
    float bonus;
    float total;
    public:
    Bonuscal():Employee(){}
    Bonuscal(string n,float Bs,int r):Employee(n,Bs,r){}
    void Display(){
        bonus=Base_salary * CalRated();
        total=Base_salary + bonus;
        cout<<"Name         : "<<name<<endl;
        cout<<"Base Salary  : "<<Base_salary<<endl;
        cout<<"Rated        : "<<rating<<endl;
        cout<<"Total        : "<<total<<endl;
    }
};
int main(){
    string username;
    float salary;
    int n,rate;
    Bonuscal obj[100];
    cout<<"Enter Size of Employee: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Employee #"<<i+1<<endl;
        cout<<"Enter the Username: ";cin>>username;
        cout<<"Enter the Salary: ";cin>>salary;
        cout<<"Enter The rate: ";cin>>rate;
        //obj[i].setEmployee(username,salary,rate);
        obj[i]=Bonuscal(username,salary,rate);
    }
    for(int i=0;i<n;i++){
       obj[i].Display(); 
    }
    return 0;
}