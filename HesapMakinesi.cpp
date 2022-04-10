#include <iostream>
using namespace std;

    int main() {
        baslangýc :
        double sayi1, sayi2, sonuc;
        char islem ;

        cout << " yapmak istedginiz islemi giriniz :  " << endl;
        cin >> sayi1 >> islem >> sayi2;

            switch (islem) {
            case '+':
                sonuc = sayi1 + sayi2;

                break;
            case '-':
                sonuc = sayi1 - sayi2;

                break;
            case '*':
                sonuc = sayi1 * sayi2;

                break;
            case '/':
                sonuc = sayi1 / sayi2;

                break;
            default:
                sonuc = 0;

                break;
            }
        cout << sayi1 << islem << sayi2 << "=" << sonuc << endl;
        goto baslangýc;
        return 0;
    }