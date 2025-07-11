#include<iostream>
using namespace std;
class Name{
     public:
    int X;
    int Y;
void Input(){
    cout<<"Enter Value X:";cin>>X;
    cout<<"Enter Value Y:";cin>>Y;
}
void Output(){
    cout<<"X="<<X<<endl;
    cout<<"Y="<<Y<<endl;
}
};
int main(){
    Name obj;
    obj.Input();
    obj.Output();

    return 0;
}