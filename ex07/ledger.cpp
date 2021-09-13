#include <string>
#include <iostream>
using namespace std;

int main(){
    float bitcoin;
    float ethereum;
    float xrp;
    float dogecoin;
    float cardano;

    cout << "Quantité Bitcoins : ";
    cin >> bitcoin;
    bitcoin *= 39261.25;

    cout << "Quantité Ethereums : ";
    cin >> ethereum;
    ethereum *= 2831.37;

    cout << "Quantité XRP : ";
    cin >> xrp;
    xrp *= 0.92;

    cout << "Quantité Dogecoins : ";
    cin >> dogecoin;
    dogecoin *= 0.2;

    cout << "Quantité Cardano : ";
    cin >> cardano;
    cardano *= 2;

    cout << "\n";

    cout << "Bitcoin : ";
    cout << bitcoin;
    cout << "\n";

    cout << "Ethereum : ";
    cout << ethereum;
    cout << "\n";

    cout << "XRP : ";
    cout << xrp;
    cout << "\n";

    cout << "Dogecoin : ";
    cout << dogecoin;
    cout << "\n";

    cout << "Cardano : ";
    cout << cardano;
    cout << "\n";

    return 0;
}