#include <iostream>
#include <string>

using namespace std;
int main()
{
    string vardas;
    string lytis;
    int ilgis;
    string eilute3;
    bool teisinga = true;
    cout << "Koks jusu vardas? ";
    cin >> vardas;
    while (teisinga)
    {
        cout << "Kokia jusu lytis? (Vyras/Moteris) ";
        cin >> lytis;
        if (lytis == "Vyras")
        {
            ilgis = vardas.length() + 14;
            eilute3 = "* Sveikas, " + vardas + "! *";
            teisinga = false;
        }
        else if (lytis == "Moteris")
        {
            ilgis = vardas.length() + 13;
            eilute3 = "* Sveika, " + vardas + "! *";
            teisinga = false;
        }
        else
        {
            cout << "Ivedete bloga lyti..." << endl;
        }
    }

    string eilute1(ilgis, '*');
    string eilute2(ilgis, ' ');
    eilute2[0] = '*';
    eilute2[eilute2.length() - 1] = '*';

    cout << eilute1 << endl;
    cout << eilute2 << endl;
    cout << eilute3 << endl;
    cout << eilute2 << endl;
    cout << eilute1 << endl;
    return 0;
}