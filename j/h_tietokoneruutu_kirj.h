// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_tietokoneruutu_kirj
#define h_tietokoneruutu_kirj

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void tietokoneruutu_kirj() {                           // voidia käyttämällä emme palauta arvoja.
    
    cout << "\n";
    cout << "*                                                                                           *\n";
    cout << "*               Tervetuloa Neste Oil Porvoon jalostamolle! Syota nimesi!                    *\n";
    cout << "*                      NIMI:                                                                *\n";
    
}
#endif

