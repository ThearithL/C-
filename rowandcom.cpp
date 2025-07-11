#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter the row : ";   cin>>row;
    cout<<"Enter the column : "; cin>>column;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=column;j++){
            cout<<"<<i<<"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }
    return 0;
}