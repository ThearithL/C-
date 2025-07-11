#include<iostream>
#include<iomanip>
using namespace std;
float output(int id,string name,float price,int quantity,int discount,long total,float payment){
    total=price*quantity;
    payment=total-(total * discount)/100;
    cout<<setw(12)<<"ID"
        <<setw(12)<<"NAME"
        <<setw(12)<<"QUANTITY"
        <<setw(12)<<"PRICE"
        <<setw(12)<<"DISCOUNT"
        <<setw(12)<<"TOTAL"
        <<setw(12)<<"PAYMENT"
        <<endl;
    cout<<setw(12)<<id 
        <<setw(12)<<name
        <<setw(12)<<quantity
        <<setw(12)<<price
        <<setw(12)<<discount
        <<setw(12)<<total
        <<setw(12)<<payment
        <<endl;

}
int main(){
    int id,price,quantity;
    float discount,total,payment;
    string name;
    cout<<"ENTER ID:";cin>>id;
    cout<<"ENTER NAME:";cin>>name;
    cout<<"ENTER PRICE:";cin>>price;
    cout<<"ENTER QUANTITY:";cin>>quantity;
    cout<<"ENTER DISCOUNT: ";cin>>discount;
    output(id,name, price,quantity, discount, total,payment);
    cout<<"========================================[END]============================================"<<endl;
    return 0;
}


