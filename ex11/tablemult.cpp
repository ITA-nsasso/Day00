#include <string>
#include <iostream>
using namespace std;

int main(){
    int mult;
    int by;

    by = 0;
    cout << "Insérer le nombre à multiplier : ";
    cin >> mult;

    while (by <= 10){
        cout << mult << "*" << by << " = " << mult*by << "\n";
        by++;
    }
    return 0;
}