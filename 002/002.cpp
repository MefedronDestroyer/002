#include <iostream>

using namespace std;

int main()
{
    while (true) {
        int n, q;
        cout << "Vvedite den nedely: " << endl;
        cin >> n;
        if (n == 1) {
            cout << "Ponedelnik: 5:30 Prosnutsa 17:30 Poehat kukuhoi...";
        }
        if (n == 2) {
            cout << "Vtornik: 6:30 Prosnutsa 16:30 Poehat kukuhoi...";
        }
        if (n == 3) {
            cout << "Sreda: 7:30 Prosnutsa 15:30 Poehat kukuhoi...";
        }
        if (n == 4) {
            cout << "Chitverg: 8:30 Prosnutsa 14:30 Poehat kukuhoi...";
        }
        if (n == 5) {
            cout << "Piatnica: 10:30 Pacani piatnica URA! 11:30 Spatky...";
        }
        if (n == 6) {
            cout << "Subbota: 10:30 Prosnutsa 12:30 Poehat kukuhoi...";
        }
        if (n == 7) {
            cout << "Voskresenie: 10:30 Pacani piatnica URA! 11:30 Spatky...";
        }

        cout << "                                  Povtor? 1-Da / 2-Net.";
        cin >> q;
        system("cls");
        if (q != 1)break;
    }

}