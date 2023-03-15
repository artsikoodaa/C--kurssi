    // ARTO LEIVISKÄ LOPPUTYÖ AV00AC42-3009 C++ -kurssille

    // OHJELMA ON SUORITETTU SITEN, ETTÄ ENSIN OHJELMASSA ON FUNKTIOT JA OLIO-OHJELMOINTI (object-oriented programming).
    // NORMAALISTI OBJEKTIT OVAT OMIA TIEDOSTOJAAN JA ITSE MAIN -FUNKTIO, ELI OHJELMAN PÄÄFUNKTIO EI OLE SUURI.
    // YKSI KAVERI SANOI, ETTÄ HE PYRKIVÄT NOIN MAXIMI 120 MERKKIIN PÄÄOHJELMASSA HEIDÄN FIRMASSAAN.
            
//Tehtävässä tulee käyttää yleisimpien Compilereiden standardikirjastoja. Määritellään ne seuraavaksi.
#include <iostream>                                     //standardikirjasto.
#include <conio.h>                                    
#include <dos.h>
#include <windows.h>                                    //Käytämme Windows-sovellusta cmd, joten otamme kirjaston Windows.
#include <time.h>
// #include <fstream>                                     //Tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen.
// #include <chrono>
// #include <cstdlib>                                      //Yleistarkoitukselliset funktiot,  muistimanagerointi, kommunikaatio toisiin sovelluksiin... -kirjasto.
#include <string>                                       //merkkijonokirjasto.


using namespace std;                                    //Tämä tunnistaa sanoja käskyiksi. Hyödyllinen apu, kun ei tartte koodiin kirjoittaa koko ajan.


            
//Tehtävässä tulee käy
#include <iostream>                                     //standardikirjasto.
// #include <windows.h>                                    //Käytämme Windows-sovellusta cmd, joten otamme kirjaston Windows.
// #include <thread>
#include <fstream>                                     //Tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen.
// #include <chrono>
// #include <cstdlib>                                      //Yleistarkoitukselliset funktiot,  muistimanagerointi, kommunikaatio toisiin sovelluksiin... -kirjasto.
#include <string>                                       //merkkijonokirjasto.
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
using namespace std;                                    //Tämä tunnistaa sanoja käskyiksi. Hyödyllinen apu, kun ei tartte koodiin kirjoittaa koko ajan.

#include <windows.h>
#include <ShellApi.h>

#include <iostream>
#include <fstream>
#include <string>

#include <cstdlib>  // for system function

int main() {
  string path = "pelimoottori/p_tervetuloa.exe";
  int ret = std::system(path.c_str());
  //system("p_kysely.exe");
  return 0;
}