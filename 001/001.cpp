#include <iostream>

using namespace std;

int main()
{
    while (true) {
        char ch;
        short int n1, n2, n3, q;
        cout << "Vvedite pervoe chislo: " << endl;
        cin >> n1;
        cout << "Vvedite vtoroe chislo: " << endl;
        cin >> n2;
        cout << "Vvedite resultat: " << endl;
        cin >> n3;
            if (n3 == n1 * n2) {
            cout << "Verno!";
        }
            else cout << "Neverno. Dolzhno poluchitsa:  " << n1 * n2;
        cout << "                                  Nachat proverku? 1-Da / 2-Net.";
        cin >> q;
        system("cls");
        if (q != 1)break;
    }
    
}