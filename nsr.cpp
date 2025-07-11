#include<iostream>
using namespace std;
int main(){
    system("cls");
    int start,end;
    cout<<"Enter the number for start : "; cin>>start;
    cout<<"Enter the number for end : ";    cin>>end;
    for(int i = start; i<=end;i++){
        cout<<endl;
        for(int j=1;j<=10;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }


    }







    return 0;
}