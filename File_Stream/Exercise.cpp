#include<iostream>
#include<fstream>
using namespace std;
class Student{
    private:
    string name;
    int age,gpa;
    public:
    fstream file;
    void Creare_Student_Details(){
        file.open("Student.txt",ios::out);
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter Age: ";cin>>age;
        cout<<"Enter GPA: ";cin>>gpa;
        file<<name<<"\t"<<age<<"\t"<<gpa<<endl;
        file.close();
    }
    void Display_Student_Details(){
        file.open("Student.txt",ios::in);
        string line;
       while(getline(file,line)){
            cout<<line<<endl;
        }
        file.close();
       }
    void ADD_Student_Details(){
        file.open("Student.txt",ios::app);
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter Age: ";cin>>age;   
        cout<<"Enter GPA: ";cin>>gpa;
        file<<name<<"\t"<<age<<"\t"<<gpa<<endl;
        file.close();
    }
};
int main(){
    Student S;
    int choice;
    do{
        cout<<"1. Create Student Details"<<endl;
        cout<<"2. Display Student Details"<<endl;
        cout<<"3. Add Student Details"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                S.Creare_Student_Details();
                system("pause");
                break;
            case 2:
                S.Display_Student_Details();
                system("pause"); 
                break;
            case 3:
                S.ADD_Student_Details();
                system("pause");
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice, please try again."<<endl;
        }
    } while(choice != 4);
    return 0;
}