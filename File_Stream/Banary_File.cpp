#include<fstream>
using namespace std;
#include<iostream>
int main(){
    fstream file("Number.bin", ios::out | ios::binary);
    int number;
    char str[100];
    cout<<"Enter a number: ";
    cin>>number;
    //Open a banary file in write mode
    sprintf(str, "%d", number);
    //write to the file
    file.write(str, sizeof(str));
    file.close();
    fstream readfile("Number.bin", ios::in | ios::binary);
    readfile.read(str, sizeof(str));
    //read from the file
    cout << "The number is: " << str << endl;
    // Close the file
    readfile.close();
    return 0;
}