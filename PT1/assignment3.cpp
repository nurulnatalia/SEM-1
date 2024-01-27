/* Assignment 2 Programming Technique I
   Aldanisha (A23CS0039)
   Natalia (A23CS0165)
   Set 1 */

#include <iostream>
#include <string>

using namespace std;
void displayAccountInfo (double);
double deposit (double, double);
double withdraw (double, double);


int main()
{   
    
    double balance = 200.0;
    char i = ' ';
    
    
        while (i != 'n')    
        {
            
            displayAccountInfo(balance);
            
            balance = deposit(balance, 500.0);
            
            double withdrawal = 200.0;
            balance = withdraw (balance, withdrawal);
            
            displayAccountInfo(balance);
            
            cout << "Do you want to perform another transaction? (Y/N): ";
            cin >> i;
        }

    return 0;
}

void displayAccountInfo (double balance = 200.0)
{

 
            cout << "<<<<< My Accounts Overview >>>>>" << endl;
                
            cout << "Account Holder Name: User 1" << endl;
  
            cout << "Account Number: 1013202341" << endl;

            cout << "Balance: RM " << balance << endl;

            
            cout << "\n";
        
        
}

double deposit (double balance, double dep)
{
    dep = 500.00;
    
    cout << "<<<<< Deposit Transaction >>>>>" << endl;
    cout << "Deposit of RM " << dep << " successful. \n" << endl;
    balance += dep;
     
    return balance;
    
}

double withdraw (double balance, double withdrawal=200.0)
{
   
   cout << "<<<<< Withdrawal Transaction >>>>>" << endl;
   
   if (withdrawal <= balance)
   {
       cout << "Withdrawal of RM " << withdrawal << " succesful \n" << endl;
       balance = balance - withdrawal;
   }
   else 
       cout << "Insufficient funds for withdrawal \n" << endl;

    
    return balance;
}

//SET 2 
#include<iostream> 
using namespace std; 
 
int main() 
{ 
 int num,totalbill; 
 //display welcome message and menu 
 cout<<"Welcome to the Food Ordering System"<<endl; 
 cout<<"1. Pizza - $10"<<endl; 
 cout<<"2. Burger - $5"<<endl; 
 cout<<"3. Sandwich - $7"<<endl; 
  
 cout<<"Enter the number of the item you want to order:"; 
 cin>>num; 
  
 switch(num) 
 { 
 case 1:cout<<"Your total bill is : $10"<<endl; 
        break; 
 case 2:cout<<"Your total bill is : $5"<<endl; 
        break; 
 case 3:cout<<"Your total bill is : $7"<<endl; 
        break; 
 default:cout<<"invalid input"; 
        break; 
 } 
 return 0; 
}
