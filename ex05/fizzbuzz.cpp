#include <string>
#include <iostream>
using namespace std;

void fizzbuzz(int x){
    if (x % 3 == 0 && x % 5 == 0)
        cout << "fizzbuzz \n";
    else if (x % 3 == 0)
        cout << "fizz \n";
    else if (x % 5 == 0)
        cout << "buzz \n";
}

int main(){
    int x;

    cout << "Veuillez saisir un chiffre : ";
    cin >> x;

    fizzbuzz(x);

    return 0;
}