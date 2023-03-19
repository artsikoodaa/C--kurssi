// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_tietokoneruutu_yla
#define h_tietokoneruutu_yla

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void tietokoneruutu_yla() {                             // voidia käyttämällä emme palauta arvoja.
    
    cout << "\n";
    cout << "*********************************************************************************************\n";
    cout << "*                                                                                           *\n";
    cout << "*                           NESTE OIL PROSESSIVALVONTA                                      *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
}
#endif