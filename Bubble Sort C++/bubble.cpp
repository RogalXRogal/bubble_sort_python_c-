#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <windows.h>
#include <algorithm>

using namespace std;

const int ilePlikow = 18;
const int ileTestow = 3;

string nazwaPliku[ilePlikow];
int x;
int i;
int j;
int k;
int l;
int m;
int ile;
int ileliczb[ilePlikow];
int dane[100000];
int daneDoSort[100000];

double pomiary[ilePlikow][ileTestow];
double start;
double koniec;
double czas;


int main()
{
    nazwaPliku[0] = "liczby_losowe_1k.txt";
    ileliczb[0] = 1000;
    nazwaPliku[1] = "liczby_losowe_10k.txt";
    ileliczb[1] = 10000;
    nazwaPliku[2] = "liczby_losowe_100k.txt";
    ileliczb[2] = 100000;
    nazwaPliku[3] = "liczby_malejace_1k.txt";
    ileliczb[3] = 1000;
    nazwaPliku[4] = "liczby_malejace_10k.txt";
    ileliczb[4] = 10000;
    nazwaPliku[5] = "liczby_malejace_100k.txt";
    ileliczb[5] = 100000;
    nazwaPliku[6] = "liczby_malejaco_rosnacy_1k.txt";
    ileliczb[6] = 1000;
    nazwaPliku[7] = "liczby_malejaco_rosnacy_10k.txt";
    ileliczb[7] = 10000;
    nazwaPliku[8] = "liczby_malejaco_rosnacy_100k.txt";
    ileliczb[8] = 100000;
    nazwaPliku[9] = "liczby_rosnace_1k.txt";
    ileliczb[9] = 1000;
    nazwaPliku[10] = "liczby_rosnace_10k.txt";
    ileliczb[10] = 10000;
    nazwaPliku[11] = "liczby_rosnace_100k.txt";
    ileliczb[11] = 100000;
    nazwaPliku[12] = "liczby_rosnaco_malejacy_1k.txt";
    ileliczb[12] = 1000;
    nazwaPliku[13] = "liczby_rosnaco_malejacy_10k.txt";
    ileliczb[13] = 10000;
    nazwaPliku[14] = "liczby_rosnaco_malejacy_100k.txt";
    ileliczb[14] = 100000;
    nazwaPliku[15] = "liczby_stale_1k.txt";
    ileliczb[15] = 1000;
    nazwaPliku[16] = "liczby_stale_10k.txt";
    ileliczb[16] = 10000;
    nazwaPliku[17] = "liczby_stale_100k.txt";
    ileliczb[17] = 100000;


    for (int i = 0; i <= ilePlikow; i++)
    {
        ifstream odczyt(nazwaPliku[i].c_str());       
        ile = ileliczb[i];
        for (j = 0; j < ile; j++)
        {
            odczyt >> dane[j];
        }
        cout << nazwaPliku[i].c_str() << endl;
        for (k = 1; k <= ileTestow; k++)                      
        {
            memcpy(daneDoSort, dane, sizeof(daneDoSort)); 

            start = clock();                                     
            for (l = 0; l < ile - 1; l++)
                for (m = 0; m < ile - 1; m++)
                    if (daneDoSort[m] > daneDoSort[m + 1]) swap(daneDoSort[m], daneDoSort[m + 1]);
            
            
            koniec = clock();                                     

            czas = (double)(koniec - start) / CLOCKS_PER_SEC;       
            cout << (double)czas << "\t";

            pomiary[i][k];                                    


        }
        cout << endl;




        odczyt.close();
    }

    return 0;
}
