#include<iostream>
using namespace std;
int main()
{
    system("cls");
    float Score1,Score2,Score3,Score4,Score5,Total,average;
    cout<<"Enter Score1 :";cin>>Score1;
    cout<<"Enter Score2 :";cin>>Score2;
    cout<<"Enter Score3 :";cin>>Score3;
    cout<<"Enter Score4 :";cin>>Score4;
    cout<<"Enter Score5 :";cin>>Score5;
    Total=Score1+Score2+Score3+Score4+Score5;
    average=Total/5;
    cout<<"Total"<<Total<<endl;
    cout<<"average"<<average<<endl;
return 0;
}