#include <iostream>
#include <cstring>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

int main ()
{
    int loop, loop2;
    do//set pin loops
    {
         string pin;
         string pinconfirm;
         loop = 1;
         loop2 = 1;
         do 
         {
             cout<< "Please set 4 digit pin code: ";//set pin
             while ( (pin += getch()).at(pin.size()) != VK_RETURN )
             std::cout<< "*";
             if(pin.size() == 4)
             {
                 cout<< "\n\nThis is not 4 digits, please try again.\n\n\n";
             }
             else
             {
                  loop2 = 0;
             }
         } while ( loop2 != 0 );
         cout<< "\n\nPlease confirm: ";//confirm pin
         while ( (pinconfirm += getch()).at(pinconfirm.size()) != VK_RETURN )
         std::cout<< "*";//enter confirmation
         if(pin != pinconfirm)//check if passwords match
         {
             cout<< "\n\nPasswords do not match, please try again.\n\n\n";
         }
         else
         {
             loop = 0; //break loop of setting pin
         }
    } while ( loop != 0 );
}