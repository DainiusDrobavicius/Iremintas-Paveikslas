#include <iostream>
#include <string>

using namespace std;
int main()
{
    string vardas;
    string lytis;
    int eilutes;
    int ilgis;
    bool teisinga = true;
    cout << "Koks jusu vardas? ";
    cin >> vardas;
    while (teisinga)
    {
        cout << "Kokia jusu lytis? (Vyras/Moteris) ";
        cin >> lytis;
        if (lytis == "Vyras")
        {
            cout << "Kiek eiluciu norite tarp pasisveikinimo? ";
            cin >> eilutes;
            ilgis = vardas.length() + 14;
            for (int i = 0; i < ilgis; i++)
            {
                cout << '*';
            }
            cout << endl;
            for (int i = 0; i < eilutes; i++)
            {
                cout << '*';
                for (int j = 0; j < ilgis - 2; j++)
                {
                    cout << ' ';
                }
                cout << '*' << endl;
            }

            cout << "* Sveikas, " + vardas + "! *" << endl;
            for (int i = 0; i < eilutes; i++)
            {
                cout << '*';
                for (int j = 0; j < ilgis - 2; j++)
                {
                    cout << ' ';
                }
                cout << '*' << endl;
            }
            for (int i = 0; i < ilgis; i++)
            {
                cout << '*';
            }
            teisinga = false;
        }
        else if (lytis == "Moteris")
        {
            cout << "Kiek eiluciu norite tarp pasisveikinimo? ";
            cin >> eilutes;
            ilgis = vardas.length() + 13;
            for (int i = 0; i < ilgis; i++)
            {
                cout << '*';
            }
            cout << endl;
            for (int i = 0; i < eilutes; i++)
            {
                cout << '*';
                for (int j = 0; j < ilgis - 2; j++)
                {
                    cout << ' ';
                }
                cout << '*' << endl;
            }

            cout << "* Sveika, " + vardas + "! *" << endl;
            for (int i = 0; i < eilutes; i++)
            {
                cout << '*';
                for (int j = 0; j < ilgis - 2; j++)
                {
                    cout << ' ';
                }
                cout << '*' << endl;
            }
            for (int i = 0; i < ilgis; i++)
            {
                cout << '*';
            }
            teisinga = false;
        }
        else
        {
            cout << "Ivedete bloga lyti..." << endl;
        }
    }
    return 0;
}