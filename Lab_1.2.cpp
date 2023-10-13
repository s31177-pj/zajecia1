#include <iostream>

using namespace std;

int main (){
    int x = 0;
    cout << "podaj liczbe: ";
    cin >> x;
    if (x > 0){
        cout << "dodatnia" << endl;
    }
    else if (x < 0){
        cout << "ujemna" << endl;
    }
    else if (x == 0){
        cout << "zero" << endl;
    }
    return 0;
}