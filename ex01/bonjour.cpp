#include <string>
#include <iostream>
using namespace std;

void greetings(string name);

int main(){
    string name = "Bob";
    greetings(name);
    return 0;
}

void greetings(string name){
    cout << "Bonjour, " + name + " comment allez vous ?" << endl;
}