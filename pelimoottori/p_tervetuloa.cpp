    // ARTO LEIVISKÄ LOPPUTYÖ AV00AC42-3009 C++ -kurssille

    // OHJELMA ON SUORITETTU SITEN, ETTÄ ENSIN OHJELMASSA ON FUNKTIOT JA OLIO-OHJELMOINTI (object-oriented programming).
    // NORMAALISTI OBJEKTIT OVAT OMIA TIEDOSTOJAAN JA ITSE MAIN -FUNKTIO, ELI OHJELMAN PÄÄFUNKTIO EI OLE SUURI.
    // YKSI KAVERI SANOI, ETTÄ HE PYRKIVÄT NOIN MAXIMI 120 MERKKIIN PÄÄOHJELMASSA HEIDÄN FIRMASSAAN.
            
//Määritellään käytettävät kirjastot.
#include <iostream>                                     //standardikirjasto.
// #include <windows.h>                                    //Käytämme Windows-sovellusta cmd, joten otamme kirjaston Windows.
// #include <thread>
#include <fstream>                                     //Tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen.
// #include <chrono>
// #include <cstdlib>                                      //Yleistarkoitukselliset funktiot,  muistimanagerointi, kommunikaatio toisiin sovelluksiin... -kirjasto.
#include <string>                                       //merkkijonokirjasto.
#include <unistd.h>

using namespace std;                                    //Tämä tunnistaa sanoja käskyiksi. Hyödyllinen apu, kun ei tartte koodiin kirjoittaa koko ajan.


int main(){
    string filename1 = "g_tervetuloa.txt";
    string filename2 = "g_etusivu.txt";
    string filename3 = "g_peli.txt";
    {
    (filename1);
    cout << endl;
    system("pause");
    system("cls");
    (filename2);
    cout << endl;
    system("pause");
    system("cls");
    (filename3);
    cout << endl;
    system("pause");
    }
    return 0;
}