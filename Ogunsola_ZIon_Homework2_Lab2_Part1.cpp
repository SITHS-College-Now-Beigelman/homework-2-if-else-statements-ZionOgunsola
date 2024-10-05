//Zion Ogunsola
//Homework Lab#2 
//10/5/2024

#include <iostream> //Includes iostream

#include <iomanip> //Includes iomanip

using namespace std;

int main () //Begins int function
{
    
    int month; // Declares variable month
    int day; //Decalres variable day
    
    cout<< "Enter the month: "; //Outputs statement
    cin>> month; //Asks user for input
    
    cout<< "Enter the day: " ; //Outputs statement
    cin>> day; //Asks user for input
    
    if ((month == 3 && day >= 21) || (month == 4 || month == 5) || (month == 6 && day <= 20)) //Sets interval for spring
    {
        cout << "It is now Spring!" << endl; //Outputs statement
    }
    
    if ((month == 6 && day >= 21) || (month ==7 || month == 8 ) || (month == 9 && day <= 22)) //Sets interval for summmer
    {
        cout << "It is now Summer!" << endl; //Outputs statement
    }
    
    if ((month == 9 && day >= 23) || (month == 10 || month == 11) || (month == 12 && day <= 21)) //Sets interval for fall
    {
        cout << "It is now Fall!" << endl; //Outputs statement
    }
    
    if ((month == 12 && day >= 22) || (month == 1 || month == 2) || (month == 3 && day <= 20)) //Sets interval for winter
    { 
       cout << "It is now Winter!" << endl; //Outputs Stament
    }
    
    

    return 0; //Ends function
}

/* 
Enter the month: 3
Enter the day: 12
It is now Winter!
*/