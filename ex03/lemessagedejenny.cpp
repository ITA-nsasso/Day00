#include <string>
#include <iostream>
using namespace std;

string greetings(){
    string name;
    
    cout << "Bonjour Quel est ton prénom ?" << endl;
    cin >> name;

    return (name);
}

void greetingsJohn(string name){
    if (name != "Johnny")
        cout << "Salut, " + name + "!" << endl;
    else
        cout << "Hello, my love!" << endl;
}

int main(int argc, char **argv){
    string name = greetings();
    greetingsJohn(name);

    return 0;
}