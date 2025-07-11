/*
#include<iostream>
using namespace std;
class Persion{
    public :    //acess 
    string name;
    int id;
    float salary;
    char gender;
    public :
    void Input(){
        cout<<"Enter name : "  ;cin>>name;
        cout<<"Enter id :   "  ;cin>>id;
        cout<<"Enter salary : ";cin>>salary;
        cout<<"Enter gender : ";cin>>gender;
    }
    void Display(){
        cout<<"Name  : "<<name<<endl;
        cout<<"id    : "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"gender: "<<gender<<endl;

    }
};
int main()
{
    Persion h;
    h.Input();
    h.Display();
  
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Employee{
    public:
    int code;
    string name;
    char sex;
    float salary;
    public:
    void Input(){
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter code: ";cin>>code;
        cout<<"Enter sex: ";cin>>sex;
        cout<<"Enter salary: ";cin>>salary;

    }
    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"code: "<<code<<endl;
        cout<<"sex: "<<sex<<endl;
        cout<<"salary: "<<salary<<endl;
    }


};
int main(){
    system("cls");
    Employee A;
    A.Input();
    cout<<"------------------------------"<<endl;
    A.Display();
    cout<<"------------------------------"<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Persion{
    private:
    int id;
    float salary;
    char gender;
    string name;
    public:
    void Input(){
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter id: ";cin>>id;
        cout<<"Enter gender: ";cin>>gender;
        cout<<"Enter salary: ";cin>>salary;

    }
    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"code: "<<id<<endl;
        cout<<"gender: "<<gender<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main(){
    Persion P;
    P.Input();
    P.Display();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Book{
    private:
    string title[10],author[10],Search_book;
    float price[10];
    int quantity[10],n;
    public:
    void Input(){
        cout<<"Enter N: ";cin>>n;
        for(int i=0;i<n;i++){
        cout<<"Enter Title: ";cin>>title[i];
        cout<<"Enter Author: ";cin>>author[i];
        cout<<"Enter Quantity: ";cin>>quantity[i];
        cout<<"Enter Price: ";cin>>price[i];
        }
    }
    void Output(){
        for(int i=0;i<n;i++){
        cout<<"Title: "<<title[i]<<endl;
        cout<<"Author: "<<author[i]<<endl;
        cout<<"Quantity: "<<quantity[i]<<endl;
        cout<<"Price: "<<price[i]<<endl;
    }
}
    void Search(){
        cout<<"Enter the title for search: ";cin>>Search_book;
        for(int i=0;i<n;i++){
            if(Search_book==title[i]){
            cout<<"Title: "<<title[i]<<endl;
            cout<<"Author: "<<author[i]<<endl;
            cout<<"Quantity: "<<quantity[i]<<endl;
            cout<<"Price: "<<price[i]<<endl;
            }
        }
    }
};
int main(){
    Book B;
    cout<<"------------------------------------------------------"<<endl;
    B.Input();
    cout<<"------------------------------------------------------"<<endl;
    B.Output();
    cout<<"------------------------------------------------------"<<endl;
    B.Search();
    cout<<"------------------------------------------------------"<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    public:
    void setvariable(int n,string i){
      this-> id=n;
      this-> name=i;

    }
    void Display(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
    }
};
    class Area{
        private:
        float X,Y;
        public:
        void setX(float x){
            X=x;
        }
        void setY(float y){
            Y=y;
        }
        float getX(){
            return X;
        }
        float getY(){
            return Y;
        }
    
};

int main(){
    Employee e;
    e.setvariable(10,"hi");
    e.Display();
    Area a;
    a.setX(7.8f);
    a.setY(8.9f);
    cout<<"X+Y="<<a.getX()+a.getY()<<endl;
    cout<<"X-Y="<<a.getX()-a.getY()<<endl;
    cout<<"X*Y="<<a.getX()*a.getY()<<endl;
    cout<<"X/Y="<<a.getX()/a.getY()<<endl;
    return 0;
}
