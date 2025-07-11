#include <iostream>
#include <iomanip>
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RESET "\033[0m"
using namespace std;
int Employee_ID[100], Size_Employee;
string Employee_Name[100], Employee_Position[100], Employee_Status[100], Employee_Level[100], Employee_Marital_Status[100], Employee_Address[100], Employee_Email[100], Employee_Department[100];
float Employee_Salary[100];
long Employee_Birthday[100], Employee_Phone_Number[100];
bool check;
void Create()
{
    cout << "Enter Size Employee: ";
    cin >> Size_Employee;
    for (int i = 0; i < Size_Employee; i++)
    {
        cout << "Enter NAME: ";
        cin >> Employee_Name[i];
        cout << "Enter ID: ";
        cin >> Employee_ID[i];
        cout << "Enter Department: ";
        cin >> Employee_Department[i];
        cout << "Enter Salary: ";
        cin >> Employee_Salary[i];
        cout << "Enter Position: ";
        cin >> Employee_Position[i];
        cout << "Enter Birthday: ";
        cin >> Employee_Birthday[i];
        cout << "Enter Address: ";
        cin.ignore();
        getline(cin, Employee_Address[i]);
        cout << "Enter Phone Number: ";
        cin >> Employee_Phone_Number[i];
        cout << "Enter Email: ";
        cin >> Employee_Email[i];
        cout << "Enter Status(Active,Inactive): ";
        cin >> Employee_Status[i];
        cout << "Enter Level(Manager,Superviser,Employee): ";
        cin >> Employee_Level[i];
        cout << "Enter Marital Status(Single,Married,Divorced,Windowed): ";
        cin >> Employee_Marital_Status[i];
    }
}
void Display()
{
    cout << "=========================================================================================================================================================================" << endl;
    cout << left;
    cout << setw(10) << "NAME"
         << setw(10) << "ID"
         << setw(15) << "DEPARTMENT"
         << setw(15) << "SALARY"
         << setw(15) << "POSITION"
         << setw(15) << "BIRTHDAY"
         << setw(15) << "ADDRESS"
         << setw(15) << "PHONE"
         << setw(20) << "EMAIL"
         << setw(10) << "STATUS"
         << setw(10) << "LEVEL"
         << setw(10) << "MARITAL STATUS"
         << endl;
    cout << "==========================================================================================================================================================================" << endl;
    cout << left;
    for (int i = 0; i < Size_Employee; i++)
    {
        cout << setw(10) << Employee_Name[i]
             << setw(10) << Employee_ID[i]
             << setw(15) << Employee_Department[i]
             << setw(15) << Employee_Salary[i]
             << setw(15) << Employee_Position[i]
             << setw(15) << Employee_Birthday[i]
             << setw(15) << Employee_Address[i]
             << setw(15) << Employee_Phone_Number[i]
             << setw(20) << Employee_Email[i]
             << setw(10) << Employee_Status[i]
             << setw(10) << Employee_Level[i]
             << setw(10) << Employee_Marital_Status[i]
             << endl;
    }
    cout << "===========================================================================================================================================================================" << endl;
}
void Search()
{
    string Search_Name, Search_Position;
    float Search_Salary;
    int Search_ID, options;
    cout << "1.Search By ID." << endl;
    cout << "2.Search By Name." << endl;
    cout << "3.Search By Position." << endl;
    cout << "4.Search By Salary." << endl;
    cout << "Please Choose Option:";
    cin >> options;
    switch (options)
    {
    case 1:
    {
        cout << "Please Enter What you want to choose :";
        cin >> Search_ID;
        for (int i = 0; i < Size_Employee; i++)
        {
            if (Employee_ID[i] == Search_ID)
            {
                cout << "ID:" << Employee_ID[i] << endl;
                cout << "Name" << Employee_Name[i] << endl;
                cout << "Position:" << Employee_Position[i] << endl;
                cout << "Salary:" << Employee_Salary[i] << endl;
                cout << "Department:" << Employee_Department[i] << endl;
                cout << "Birthday:" << Employee_Birthday[i] << endl;
                cout << "Address:" << Employee_Address[i] << endl;
                cout << "Phone Number:" << Employee_Phone_Number[i] << endl;
                cout << "Status:" << Employee_Status[i] << endl;
                cout << "Level:" << Employee_Level[i] << endl;
                cout << "Employee_Marital_Status:" << Employee_Marital_Status[i] << endl;
            }
        }
        break;
    }
    case 2:
    {
        cout << "Please Enter Name:";
        cin >> Search_Name;
        for (int i = 0; i < Size_Employee; i++)
        {
            if (Employee_Name[i] == Search_Name)
            {
                cout << "ID:" << Employee_ID[i] << endl;
                cout << "Name:" << Employee_Name[i] << endl;
                cout << "Position:" << Employee_Position[i] << endl;
                cout << "Salary:" << Employee_Salary[i] << endl;
                cout << "Department:" << Employee_Department[i] << endl;
                cout << "Birthday:" << Employee_Birthday[i] << endl;
                cout << "Address:" << Employee_Address[i] << endl;
                cout << "Phone Number:" << Employee_Phone_Number[i] << endl;
                cout << "Status:" << Employee_Status[i] << endl;
                cout << "Level:" << Employee_Level[i] << endl;
                cout << "Marital Status:" << Employee_Marital_Status[i] << endl;
            }
        }
        break;
    }
    case 3:
    {
        cout << "Please Enter Position: ";
        cin >> Search_Position;
        for (int i = 0; i < Size_Employee; i++)
        {
            if (Employee_Position[i] == Search_Position)
            {
                cout << "ID:" << Employee_ID[i] << endl;
                cout << "Name:" << Employee_Name[i] << endl;
                cout << "Position:" << Employee_Position[i] << endl;
                cout << "Salary:" << Employee_Salary[i] << endl;
                cout << "Department:" << Employee_Department[i] << endl;
                cout << "Birthday:" << Employee_Birthday[i] << endl;
                cout << "Address:" << Employee_Address[i] << endl;
                cout << "Phone Number:" << Employee_Phone_Number[i] << endl;
                cout << "Status:" << Employee_Status[i] << endl;
                cout << "Level:" << Employee_Level[i] << endl;
                cout << "Marrital Status:" << Employee_Marital_Status[i] << endl;
            }
        }
    }
    break;
    case 4:
    {
        cout << "Please Enter Salary:";
        cin >> Search_Salary;
        for (int i = 0; i < Size_Employee; i++)
        {
            if (Employee_Salary[i] == Search_Salary)
            {
                cout << "ID:" << Employee_ID[i] << endl;
                cout << "Name:" << Employee_Name[i] << endl;
                cout << "Position:" << Employee_Position[i] << endl;
                cout << "Salary:" << Employee_Salary[i] << endl;
                cout << "Department:" << Employee_Department[i] << endl;
                cout << "Birthday:" << Employee_Birthday[i] << endl;
                cout << "Address:" << Employee_Address[i] << endl;
                cout << "Phone Number:" << Employee_Phone_Number[i] << endl;
                cout << "Status:" << Employee_Status[i] << endl;
                cout << "Level:" << Employee_Level[i] << endl;
                cout << "Marital Status:" << Employee_Marital_Status[i] << endl;
            }
        }
    }
    break;
    }
}
void Update()
{
    int new_ID, update_Employee;
    string new_Name, new_Position;
    float new_Salary;
    cout << "Enter ID for update detail:";
    cin >> update_Employee;
    for (int i = 0; i < Size_Employee; i++)
    {
        if (Employee_ID[i] == update_Employee)
        {
            cout << "Enter New ID: ";
            cin >> new_ID;
            cout << "Enter New NAME: ";
            cin >> new_Name;
            cout << "Enter New Position: ";
            cin >> new_Position;
            cout << "Enter New Salary: ";
            cin >> new_Salary;
            Employee_ID[i] = new_ID;
            Employee_Name[i] = new_Name;
            Employee_Position[i] = new_Position;
            Employee_Salary[i] = new_Salary;
        }
    }
}
void Delate()
{
    int delate_code;
    cout << "Enter ID For Delate: ";
    cin >> delate_code;
    for (int i = 0; i < Size_Employee; i++)
    {
        if (delate_code == Employee_ID[i])
        {
            for (int j = i; j < Size_Employee - 1; j++)
            {
                Employee_ID[i] = Employee_ID[j + 1];
                Employee_Name[i] = Employee_Name[j + 1];
                Employee_Position[i] = Employee_Position[j + 1];
                Employee_Salary[i] = Employee_Salary[j + 1];
                Employee_Department[i] = Employee_Department[j + 1];
                Employee_Salary[i] = Employee_Salary[j + 1];
                Employee_Birthday[i] = Employee_Birthday[j + 1];
                Employee_Address[i] = Employee_Address[j + 1];
                Employee_Phone_Number[i] = Employee_Phone_Number[j + 1];
                Employee_Email[i] = Employee_Email[j + 1];
                Employee_Status[i] = Employee_Status[j + 1];
                Employee_Level[i] = Employee_Level[j + 1];
                Employee_Marital_Status[i] = Employee_Marital_Status[j + 1];
            }
            Size_Employee--;
        }
    }
}
void Insert()
{
    int add_Size, add_ID;
    string add_Name, add_Position;
    float add_Salary;
    cout << "Enter ADD Size:";
    cin >> add_Size;
    for (int i = Size_Employee; i < Size_Employee + add_Size; i++)
    {
        cout << "Enter New NAME: ";
        cin >> Employee_Name[i];
        cout << "Enter New ID: ";
        cin >> Employee_ID[i];
        cout << "Enter New Position: ";
        cin >> Employee_Position[i];
        cout << "Enter New Salary: ";
        cin >> Employee_Salary[i];
        cout << "Enter New Department:  ";
        cin >> Employee_Department[i];
        cout << "Enter New Birthday: ";
        cin >> Employee_Birthday[i];
        cout << "Enter New Address: ";
        cin >> Employee_Address[i];
        cout << "Enter Phone Number: ";
        cin >> Employee_Phone_Number[i];
        cout << "Enter New Email: ";
        cin.ignore();
        getline(cin, Employee_Email[i]);
        cout << "Enter New Status: ";
        cin >> Employee_Status[i];
        cout << "Enter New Level: ";
        cin >> Employee_Level[i];
        cout << "Enter New Marital Status: ";
        cin >> Employee_Marital_Status[i];
    }
    Size_Employee += add_Size;
}
void Sort()
{
    int option, answer;
    check = false;
    cout << "1.Sort By NAME [A-Z][Z-A]" << endl;
    cout << "2.Sort By ID [0-100][100-0]" << endl;
    cout << "3.Sort By Salary [1-$$$$][$$$$-1]" << endl;
    cout << "4.Sort By Position [A-Z][Z-A]" << endl;
    cout << "Please Choose option:";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "Choose For Sort" << endl;
        cout << "1.NAME [A-Z] " << endl;
        cout << "2.NAME [Z-A] " << endl;
        cout << "Choose Enter Number For Choosing:";
        cin >> answer;
        if (answer == 1)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_Name[i] > Employee_Name[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }

            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        if (answer == 2)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_Name[i] < Employee_Name[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }

            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        break;
    }
    case 2:
    {
        cout << "Choose For Sort" << endl;
        cout << "1.ID [0-100] " << endl;
        cout << "2.ID [100-0] " << endl;
        cout << "Choose Enter Number For Choosing:";
        cin >> answer;
        if (answer == 1)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_ID[i] > Employee_ID[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }

            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        if (answer == 2)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_ID[i] < Employee_ID[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }

            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        break;
    }
    case 3:
    {
        cout << "Choose For Sort" << endl;
        cout << "1.SALARY [1-$$$] " << endl;
        cout << "2.SALARY [$$$-1] " << endl;
        cout << "Choose Enter Number For Choosing:";
        cin >> answer;
        if (answer == 1)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_Salary[i] > Employee_Salary[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }
            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        if (answer == 2)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_Salary[i] < Employee_Salary[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }

            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        break;
    }
    case 4:
    {
        cout << "Choose For Sort" << endl;
        cout << "1.Position [A-Z] " << endl;
        cout << "2.Position [Z-A] " << endl;
        cout << "Choose Enter Number For Choosing:";
        cin >> answer;
        if (answer == 1)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j < Size_Employee; j++)
                {
                    if (Employee_Position[i] > Employee_Position[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }
            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        if (answer == 2)
        {
            for (int i = 0; i < Size_Employee; i++)
            {
                for (int j = i + 1; j > Size_Employee; j++)
                {
                    if (Employee_Position[i] > Employee_Position[j])
                    {
                        swap(Employee_Name[i], Employee_Name[j]);
                        swap(Employee_ID[i], Employee_ID[j]);
                        swap(Employee_Department[i], Employee_Department[j]);
                        swap(Employee_Salary[i], Employee_Salary[j]);
                        swap(Employee_Position[i], Employee_Position[j]);
                        swap(Employee_Birthday[i], Employee_Birthday[j]);
                        swap(Employee_Address[i], Employee_Address[j]);
                        swap(Employee_Phone_Number[i], Employee_Phone_Number[j]);
                        swap(Employee_Email[i], Employee_Email[j]);
                        swap(Employee_Status[i], Employee_Status[j]);
                        swap(Employee_Level[i], Employee_Level[j]);
                        swap(Employee_Marital_Status[i], Employee_Marital_Status[j]);
                        check = true;
                    }
                }
            }
            if (!check)
            {
                cout << "Sort Not Complate!" << endl;
            }
            else
            {
                cout << "Sort Complate!" << endl;
            }
        }
        break;
    }
    }
}
int main()
{
    system("cls");
    int Menu;
    do
    {
        cout << BLUE << "============================================================================== [ MENU ] ===============================================================================" << endl;
        cout << "1.Create Employee." << endl;
        cout << "2.Display All Employee." << endl;
        cout << "3.Search Employee." << endl;
        cout << "4.Update Employee Infortion." << endl;
        cout << "5.Delate Employee." << endl;
        cout << "6.Sort Employee." << endl;
        cout << "7.Insert Employee." << endl;
        cout << "0.Exit." << endl;
        cout << "Please Choose Menu: ";
        cin >> Menu;
        switch (Menu)
        {
        case 0:
        {
            cout << GREEN << "============================================================== [ Exit The Program. ] =============================================================================" << RESET << endl;
            break;
        }
        case 1:
        {
            Create();
            system("pause");
            break;
        }
        case 2:
        {
            Display();
            system("pause");
            break;
        }
        case 3:
        {
            Search();
            system("pause");
            break;
        }
        case 4:
        {
            Update();
            system("pause");
            break;
        }
        case 5:
        {
            Delate();
            system("pause");
            break;
        }
        case 6:
        {
            Sort();
            system("pause");
            break;
        }
        case 7:
        {
            Insert();
            system("pause");
            break;
        }
        }
    } while (Menu != 0);

    return 0;
}