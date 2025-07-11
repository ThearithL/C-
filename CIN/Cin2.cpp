// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     char gender;
//     string Name;
//     string address;
//     cout<<"===========================================INPUT==========================================="<<endl;
//     cout<<"Enter Name :";cin>>Name;
//     cout<<"Enter Gender [M/F]:";cin>>gender;
//     cout<<"Enter address :";cin.ignore();getline(cin,address);
//     cout<<"==========================================OUTPUT============================================"<<endl;
//     cout<<"Name :"<<Name<<endl;
//     cout<<"Gender :"<<gender<<endl;
//     cout<<"address :"<<address<<endl;
//     cout<<"==========================================END================================================="<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int id,qty,discount;
    string name;
    double price,total,payment;
    cout<<"Enter id :";cin>>id;
    cout<<"Enter name :";cin>>name;
    cout<<"Enter qty :";cin>>qty;
    cout<<"Enter price :";cin>>price;
    cout<<"discount %:";cin>>discount;
    total=price*qty;
    payment=total-(total * discount)/100;
    cout<<"\n===================================PRODUCT DITAIL=================================="<<endl;
    cout<<"Product id :"<<id<<endl;
    cout<<"Product  Name :"<<name<<endl;
    cout<<"Product Quantity :"<<qty<<endl;
    cout<<"Product Price :"<<price<<endl;
    cout<<"Product Discount :"<<discount<<"%"<<endl;
    cout<<" Payment Amount  : $"<<payment<<endl;
    cout<<"=========================================END============================================="<<endl;
    return 0;
}