// P_LOUNAS.EXE
// KÄYTTÄÄ KRONOLOGIAKIRJASTOA, JOLLA LUODAAN PELIIN ELÄMÄÄ.
    
#include <iostream>                                     // standardikirjastojen standardikirjasto, esim cout ei pelaa ilman tätä.
#include <chrono>                                       // Kronologiakirjasto.
#include <thread>                                       // Kirjasto funktioille ja luokille.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

int main() {


cout << "Talla kertaa syot kevyesti, jotta jaksat paremmin...\n";
    ifstream a1("g_lounas.txt");                       // jatketaan copypaste -koodauksella seuraavaan tiedostoon.
        if (a1.is_open())
            cout << a1.rdbuf();
            a1.close();
            cout << "\n\nKun olet syonyt jatkat iltapaivan tyovuoroosi.\n";
            system("pause");
            
    this_thread::sleep_for(chrono::seconds(1));         // Aikaviiveellä iloa peliin.
    cout << "Peli latautuu.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Peli latautuu..\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Peli latautuu...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\nPeliosio ladattu, jatka painamalla mita tahansa nappainta.\n";
    system("pause");
    system("p_iltapaiva.exe");                          // Ajetaan pelin viimeinen osio.
    return 0;
}