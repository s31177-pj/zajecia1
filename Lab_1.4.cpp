#include <iostream>
using namespace std;

int main(){


    int x = 0;
    int y = 0;
    int z = 0;
    cout << "podaj liczbe calkowita: ";
    cin >> x;
    cout << "podaj liczbe calkowita: ";
    cin >> y;
    cout << "podaj liczbe calkowita: ";
    cin >> z;


    int najwieksza = 0;
    if ( x >= y && x >= z){
        najwieksza = x;
    }
    else if ( y >= x && y >= z){
        najwieksza = y;
    }
    else{
        najwieksza = z;
    }

    
    cout << "najwieksza liczba to: " << najwieksza <<endl;
    return 0;
}


