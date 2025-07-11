#include<iostream>
#include<fstream>
using namespace std;
void displayStudentDetails() {
    fstream file;
    char str[100][100];
    int size;
    string line;
    file.open("Student.bin", ios::in | ios::binary);
    cout << "----------------------------------------" << endl;
        for(int i=0; i<size; i++){
        sscanf(str[i], "%s %d %c %s %s %d %d", str[i], &size, &str[i][0], &str[i][1], &str[i][2], &str[i][3], &str[i][4]);
        file.read((char*)str[i], sizeof(str[i]));
        }
    cout << "----------------------------------------" << endl;
}
int main(){
    fstream file("Student.bin", ios::out | ios::binary);
     char str[100][100];
    char name[100][100],address[100][100],email[100][100];
    int age [100],gpa[100],phone[100],size,i;
    char gender[100][100];
    cout<<"Enter the size of Student: ";cin>>size;
    for(i=0; i<size; i++)
    {
        cout << "\n\nEnter the details of Student " << i + 1 << endl;
        cout<<"----------------------------------------"<<endl; 
        cout<<"Enter the name of Student: ";cin>>name[i];
        cout<<"Enter the age  of Student: ";cin>>age [i];
        cout<<"Enter the gender of Student [M/F] :";cin>>gender[i];
        cout<<"Enter the email of Student: ";cin>>email[i];
        cout<<"Enter the address of Student: ";cin>>address[i];
        cout<<"Enter the gpa of Student: ";cin>>gpa[i];
        cout<<"Enter the phone of Student: ";cin>>phone[i];
        sprintf(str[i], "%s %d %c %s %s %d %d", name[i], age[i],gender[i], email[i], address[i], gpa[i], phone[i]);
        file.write(str[i], sizeof(str[i]));
        }

        cout << "----------------------------------------" << endl;
        file.close();
        displayStudentDetails();

    return 0;
}