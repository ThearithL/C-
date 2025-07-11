#include<iostream>
#include<fstream>
using namespace std;

class Person {
private:
    int id[100];
    float salary[100];
    string name[100];
    int size;
public:
    void Input() {
        ofstream file("Test1.txt");
        cout << "Enter the Size: "; cin >> size;
        for (int i = 0; i < size; i++) {
            cout << "Enter the Name: "; cin >> name[i];
            cout << "Enter the id: "; cin >> id[i];
            cout << "Enter the Salary: "; cin >> salary[i];
            // Write to file immediately after input
            file << name[i] << "\t" << id[i] << "\t" << salary[i] << endl;
        }
        file.close();
    }
    
    void Display() {
        string line;
        ifstream file("Test1.txt");
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    void in(){
        fstream file("Test1.txt", ios::ate | ios::app);
        cout << "Enter the Size: "; cin >> size;
        for (int i = 0; i < size; i++) {
            cout << "Enter the Name: "; cin >> name[i];
            cout << "Enter the id: "; cin >> id[i];
            cout << "Enter the Salary: "; cin >> salary[i];
            // Write to file immediately after input
            file << name[i] << "\t" << id[i] << "\t" << salary[i] << endl;
        }
    }
};

int main() {
    Person P;
    P.Input();
    P.Display();
    P.in();
    return 0;
}