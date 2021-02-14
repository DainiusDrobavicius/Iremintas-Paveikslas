#include <iostream>
#include <string>

using namespace std;
int main()
{
    string vardas;
    cout << "Koks jusu vardas? ";
    cin >> vardas;
    int ilgis = vardas.length() + 14;

    string eilute1(ilgis, '*');
    string eilute2(ilgis, ' ');
    eilute2[0] = '*';
    eilute2[eilute2.length() - 1] = '*';
    string eilute3("* Sveikas, " + vardas + "! *");

    cout << eilute1 << endl;
    cout << eilute2 << endl;
    cout << eilute3 << endl;
    cout << eilute2 << endl;
    cout << eilute1 << endl;
    return 0;
}