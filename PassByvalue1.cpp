/*
#include<iostream>
using namespace std;
int Value(int &a){
    a=10;
    cout<<"Function A= "<<a<<endl;
}
int main(){
    //Pass by value
    int a=20;
    cout<<"Before in Function "<<a<<endl;
    Value(a);
    cout<<"After Outside from Functiom A= "<<a<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int Reference(int &a){
    a=10;
    cout<<"Inside Function  A = "<<a<<endl;
}
int main(){
    //Pass by Referance
    int a=20;
    cout<<"Before enter  Function "<<a<<endl;
    Reference(a);
    cout<<"After Outside from Functiom A= "<<a<<endl;
    return 0;
}
