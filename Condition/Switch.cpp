#include<iostream>
using namespace std;
int main(){
    system("cls");
    int op;
    cout<<"please choose an option:";cin>>op;
    switch (op)
    {
        case 1 :cout<<"today is monday"<<endl;break;
        case 2 :cout<<"today is tueday"<<endl;break;
        case 3 :cout<<"today is wednesday"<<endl;break;
        case 4 :cout<<"today is thursday"<<endl;break;
        case 5 :cout<<"today is friday"<<endl;break;
        case 6 :cout<<"today is saturday"<<endl;break;
        case 7 :cout<<"today is sunday"<<endl;break;
        default :cout<<"invalid option ,please try again."<<endl;
    }
    return 0;
}