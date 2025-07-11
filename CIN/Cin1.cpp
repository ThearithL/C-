// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     char gender;
//     string name;
//     string address; 
//     cout<<"=================================INPUT========================================"<<endl;
//     cout<<"Enter your Name : ";getline(cin,name);
//     cout<<"Enter your gender [M/F] :";cin>>gender;
//     cout<<"Enter address : ";cin.ignore();getline(cin,address);
//     cout<<"==================================OUTPUT======================================="<<endl;
//     cout<<"Name :"<<name<<endl;
//     cout<<"Gender [M/f]:"<<gender<<endl;
//     cout<<"Address :"<<address<<endl;
//     cout<<"==================================END==========================================="<<endl;
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int code,qty;
    string name;
    double price,disc;
    float total,payment;
    cout<<"code :";cin>>code;
    cout<<"name :";cin>>name;
    cout<<"qty :";cin>>qty;
    cout<<"price :";cin>>price;
    cout<<"=====[Product Shop]====="<<endl;
    total=price*qty;
    if(total>0 && total<=10){
        disc=10;
    }else if(total>10&&total<=20){
        disc=20;}
    else if(total>20&&total<=30){
        disc=30;
    }else if(total>30&&total<=40){
        disc=40;
    }else if(total>40&&total<=50){
        disc=50;
    }else if(total>50&&total<=60){
        disc=60;
    }else if(total>60){
        disc=70;
    }else{
        cout<<"invalid discount"<<endl;
    }
    payment=total-(total*disc)/100;
    cout<<"=======BILL========="<<endl;
    cout<<"code"<<code<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"qty:"<<qty<<endl;
    cout<<"price:"<<price<<'$'<<endl;
    cout<<"dis"<<disc<<endl;
    cout<<"total:"<<total<<endl;
    cout<<"payment:"<<payment<<'$'<<endl;

return 0;
}