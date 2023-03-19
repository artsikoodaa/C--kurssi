// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_kysymys100
#define h_kysymys100

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void kysymys100() {                                     // voidia käyttämällä emme palauta arvoja.
    
ifstream a("g_100LEL.txt");
    if (a.is_open())
        cout << a.rdbuf();
        a.close();      
    
}
#endif