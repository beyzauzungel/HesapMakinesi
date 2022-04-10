#include <iostream>
using namespace std;

int main() {
    double kilo, boy, vki;
    cout << "kilonuzu giriniz (kg)    : ";
    cin >> kilo;
    cout << "boyunuzu giriniz (m)     : ";
    cin >> boy;
    vki = (kilo / (boy * boy));
    cout << "vucut kitle indeki : " << vki << endl;

    if (vki <= 20 )
    {
        cout << "Zayifsiniz.. \n";
     }
    else if (vki > 20 && vki < 24.9)
    {
        cout << "Normal Kilodasiniz.. \n";
    }
    else if (vki > 25 && vki < 29.9)
    {
        cout << "Hafif Sismansiniz..";
    }
    else if (vki > 30 && vki < 34.9)
    {
        cout << "Saglik Acisindan Tehlikeli Sismansiniz.. \n";
    }
    else if (vki > 45 && vki < 49.9)
    {
        cout << "Asiri Sismansiniz.. \n";
    }
    else if (vki > 49.9)
    {
        cout << "Olumcul Sismansiniz.. \n";
    }
    else
    {
        cout << "Gecersiz Giris Yaptiniz.. \n";
    }

    return 0;
}
