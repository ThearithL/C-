// #include<iostream>
// using namespace std;
// float Function(){
//     int a=10;
//     return a;
// }
// void Sum(){
//    int a=Function();
//     cout<<"a="<<a<<endl;
// }
// int main(){
//     system("cls");
//     Sum();
//     return 0;
// }
#include<iostream>
#include<iomanip>
using namespace std;
int code,quantity;
float price,total,payment,tax,discount;
string name;
void createproduct(){
    cout<<"*********************************************************"<<endl;
    cout<<"Enter code: ";cin>>code;
    cout<<"Enter  name: ";cin>>name;
    cout<<"Enter  price: ";cin>>price;
    cout<<"Enter quantity: ";cin>>quantity;
    cout<<"*********************************************************"<<endl;
total=price*quantity;
discount=(total>1&&total<=100)?5:
         (total>100&&total<=200)?10:
         (total>200&&total<=300)?15:
         (total>300&&total<=400)?20:
         (total>400)?25:
         0;
         tax=total*5/100;
         payment=total+tax-(total*discount)/100;
}
void displayproduct(){
   cout<<"================================================================================================"<<endl;
   cout<<setw(12)<<"CODE"
       <<setw(12)<<"NAME"
       <<setw(12)<<"QUANTITY"
       <<setw(12)<<"DISCOUNT"
       <<setw(12)<<"TAX"
       <<setw(12)<<"TOTAL"
       <<setw(12)<<"PAYMENT"
       <<endl;
     cout<<setw(12)<<code
       <<setw(12)<<name
       <<setw(12)<<quantity
       <<setw(12)<<discount
       <<setw(12)<<tax
       <<setw(12)<<total
       <<setw(12)<<payment
       <<endl;

}

int main(){
    system("cls");
    int option;
    do{
    cout<<"*******************************************************"<<endl;
    cout<<"1.create the new product"<<endl;
    cout<<"2.display the product"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"choose option:";cin>>option;
    cout<<"*******************************************************"<<endl;
    switch (option) {
        case 1:{
            createproduct();
            break;
        }
        case 2:{
            displayproduct();
            break;
        }
        case 3:{
            cout<<"===================[ Out program ]========================="<<endl;
            break;
        }
        default : {
            cout<<"please try again"<<endl;
            break;
        }
            }
    }while(option!=3);
    
    return 0;
}


