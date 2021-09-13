#include <string>
#include <iostream>
using namespace std;

int main(){
    float mile;

    cout << "Entrez la distance en miles : ";
    cin >> mile;

    cout << "L'equivalant en kilomètres est : ";
    cout << mile * 1.61;
    cout << "\n";

    return 0;
}