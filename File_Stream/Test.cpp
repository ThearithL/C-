#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int size,id;
    string name;
    float salary;
    fstream file("Test1.txt",ios::ate|ios::app);
    cout<<"Enter The Size: ";cin>>size;
    for(int i=0;i<size;i++){
    cout<<"Enter the name: ";cin>>name;
    cout<<"Enter the id: ";cin>>id;
    cout<<"Enter the salary: ";cin>>salary;
    }
    for(int i=0;i<size;i++)
    file<<name<<"\t"<<id<<"\t"<<salary<<endl;
    file.close();
   

}