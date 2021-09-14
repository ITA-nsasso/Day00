#include <string>
#include <iostream>
using namespace std;

int main(){
    char alph;
    int nascii;

    nascii = 65;
    while (nascii < 91){
        alph = nascii;
        cout << alph << endl;
        nascii++;
    }
    return 0;
}