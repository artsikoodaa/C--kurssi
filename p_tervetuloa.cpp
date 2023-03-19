// P_TERVETULOA.EXE
// TÄSSÄ SOVELLUKSESSA AJAN ASCII -GRAFIIKKAA.
    

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen.
#include <string>                                       // merkkijonokirjasto.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

int main()
{
    ifstream a1("g_tervetuloa.txt");                    // Ifstream on input-toiminto tiedostoihin.
    if (a1.is_open())                                   // Tässä ehtorakenteen sisälle luodaan input -rakenne.
        cout << a1.rdbuf();                             // rdbuf antaa mahdollisuuden manipuloida tiedostoa, tämä löytyy iostream -kirjastosta.
        system("pause");                                // pausetan systeemin käyttäjälle.
        a1.close();                                     // suljen tiedoston, jottei se käytä muistia.
        system("cls");                                  // puhdistetaan näyttö.
    
    ifstream a2("g_etusivu.txt");                       // jatketaan copypaste -koodauksella seuraavaan tiedostoon.
    if (a2.is_open())
        cout << a2.rdbuf();
        system("pause");
        a2.close();
        system("cls");
    
    ifstream a3("g_peli.txt");
    if (a3.is_open())
        cout << a3.rdbuf();
        system("pause");
        a3.close();                                     // else -ehtoa en käytä, vaan annan järjestelmän kaatua, jos joku koodi kaatuu esimerkiksi tiedoston puuttumisen takia.
    
    return 0;                                           // paluuarvo tietenkin nolla, joka tarkoittaa success.
}