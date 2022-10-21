//This application is based on banking system
//You can create your bank account
//Different options gives you choices like 
//Checking Balance
//Depositing Amount
//Withdraw Amount form your account
//Also allow you to close your Account 
//You can also see How many accounts are Till Open and How many accounts are get closed
//The application Automatically saves your data.
#include<iostream>
#include<fstream>
#include<list>
#include<stdlib.h>
using namespace std;
class Banking_system{
    public:
    int count=0;
    int end=0;
    int b;
    int n=0;
    int delac=0;
    int number=0;
    int Accnumber[100];

    string firstname,lastname;
    int Inamount;
    string Firstname[1000],Lastname[1000];
    int inamount[1000]={-1},close_ac[1000]={0};
    void withdraw();
    void balenquiry();
    void opaccount();
    void showallaccount();
    void deposit();
    void claccount();
    void showclaccount();
    friend ifstream & operator >>(ifstream &in, Banking_system & b);
};
int main()
{
    static int acnumber=0;
    int account=0;
    int count=0;
    int del_ac=0;
    
    Banking_system s;
    int delac=0;
    int shac=0;
    int ch;
    int a=1;
    
    ifstream in("Mydatabase.txt" ); // These lines of codes are reading the data from the file created when the last time application run automatically 
    
     in>>acnumber;
     if(acnumber!=0)
     a=acnumber+1;
     in>>s.delac;
     in>>s.number;
    for(int y=0;y<s.number;y++)
        {      
            in>> s.Firstname[y] ;
            in>>s.Lastname[y] ;
            in>> s.inamount[y] ;
            in>> s.Accnumber[y];
            in >> s.close_ac[y];
        }
    
        ofstream ops("Mydatabase.txt");
        system("CLS");
    cout << " \t\t\t\t\t\t\t" "\t ""<<<<< Banking Sytem >>>>>" << endl << endl;
    while(ch!=8)
    {
        cout << endl;
        cout << "\t Select One Option " << endl;
        cout << "\n \t1 ==> OPEN Account" <<endl;
        cout << " \t2 ==> BALANCE Enquiry " << endl;
        cout << " \t3 ==> DEPOSIT " << endl;
        cout << " \t4 ==> WITHDRAWL " << endl;
        cout << " \t5 ==> CLOSE an Account " << endl;
        cout << " \t6 ==> Show all Open Account " << endl; 
        cout << " \t7 ==> Show all Closed Account " << endl;
        cout << " \t8 ==> Save & Exit " <<endl << endl;
        cout <<  "Enter choice :: " ;cin >> ch; 
        
     
        switch(ch)
        {
             case 1:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> OPEN Account " << endl;
             cout << "\t  2 ==> Back" <<endl;
             int in;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                acnumber=acnumber+1;
                s.n=acnumber;
                s.count=s.count+1;
                s.opaccount();
                // cout <<"Your Account number is  XXX-XXX-212"  << acnumber << endl ;
                for(int i=acnumber-1;i<acnumber;i++)
                {
                    s.Accnumber[i]=a++;
                 }
                s.number=s.number+1;
            
                  break;
              }
              else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;

             case 2:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                s.balenquiry();
                break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;

             case 3:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                s.deposit();
                break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;
            
             case 4:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             { 
                s.withdraw();
                break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;
            
             case 5:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                s.claccount();
                break;
            }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;
    
             case 6:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                s.showallaccount();
                break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;

             case 7:
             system("CLS");
             cout << endl;
             cout << "Press NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                s.showclaccount();
                break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;

             case 8:
             system("CLS");
             cout << endl;
             cout << "ARE YOU SURE WANT To EXIT"<< endl;
             cout << "\nPress NO. 1 ==> Continue " << endl;
             cout << "\t  2 ==> Back" <<endl;
             cout <<endl<< "Enter NO. ::>>";cin >>in;
             if(in==1)
             {
                system("CLS");
             cout << endl << endl << endl << endl << endl << endl << endl << endl<< endl << endl << endl << endl << endl << endl << endl<< endl;
             cout <<"\t \t \t \t \t \t \t\t\t     _______________ "<< endl;
             cout <<"\t \t \t \t \t \t \t\t\t<<< |               | >>>"<< endl;
             cout <<"\t \t \t \t \t \t \t\t\t<<< |               | >>>"<< endl;
             cout <<"\t \t \t \t \t \t \t\t\t<<< |   THANK-YOU   | >>>"<<endl;
             cout <<"\t \t \t \t \t \t \t\t\t<<< |               | >>>"<<endl;
             cout <<"\t \t \t \t \t \t \t\t\t<<< |_______________| >>>"<< endl;
             cout << endl << endl << endl << endl << endl << endl << endl << endl<< endl << endl << endl << endl << endl << endl << endl<< endl ;
             break;
             }
             else if(in==2)
              {
                break;
              }
              else{
                cout << "Wrong input" << endl;
              }
              break;

             default:
             cout << "\n Enter CORRECT option " << endl;

        }
        
    }
    ops<<acnumber<<endl; // These lines of Codes are making a text file of the data of the application saperately 
    ops<<s.delac<<endl;
    ops<<s.number<<endl;
    for(int y=0;y<s.number;y++)
        {      
            ops<< s.Firstname[y] << endl;
            ops<<s.Lastname[y] << endl;
            ops << s.inamount[y] << endl;
            ops << s.Accnumber[y] <<endl;
            ops << s.close_ac[y] << endl;
        }

}

void Banking_system :: opaccount() // Option 1 >> This function is for Opeaning an Account in the Application
{ 
    for (int i=n-1; i<n;i++)
    {
        system("CLS");
         cout <<"\t" << "\t" << "OPEN Account"<< endl << endl;
        cout <<endl << endl<< "Enter Your First Name :: ";
         cin >> Firstname[i];
        cout << "Enter Your LastName :: ";
        cin >> Lastname[i];
        cout << "Enter The initial Amount :: ";
        cin >> inamount[i];
        close_ac[i]=0;

               system("CLS");
                cout << endl << endl;
                cout << "\t" << "\t" <<  "Account Created " << endl;
                cout << endl;
                cout << "FistName  :: ==>" << Firstname[i] << endl;
                cout << "LastName  :: ==>" << Lastname[i] <<endl;
                cout << "Initial Amount  :: ==>" << inamount[i] << endl;
                cout << "Account Number is :: ==> XXX-XXX-XXX-" << i+1  << endl;
                // cout << "Account Status is :: ==>" << close_ac[i] << endl;
                cout << endl << endl;
                
            
        }
}

void Banking_system :: balenquiry() // Option 4 >> This function Helps the customer to check the balance of his Account
{
    system("CLS");
    int check=1;
    cout <<"\t" << "\t" << "BALANCE Enquiry"<< endl << endl;
    int cacnumber;
    cout << endl <<endl << "Enter Last digit of account NUmber " << endl;
    cout <<"Account No-> XXX-XXX-212"; cin >> cacnumber;
    for(int i=0;i<n+delac;i++)
    {
      if(cacnumber==Accnumber[i])
      {
        cacnumber=i;
        if(close_ac[i]==1)
          {
            check=3;
          }
           else
            check=0;
            break;
      }
        
    }
     if(check==1)
         {
            cout<< endl << "Account number Doesnt Exist"<< endl;
        }
     else if(check==3)
    {
      cout << "This Account is Closed " << endl;
    }
    else
        {
          cout << "Banlance of Account number XXX-XXX-XXX-"<<Accnumber[cacnumber] << " is " << inamount[cacnumber]<< "."<<endl <<endl;   
        }
    

}

void Banking_system :: deposit() // Option 3 >> This function Manages the Customer Deposited Amount
{
    system("CLS");
    cout <<"\t" << "\t" << "DEPOSIT"<< endl << endl;
    int dpamount;
    int cacnumber;
    int check=1;
    cout << endl << endl <<  "Enter Last number Of Account Number " << endl;
    cout <<"Account No-> XXX-XXX-XXX-"; cin >> cacnumber;
    for(int i=0;i<number;i++)
    {
        if(cacnumber==Accnumber[i])
        {
            cacnumber=i;
            if(close_ac[i]==1)
            {
               check=3;
            }
           else
            check=0;
            break;
        }
    }
    if(check==1)
         {
            cout<< endl << "Account number Doesnt Exist"<< endl;
        }
    else if(check==3)
    {
      cout << "This Account is Closed " << endl;
    }
    else 
    {
        cout << "Enter The Amount Your wnat to Deposit " << endl;
        cout << "Rupees ::==>>" ;cin >> dpamount;
        inamount[cacnumber]=inamount[cacnumber]+dpamount;
        cout << "Available Balance of Ac- XXX-XXX-XXX-"<<Accnumber[cacnumber]<< " is " << inamount[cacnumber]<< "."<<endl <<endl;
    }
}

void Banking_system :: withdraw() // Option 4 >> This function Manages the Customer Withdrawed Amount
{
    system("CLS");
    cout <<"\t" << "\t" << "WITHDRAWL"<< endl << endl;
    int wdamount;
    int cacnumber;
    int check=1;

    cout<< endl << endl << "Enter account NUmber " << endl;
    cout << "Account NO::==>" ;cin >> cacnumber;
    
    for(int i=0;i<number;i++)
    {
        if(cacnumber==Accnumber[i])
        {
            cacnumber=i;
            if(close_ac[i]==1)
            {
               check=3;
            }
           else
            check=0;
            break;
        }
    }
    if(check==1)
         {
            cout<< endl << "Account number Doesnt Exist"<< endl;
        }
        else if(check==3)
    {
      cout << "This Account is Closed " << endl;
    }
    else 
    {
      cout << "Enter The Amount Your wnat to Withdraw " << endl;
      cout << "Rupees ::==>>";cin >> wdamount;
        inamount[cacnumber]=inamount[cacnumber]-wdamount;
        cout << "Banlance Amount of Account N0. XXX-XXX-XXX-"<<Accnumber[cacnumber] << " is "  << inamount[cacnumber]<<"." << endl << endl;
    }
}

void Banking_system :: claccount() //Option 5 This function allow you to close your account you have created
{
    system("CLS");
    cout <<"\t" << "\t" << "CLOSE ACCOUNT"<< endl << endl;
    int not_found;
    int found= 0;
    int cacnumber; 
    cout << "Enter the Ac-number You want to Close " << endl;
    cout << "Account NO::==>" ;cin >> cacnumber;
    for(int i=0;i<number;i++)
    {
        if(Accnumber[i]==cacnumber)
        {
            if(close_ac[i]==1)
            {
                cout << "The account is already Closed" << endl;
                break;
            }
            found=1;
            
            close_ac[i]=1;
            delac=delac+1;
           // number=number-delac;
            n=number;  
            cout << "The Acnumber XXX-XXX-XXX-"<< cacnumber <<" is Closed"<<endl;  
            break;
        }
      
    }  
        if(found==0)
        {
            cout <<"NO Match Found" << endl;
        }
}

void Banking_system :: showallaccount() // Option 6 This function Show all the open accounts 
{
    char c=n;
    system("CLS");
    cout <<"\t" << "\t" << "DATABASE"<< endl << endl;
   for (int i=0; i<number;i++)
    {
        if(close_ac[i]!=1)
            {
            cout << endl;
            cout << "FistName  :: ==>" << Firstname[i] << endl;
             cout << "LastName  :: ==>" << Lastname[i] <<endl;
            cout << "Balance Amount  :: ==>" << inamount[i] << endl;
            cout << "Account Number is :: ==>XXX-XXX-XXX-" << Accnumber[i]  << endl;
           // cout << "Account Status is :: ==>" << close_ac[i] << endl;
            cout << endl << endl;
            c= 'y';
        }
    }
    if(c==n)
    {
      cout << " \n \n \t \t \t NO RECORDS FOUND \n \n" << endl;
    }
}
void Banking_system::showclaccount() // Option 7 This function allow you to see all the closed account
{
    char c=n;
    system("CLS");
    cout <<"\t" << "\t" << "Closed Accounts"<< endl << endl;
   for (int i=0; i<number;i++)
    {
        if(close_ac[i]==1)
            {
            cout << endl;
            cout << "FistName  :: ==>" << Firstname[i] << endl;
             cout << "LastName  :: ==>" << Lastname[i] <<endl;
            cout << "Balace Amount  :: ==>" << inamount[i] << endl;
            cout << "Account Number is :: ==> XX-XXX-XXX-" << Accnumber[i]  << endl;
           // cout << "Account Status is :: ==>" << close_ac[i] << endl;
            cout << endl << endl;
            c='y';
        }
    }
    if(c==n)
    {
      cout << " \n \n \t \t \t NO RECORDS FOUND \n \n " << endl;
    }
}