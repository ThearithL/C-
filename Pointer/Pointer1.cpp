// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int n=2;
//     int *ptr;
//     ptr = &n;
//     cout<<"Value of n: "<<n<<endl;
//     cout<<"address of n: "<<&n<<endl;
//     cout<<"Value of ptr: "<<*ptr<<endl;
//     cout<<"address of ptr: "<<&ptr<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int a=10,b=20;
//     int *ptrA,*ptrB;
//     ptrA=&a;
//     ptrB=&b;

//     cout<<"calculate simple\n";
//     cout<<a+b<<endl;
//     cout<<a-b<<endl;
//     cout<<a*b<<endl;
//     cout<<a/b<<endl;

//     cout<<"calculate by pointer \n";
//     cout<<*ptrA + *ptrB<<endl;
//     cout<<(*ptrA) - (*ptrB)<<endl;
//     cout<<(*ptrA) * (*ptrB)<<endl;
//     cout<<(*ptrA) / (*ptrB)<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;
void Swap(int *X ,int *Y){
    int theme = *X;  // theme = 101
    *X = *Y;        // X=201
    *Y = theme;     // Y =101
    cout<<"Inside Function Swap : "<<*X<<" "<<*Y<<""<<endl;
}
int main(){
    system("cls");
    int a = 101,b= 201;
    cout<<"Before input to Function Swap :  a =  " <<a<<","<<"b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"After output to Function Swap : a  =  "<<a<<","<<"b  = "<<b<<endl;
    return 0;
}

    