#include<iostream>
#include<iomanip>
using namespace std;
int main() {
  int id;
  string phone, name;
  //input data
  cout << "Enter ID           :";
  cin >> id;
  cout << "Enter name         :";
  cin >> name;
  cout << "Enter phone number :";
  cin >> phone;
  string last3 = phone.substr(phone.length() - 3);
  //output data
  cout << "\n";
  cout
          << setw(9)  << left << "ID"
          << setw(10) << left << "name"
          << setw(15) << left << "Phone" << endl;
  cout
          << setw(9) << left << id
          << setw(9) << left << name
          << setw(9) << setfill('*')  << ""
          << last3 << endl;
  return 0;
}
