#include <string>
#include <iostream>
using namespace std;

int main(){
    int n1;
    int n2;
    char operation;

    operation = '';
    cout << "choissisez votre premier nombre : ";
    cin >> n1;
    cout << "choissisez votre deuxième nombre : ";
    cin >> n2;
    while (operation != '+' || operation != '-' || operation != '*' || operation != '/'){
        cout << "choissisez l'opération à effectuer (+, -, *, /) : ";
        cin >> operation;
    }

    
    return 0;
}