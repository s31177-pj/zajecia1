#include <iostream>

using namespace std;

int main (){
    int x = 0;
    cout << "podaj liczbe: ";
    cin >> x;
    if (x % 2 == 0){
        cout << "parzysta" << endl;
    }
    else if (x % 2 != 0) {
        cout << "nieparzysta" << endl;
    }
    else {
        cout << "zero" << endl;
    }
    return 0;
}