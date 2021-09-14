#include <string>
#include <iostream>
using namespace std;

int main(){

    int weeks = 1;
    int cost = 150000000;
    int profits = 31000000;
    int tot_profits = 31000000;

    while (tot_profits < cost){
        profits = profits * 0.8;
        tot_profits += profits;
        weeks++;
    }

    cout << weeks << "\n";
    return 0;
}