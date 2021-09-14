#include <string>
#include <iostream>
using namespace std;

bool leapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main(){

    int year;

    cout << "Entrez une année : ";
    cin >> year;

    if(leapYear(year)){
        cout << year;
        cout << " est une année bissextile \n";
    }
    else{
        cout << year;
        cout << " n'est pas une année bissextile \n";
    }
    return 0;
}