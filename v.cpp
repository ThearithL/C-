#include<iostream>
using namespace std;
int main(){
    float time_in,time_out,Duration;
    string name,card;
    system("color 0A"); // Set console text color to green on black background
    system("cls"); // Clear the console screen
    cout<<"===========[ Parking System ]============="<<endl<<endl;
    cout<<"================[ Input ]================="<<endl;
    cout<<"Enter your Card  :  ";cin>>card;
    cout<<"Enter your Name  :  ";cin>>name;
    cout<<"Enter Time In    :  ";cin>>time_in;
    cout<<"Enter Time Out   :  ";cin>>time_out;
    cout<<"=================[ Output ]================"<<endl;
    cout<<"Card Number      :  "<<card<<endl;
    cout<<"Name             :  "<<name<<endl;
    cout<<"Time In          :  "<<time_in<<endl;
    cout<<"Time Out         :  "<<time_out<<endl;
    Duration = time_out - time_in;
    cout<<"Duration         :  "<<Duration<<endl;
    cout<<"==================Thank You================="<<endl;
    return 0;
}
