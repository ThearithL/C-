#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    system("cls");
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    cout<<"Guss a number between 1 and 100 : ";
    do{
        cin>>guess;
        if(guess > secret){
            cout<<"Too hight! Try again: ";
        } else if (guess < secret){
            cout<<"Too low! Try again: ";
        }else{
            cout<<"Congratulation! You guessed it right  ";
        }
    }while(guess != secret);
    
    return 0;
}