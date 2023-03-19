// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_tietokoneruutu_keski
#define h_tietokoneruutu_keski

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void tietokoneruutu_keski() {                           // voidia käyttämällä emme palauta arvoja.
    
    cout << "*                                                                                           *\n";
    cout << "*     (1) LISAA TUULETUSTA   (2) HATASEIS JA MAKSIMI TUULETUS   (3) OHITA / JATKA           *\n";
    cout << "*                                                                                           *\n";
    
}
#endif