#include<iostream>
#include<iomanip>
using namespace std;
    string Name_coffee[100];
    float Price_coffee[100],Quantity_coffee[100];
    int Code_coffee[100],Size_coffee;
    bool check;
    void Input(){
        cout<<"Enter Size_coffee: ";cin>>Size_coffee;
        for(int i=0;i<Size_coffee;i++){
        cout<<"Enter Code_coffee: ";cin>>Code_coffee[i];
        cout<<"Enter Name_coffee: ";cin>>Name_coffee[i];
        cout<<"Enter Quantity_coffee: ";cin>>Quantity_coffee[i];
        cout<<"Enter Price_coffee: ";cin>>Price_coffee[i];
        }
        cout<<"-------------------------------------------------------------------------------------------"<<endl;
    }
    void Display(){
        
        cout<<setw(20)<<"Code_coffee"
            <<setw(20)<<"Name_coffe"
            <<setw(20)<<"Quantity_coffee"
            <<setw(20)<<"Price_coffee"
            <<endl;
            for(int i=0;i<Size_coffee;i++){
        cout<<"-------------------------------------------------------------------------------------------"<<endl;       
        cout<<setw(20)<<Code_coffee[i]
            <<setw(20)<<Name_coffee[i]
            <<setw(20)<<Quantity_coffee[i]
            <<setw(20)<<Price_coffee[i]
            <<endl;
        cout<<"------------------------------------------------------------------------------------------"<<endl;
            }
        }
    void search()
    {
            int search_id;int option;
            int Search;
            string search_name;
            cout<<"\t\t\t[1.Search By ID"<<endl;
            cout<<"\t\t\t[2.Search By Name"<<endl;
            cout<<"\t\t\tPlease Enter What you want to choose :";cin>>option;
        switch (option)
        {
            case 1 :
                {
                    cout<<"Enter the Code of coffee for search:";cin>>search_id;
                    for(int i=0;i<Size_coffee;i++){
                        if(Code_coffee[i]==search_id){
                            cout<<"\n\t\t\t Code  :"<<Code_coffee[i]<<endl;
                            cout<<"\t\t\t Name  : "<<Name_coffee[i]<<endl;
                            cout<<"\t\t\t Price : "<<Price_coffee[i]<<endl;
                            cout<<"\t\t\t Quantity:"<<Quantity_coffee[i]<<endl;
                        }
                    }
                    break;
                }
            case 2 :
            {
                cout<<"Enter the Name of coffee for search:";cin>>search_name;
                for(int i=0;i<Size_coffee;i++)
                {
                    if(Name_coffee[i]==search_name)
                    {
                        cout<<"\n\t\t\t Code  :"<<Code_coffee[i]<<endl;
                        cout<<"\t\t\t Name  : "<<Name_coffee[i]<<endl;
                        cout<<"\t\t\t Price : "<<Price_coffee[i]<<endl;
                        cout<<"\t\t\t Quantity:"<<Quantity_coffee[i]<<endl;
                    }
                }
                       
                break;    
            }    
        }
    }
    
            
 void Update()
{
    int update_coffee,new_id,new_quantity;
    string new_Name;
    float new_Price;
    cout<<"Enter id for update detail : ";cin>>update_coffee;
        for(int i=0;i<Size_coffee;i++){
            if(Code_coffee[i]==update_coffee){
                cout<<"Enter New Code    : ";cin>>new_id;
                cout<<"Enter New Name    : ";cin>>new_Name;
                cout<<"Enter New Price   : ";cin>>new_Price;
                cout<<"Enter New Quantity : ";cin>>new_quantity;
                Code_coffee[i]=new_id;
                Name_coffee[i]=new_Name;
                Price_coffee[i]=new_Price;
                Quantity_coffee[i]=new_quantity;
            }
        }
}
void Delate(){
    int delate_code;
    cout<<"Enter code for delate";cin>>delate_code;
    for(int i=0;i<Size_coffee;i++)
        if(delate_code==Code_coffee[i]){
            for(int j=i;j<Size_coffee-1;j++){
                Code_coffee[j]= Code_coffee[j+1];
                Name_coffee[j]= Name_coffee[j+1];
                Price_coffee[j]= Price_coffee[j+1];
                Quantity_coffee[j]= Quantity_coffee[j+1];
            }
            Size_coffee--;
        }
    }
void ADD()
{
    int add_size;
    cout<<"Enter size to coffee : ";cin>>add_size;
        for(int i=Size_coffee;i<Size_coffee+add_size;i++){
            cout<<"Enter new Code Coffee : ";cin>>Code_coffee[i];
            cout<<"Enter new Name Coffee : ";cin>>Name_coffee[i];
            cout<<"Enter new Price coffee: ";cin>>Price_coffee[i];
            cout<<"Enter new Quantity coffee: ";cin>>Quantity_coffee[i];   
        }    
        Size_coffee+=add_size;
}
void Short()
{
    int option,answer;
    check = false;
    cout<<"1.Short By Name[A-Z]-[Z-A]"<<endl;
    cout<<"2.Short By ID[0-100]-[100-0]"<<endl;
    cout<<"3.Short By Price[1-$$$$]-[$$$$-1]"<<endl;
    cout<<"Please Choose Option : ";cin>>option;
    switch(option)
    {
        case 1 :
        {
            cout<<"Choose For Short."<<endl;
            cout<<"1.[ A-Z ] "<<endl;
            cout<<"2.[ Z-A ]"<<endl;
            cout<<"Choose Enter Number Choosing ";cin>>answer;
                if(answer==1)
                {
                    for(int i=0;i<Size_coffee;i++)
                    {
                        for(int j=i+1;j<Size_coffee;j++)
                        {
                            if(Name_coffee[i]>Name_coffee[j])
                            {
                                swap(Code_coffee[i],Code_coffee[j]);
                                swap(Name_coffee[i],Name_coffee[j]);
                                swap(Price_coffee[i],Price_coffee[j]);
                                swap(Quantity_coffee[i],Quantity_coffee[j]);
                                check=true;
                            }
                        }
                    }
                 if(!check)
                    {
                    cout<<"Sort Not Complate!"<<endl;
                    }
                    else
                    { 
                    cout<<"Sort Complate!"<<endl;
                    }
                }
                if(answer==2)
                {
                    for(int i=0;i<Size_coffee;i++)
                    {
                         for(int j=i+1;j<Size_coffee;j++)
                        {
                            if(Name_coffee[i]<Name_coffee[j])
                            {
                                 swap(Code_coffee[i],Code_coffee[j]);
                                 swap(Name_coffee[i],Name_coffee[j]);
                                 swap(Price_coffee[i],Price_coffee[j]);
                                 swap(Quantity_coffee[i],Quantity_coffee[j]);
                                    check=true;
                            }
                        }
                    }
                    if(!check)
                    {
                    cout<<"Sort Not Complate!"<<endl;
                    }
                    else
                    { 
                    cout<<"Sort Complate!"<<endl;
                    }
                }
            break;
        }
    
        case 2 :
        {
            cout<<"Choose For Short."<<endl;
            cout<<"1.[ 0-100 ] "<<endl;
            cout<<"2.[ 100-0 ]"<<endl;
            cout<<"Choose Enter Number Choosing ";cin>>answer;
            if(answer==1)
            {
                for(int i=0;i<Size_coffee;i++)
                {
                    for(int j=i+1;j<Size_coffee;j++)
                    {
                        if(Code_coffee[i]>Code_coffee[j])
                        {
                         swap(Code_coffee[i],Code_coffee[j]);
                         swap(Name_coffee[i],Name_coffee[j]);
                         swap(Price_coffee[i],Price_coffee[j]);
                         swap(Quantity_coffee[i],Quantity_coffee[j]);
                         check=true;
                        }
                   }
               }
            
                if(!check){
                    cout<<"Sort Not Complate!"<<endl;
                    }
                else{
                    cout<<"Sort Complate!"<<endl;
                }
            }
        
            if(answer==2)
            {
                for(int i=0;i<Size_coffee;i++)
                {
                    for(int j=i+1;j<Size_coffee;j++)
                    {
                        if(Code_coffee[i]<Code_coffee[j])
                        {
                            swap(Code_coffee[i],Code_coffee[j]);
                            swap(Name_coffee[i],Name_coffee[j]);
                            swap(Price_coffee[i],Price_coffee[j]);
                            swap(Quantity_coffee[i],Quantity_coffee[j]);
                            check=true;
                        }
                    }
                }
                if(!check){
                    cout<<"Sort Not Complate!"<<endl;
                }
                else{
                    cout<<"Sort Complate!"<<endl;
                }
            }
            break;
        }
        case 3 :
        { 
            cout<<"Choose For Short."<<endl;
            cout<<"1.[ 1-$$$ ] "<<endl;
            cout<<"2.[ $$$-1 ]"<<endl;
            cout<<"Choose Enter Number Choosing ";cin>>answer;
             if(answer==1)
            {
                for(int i=0;i<Size_coffee;i++)
                {
                    for(int j=i+1;j<Size_coffee;j++)
                    {
                        if(Price_coffee[i]>Price_coffee[j]){
                            swap(Code_coffee[i],Code_coffee[j]);
                            swap(Name_coffee[i],Name_coffee[j]);
                            swap(Price_coffee[i],Price_coffee[j]);
                            swap(Quantity_coffee[i],Quantity_coffee[j]);
                             check=true;
                        }
                    }
                }
            
                if(!check)
                {
                    cout<<"Sort Not Complate!"<<endl;
                }
                else
                {
                    cout<<"Sort Complate!"<<endl;
                }
            }
            if(answer==2)
            {
                for(int i=0;i<Size_coffee;i++){
                    for(int j=i+1;j<Size_coffee;j++){
                        if(Price_coffee[i]<Price_coffee[j])
                        {
                            swap(Code_coffee[i],Code_coffee[j]);
                            swap(Name_coffee[i],Name_coffee[j]);
                            swap(Price_coffee[i],Price_coffee[j]);
                            swap(Quantity_coffee[i],Quantity_coffee[j]);
                            check=true;
                        }
                    }
                }
            
                if(!check)
                {
                    cout<<"Sort Not Complate!"<<endl;
                }
                else
                {
                    cout<<"Sort Complate!"<<endl;
                }
            }
            break;
        }
    }
}

    int main()
{
        system("cls");
        int option;
        do{
            cout<<"=================================================================================================="<<endl;
            cout<<"|                                        MENU                                                     |"<<endl;
            cout<<"=================================================================================================="<<endl;
            cout<<"1.Create Coffee to Stock "<<endl;
            cout<<"2.Display All Coffee to Stock "<<endl;
            cout<<"3.Search Coffee in Stock "<<endl;
            cout<<"4.Update All Detail Coffee "<<endl;
            cout<<"5.Delate Coffee to Stock "<<endl;
            cout<<"6.Insert / ADD Coffee to Stock "<<endl;
            cout<<"7.Sort Coffee "<<endl;
            cout<<"0.Exit "<<endl;
            cout<<"Choose option[0-7]:";cin>>option;
            cout<<"======================================================================================="<<endl;
            switch( option){
                case 0 :{
                    cout<<"-------------------------------- [ Exit The Program ] ----------------------"<<endl;
                    break;
                }
                case 1 :{
                    Input();
                    system("pause");
                    break;
                }
                case 2 :{ 
                    Display();
                    system("pause");
                    break;
                }
                case 3 :{
                    search();
                    system("pause");
                    break;
                }
                case 4 :{
                    Update();
                    system("pause");
                    break;
                }
                 case 5 : {
                    Delate();
                    system("pause");
                    break;
                }    
                case 6 :{
                    ADD();
                    system("pause");
                    break;
                }   
                case 7 :{
                    Short();
                    system("pause");
                    break;
                }
                defualt :{
                    cout<<"------------------------------Try angain!-------------------------------------"<<endl;
                }
            }
            
        } while(option!=0);
        return 0;
} 

   
