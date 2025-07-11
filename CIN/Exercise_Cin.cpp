#include<iostream>
using namespace std;
int main(){
    system("cls");
    int total;
    float score1,score2,score3,score4,score5,avg;
    char grade;
    cout<<"======INPUT SCORE======"<<endl;
    cout<<"Input score1 :";cin>>score1;
    cout<<"Input score2 :";cin>>score2;
    cout<<"Input score3 :";cin>>score3;
    cout<<"Input score4 :";cin>>score4;
    cout<<"Input score5 :";cin>>score5;
    total=score1+score2+score3+score4+score5;
    avg=total/5;
    if(avg>0&&avg<=50){
        grade='F';
        }else if(avg>50&&avg<=60){
            grade='E';
        }else if(avg>60&&avg<=70){
            grade='D';
        }else if(avg>70&&avg<=80){
            grade='C';
        }else if(avg>80&&avg<=90){
            grade='B';
        }else if(avg>90&&avg<=100){
            grade='A';
        }
        cout<<"=================================================OUTPUT SCORE==================================="<<endl;
        cout<<"score1: "<<score1<<endl;
        cout<<":score2 "<<score2 <<endl;
        cout<<"score3: "<<score3<<endl;
        cout<<"score4: "<<score4<<endl;
        cout<<"score5: "<<score5<<endl;
        cout<<"=========================================OUTPUT TOTAL AVERAGE GRADE==========================="<<endl;
        cout<<"TOTAL :"<<total<<endl;
        cout<<"AVERAGE :"<<avg<<'%'<<endl;
        cout<<"GRADE :"<<grade<<endl;
        cout<<"===============================================[ END ]==========================================="<<endl;
return 0;
 }







