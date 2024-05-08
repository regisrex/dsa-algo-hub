#include "iostream"
#include <cstdio>
#include <string>
using namespace std;

int main(){

    cout << "-----ENTER NAMES SEPERATELY------" <<endl;
    string firstName, lastName;
    int age;
    cout << "Enter first name and last name: ";
    cin >> firstName >> lastName ;
    cout << endl << "Enter age: " ;
    cin >> age ;

    cout  <<endl<< "------YOUR INFORMATION-------" << endl ;
    cout  <<endl<< "------YOUR INFORMATION-------" << endl ;
    cout << firstName << " " << lastName << " " <<"Age: " << age << endl;
    cout << endl << endl << "-----ENTER NAMES ONCE------" <<endl;
    string fullName ;
    cout << "Enter full name: " ;
    cin.ignore();
    getline(cin, fullName);
    cout << endl << "------YOUR FULL NAME------" << endl ;
    cout << "Full name: " <<  fullName << endl ;

    return 0;
}
