#include <iostream>

using namespace std;

int main(){
    float celcius,fahrenheit, reamur, kelvin;
    cout << "--------------------------------------------"<< endl;
    cout << " mengkonversikan suhu dari celcius ke f,k,r"<< endl;
    cout << "--------------------------------------------"<< endl;
    
    cout << "input suhu dalam celcius=";
    cin >> celcius;
     cout << endl;
    
    fahrenheit= (9.0/5.0)*celcius+32;
    reamur= (4.0/5.0)*celcius;
    kelvin= celcius+273.15;
    
    cout << celcius << " derajat celcius =" << fahrenheit << " derajat fahrenheit" << endl;
    cout << celcius << " derajat celcius =" << reamur << " derajat reamur" <<endl;
    cout << celcius << " derajat celcius =" << kelvin << " derajat kelvin";
    
     return 0;
}
