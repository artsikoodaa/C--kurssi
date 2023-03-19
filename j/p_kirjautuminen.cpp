// P_KIRJAUMINEN.EXE
// TARJOAA PELISSÄ LUOKAN / FUNKTIOT, JA OMIEN HEADARIEN KÄYTÖN.
    

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <string>                                       // tällä varmistamme, että luokat ja funktiot toimivat oikein, tarkoittaa merkkijonoa.

#include "h_tietokoneruutu_yla.h"                       // tässä on itsetehty headari. Tuotan grafiikkaa.
#include "h_tietokoneruutu_ala.h"                       // tässä on itsetehty headari. Tuotan grafiikkaa.
#include "h_tietokoneruutu_kirj.h"                      // tässä on itsetehty headari. Tuotan grafiikkaa.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

class Henkilo {                                         // Luodaan luokka Henkilö.
private:
    string nimi;                                        // Henkilö-luokan alla on string tyyppinen merkkijono nimeltä nimi.
public:
    void aseta_nimi(string n) {
        nimi = n;
    }
    string tuo_nimi() {
        return nimi;
    }
};

int main() {
    string nimi;
    tietokoneruutu_yla();                               // Oma headari, ajetaan tietokoneruutu.
    tietokoneruutu_kirj();                              // Oma headari, ajetaan nimikysely.
    tietokoneruutu_ala();                               // Oma headari, ajetaan tietokoneruutu.
    cout << "\n";
    cout << "NIMI: ";
    getline(cin, nimi);
    cout << "\n";

    Henkilo henkilo;
    henkilo.aseta_nimi(nimi);

    cout << "Tervetuloa toihin, tyontekija " << henkilo.tuo_nimi();
    cout << "\n";

    system("pause");                                    // Pysäytys
    return 0;
}