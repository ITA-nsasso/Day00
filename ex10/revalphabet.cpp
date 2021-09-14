#include <string>
#include <iostream>
using namespace std;

int main(){
    char alph;
    int nascii;

    nascii = 90;
    while (nascii > 64){
        alph = nascii;
        cout << alph << endl;
        nascii--;
    }
    return 0;
}