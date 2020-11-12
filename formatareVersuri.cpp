#include <iostream>
#include <string>

using namespace std;

int vectorStelute[200], sumaDeCuvinte;
string cuvant, arrayCuvinte[103];

void adaugaStelute(int numarSpatii, int numarStelute)
{
    for (int i = 1; i <= 200; ++i) {
        vectorStelute[i] = 0;
    }
    while (numarStelute > 0) {
        for (int i = 1; i <= numarSpatii; ++i) {
            if (numarStelute > 0) {
                ++vectorStelute[i];
                --numarStelute;
            }
        }
    }
}

int diferenta(int a, int b)
{
    return a - b;
}

int sumaArrayCuvinte(int from, int to)
{
    sumaDeCuvinte = 0;
    for (int i = from; i <= to; ++i) {
        sumaDeCuvinte += arrayCuvinte[i].length();
    }
    return sumaDeCuvinte;
}

int main()
{
    int n, x, y; // 4 1 9
    cin >> n >> x >> y;
    cin.get();

    for (int k = 1; k <= n; ++k) {
        getline(cin, cuvant);
        arrayCuvinte[k] = cuvant;
    }

    int inceput = 1, sfarsit = 1, suma = 0, sumaCuvinte = 0, linii = 0, nrCuvinte = 0, cuvinteAfisate = 0;

    while (cuvinteAfisate < n) {

        inceput = sfarsit;
        nrCuvinte = 0;
        suma = arrayCuvinte[inceput].length();
        ++nrCuvinte;
        for (int i = inceput + 1; i <= n; ++i) {
            sfarsit = i;
            if (arrayCuvinte[i].length() + nrCuvinte <= diferenta(y, suma)) {
                suma += arrayCuvinte[i].length();
                ++nrCuvinte;
            }
            else {
                break;
            }
        }
        int varSfarsit = sfarsit;
        if (sumaArrayCuvinte(inceput, sfarsit) + nrCuvinte > y)
            varSfarsit = sfarsit - 1;

        if (suma < y && nrCuvinte != 1) {
            adaugaStelute(varSfarsit - inceput, y - suma);
        }
        int iteratorStelute = 1;

        for (int j = inceput; j <= varSfarsit; ++j) {
            cout << arrayCuvinte[j];
            ++cuvinteAfisate;
            while (vectorStelute[iteratorStelute]) {
                cout << "*";
                --vectorStelute[iteratorStelute];
            }
            ++iteratorStelute;
        }

        cout << "\n";
        ++linii;
        if (linii == x) {
            cout << "\n";
            linii = 0;
        }
    }

    return 0;
}
