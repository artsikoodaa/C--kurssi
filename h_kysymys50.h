// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_kysymys50
#define h_kysymys50

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void kysymys50() {                                      // voidia käyttämällä emme palauta arvoja.
    
ifstream a("g_50LEL.txt");
    if (a.is_open())
        cout << a.rdbuf();
        a.close();      
    
}
#endif