#include<iostream>
using namespace std;
const int ROWS=10;
const int COLUMS=15;
void ViewSeat(char seat[ROWS][COLUMS]){
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMS;j++){
            cout<<seat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Bookseat(char seat[ROWS][COLUMS]){
    int row,colum;
    cout<<"Enter Row:";cin>>row;
    cout<<"Enter COLUM:";cin>>colum;
    if(row>=0 && row<ROWS && colum>=0 && colum<COLUMS){
        if(seat[row][colum]=='0'){
            seat[row][colum]='X';
            cout<<"Seat Booked Successfully!"<<endl;
        }else{
            cout<<"Seat Already Booked!"<<endl;
        }
        
    }else{
        cout<<"Invalid Row or Colum"<<endl;
    }
}
void Removeseat(char seat[ROWS][COLUMS]){
    int removeseat;
    int row,colum;
    cout<<"Enter Row:";cin>>row;
    cout<<"Enter Colum:";cin>>colum;
    if(row>=0 && row<ROWS && colum>=0 && colum<COLUMS){
        if(seat[row][colum]=='X'){
            seat[row][colum]='0';
        }
        cout<<"Removed successfully!"<<endl;
    }else{
        cout<<"Ivalid ROWS AND COLUMS"<<endl; 
    }
}
int main(){
    system("cls");
    int option;
    char seat[ROWS][COLUMS];
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMS;j++){
            seat[i][j]='0';
        }
        cout<<endl;
    }
    do{
        cout<<"*********************[CINIME SEAT]***********************"<<endl;
        cout<<"1.VIEW SEAT"<<endl;
        cout<<"2.BOOK SEAT"<<endl;
        cout<<"3.Remove SEAT"<<endl;
        cout<<"0.Exit[0]"<<endl;
        cout<<"Please Choose Option:";cin>>option;
        switch(option){
            case 0 :{
                cout<<"-------------Exit The Program.--------------------"<<endl;
                break;
            }
            case 1 :{
                ViewSeat(seat);
                break;
            }
            case 2 :{
                Bookseat(seat);
                break;
            }
            case 3 :{
                Removeseat(seat);
                break;
            }
                
        }
        
    }while(option!=0);
    return 0;
}