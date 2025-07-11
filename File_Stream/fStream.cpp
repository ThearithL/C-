// #include<fstream>
// using namespace std;
// int main(){
//     //class
//     ofstream file;
//     //open the file
//     file.open("file.txt");
//     //Write
//     file<<"Hello World!"<<endl;
//     //close file
//     file.close();
//     return 0;
// };
// #include<fstream>
// #include<iostream>
// using namespace std;
// int main(){
//     int id;
//     float salary;
//     string name;
//     ofstream file;
//     file.open("Example.txt");
//     cout<<"Enter your name: ";cin>>name;
//     cout<<"Enter your id: ";cin>>id;
//     cout<<"Enter salary: ";cin>>salary;
//     file<<name<<"\t"<<id<<"\t"<<salary<<endl;
//file.close();

// };
#include<iostream>
#include<fstream>
using namespace std;
class Person{
    private:
    int id[100];
    float salary[100];
    string name[100];
    int size,i;
    public:
    void Input(){
        ofstream file("Test1.txt");
        cout<<"Enter the Size: ";cin>>size;
        for(i=0;i<size;i++){
        cout<<"Enter the Name: ";cin>>name[i];
        cout<<"Enter the id: ";cin>>id[i];
        cout<<"Enter the Salary: ";cin>>salary[i];
        
        }
        file.close();
    }
    void Display(){
        string line;
        ifstream file("Test1.txt");
        while (getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }

};
int main(){
    Person P;
    P.Input();
    P.Display();
}