//Zion Ogunsola
//Homework Lab#2 
//10/5/2024

#include <iostream> //Includes iostream

#include <iomanip> //Includes iomanip

using namespace std;

int main () //Begins int function
{
    
    double judge1; //Decalres variable
    double judge2; //Decalres variable
    double judge3; //Decalres variable
    double judge4; //Decalres variable
    double judge5; //Decalres variable
    double judge6; //Decalres variable
 
    cout << "Input the following scores in order from least to greatest" << endl; //Outputs statement
    
    cout << "Score from judge: "; //Outputs statement
    cin >> judge1; //Asks user for inpiut
 
    cout << "Score from judge: "; //Outputs statement
    cin >> judge2; //Asks user for inpiut
    
    cout << "Score from judge: "; //Outputs statement
    cin>> judge3; //Asks user for inpiut
    
    cout << "Score from judge: "; //Outputs statement
    cin >> judge4; //Asks user for inpiut
   
    cout << "Score from judge: "; //Outputs statement
    cin >> judge5; //Asks user for inpiut
     
    cout << "Score from judge: "; //Outputs statement
    cin >> judge6; //Asks user for inpiut
    
    double finalScore = (judge2 + judge3 + judge4 + judge5 )/4; //Calcuates fina score
    
    cout << fixed << setprecision(2); //Sets set precision to 2 digists
    
    cout <<"The final score for this hackathon project is: " << finalScore << endl; //Outputs statement
    

    return 0; //Returns the function
} 

/*
Input the following scores in order from least to greatest
Score from judge: 1.6 
Score from judge: 2.5 
Score from judge: 7.8 
Score from judge: 8.6 
Score from judge: 8.9 
Score from judge: 9 
The final score for this hackathon project is: 6.95
*/