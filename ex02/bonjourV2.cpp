#include <string>
#include <iostream>
using namespace std;

string greetings(){
    string name;
    
    cout << "Bonjour ! Quel est votre prénom ?" << endl;
    cin >> name;

    return (name);
}

void greetingsJohn(string name){
    cout << name + ", enchanté moi c'est James, James Bond." << endl;
}

int main(){
    string name = greetings();
    greetingsJohn(name);

    return 0;
}