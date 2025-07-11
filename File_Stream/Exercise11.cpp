#include<fstream>
#include<iostream>
using namespace std;
   char str[100][100];
   int id[100],n;
   char name[100][100], gender[100][100],greade[100][100];
   float average[100];
void Create_Student(){
    fstream file("Student1111.bin", ios::out | ios::binary);
    cout<<"Enter the n of Student: "; cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the id of Student: "; cin>>id[i];
    cout<<"Enter the name of Student: "; cin>>name[i];
    cout<<"Enter the gender of Student: "; cin>>gender[i];
    cout<<"Enter the greade of Student: "; cin>>greade[i];
    cout<<"Enter the average of Student: "; cin>>average[i];
    sprintf(str[i], "%d \t %s \t %s \t %s \t %.2f \n ",id[i],name[i],gender[i],greade[i],average[i]);
    file.write(str[i], sizeof(str[i]));
    }
    file.close();
    cout << "Student details saved successfully!" << endl;
}
void Display_Student(){
    fstream file("Student1111.bin", ios::in | ios::binary);
    cout << "\n\n The Student details are: " << endl;
    cout<<"ID\tName\tGender\tGreade\tAverage"<<endl;
    cout << "----------------------------------------" << endl;
    for(int i=0;i<n;i++){
    file.read((char*)str[i], sizeof(str[i]));
    cout<<str[i]<<endl;;
    }
    file.close();
    cout << "Student details read successfully!" << endl;
}
void ADD_Student(){
    fstream file("Student1111.bin", ios::out | ios::app|ios::binary);
    cout << "\n\nEnter the details of new Student: ";cin>>n;
    for(int i=0;i<n;i++)
    {   
    cout<<"Enter the id of Student: "; cin>>id[i];
    cout<<"Enter the name of Student: "; cin>>name[i];
    cout<<"Enter the Gender of Student: "; cin>>gender[i];
    cout<<"Enter the Greade of Student: "; cin>>greade[i];
    cout<<"Enter the Average of Student: "; cin>>average[i];
    file<<id[i]<<"\t"<<name[i]<<"\t"<<gender[i]<<"\t"<<greade[i]<<"\t"<<average[i]<<endl;
     sprintf(str[i],"%d \t %s \t %s \t %s \t %.2f ",id[i],name[i],gender[i],greade[i],average[i]);
     file.write(str[i],sizeof(str[i]));
}
} 
int main(){
    int choose;
    do{
         cout<<"0.EXIT "<<endl;
         cout<<"1.Create Student."<<endl;
         cout<<"2.Display Student."<<endl;
         cout<<"3.ADD Student."<<endl;
         cout<<"Enter Your Choose: ";cin>>choose;
            switch (choose)
            {
            case 0:
                cout<<"Exit The Program!"<<endl;
                break;
            case 1:
                //Create_Student();
                break;
            case 2:
                Display_Student();
                break;
            case 3:
                ADD_Student();
                break;
            default:
                    cout<<"Invalid Choice! Please try again."<<endl;
                break;
            }


    }while(choose!=0);

    return 0;
}