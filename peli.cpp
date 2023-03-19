// PELI.EXE
// ON TEHTY AJAMAAN SOVELLUKSEN OSIA.
// TARKOITUS ON PITÄÄ TÄMÄ LYHYENÄ, ALLE 140 MERKKIÄ, JOKA ON KUULEMME RAJA YHDESSÄ SOVELLUSFIRMASSA PÄÄSOVELLUKSEN OSALTA.
// KUN SOVELLUS VIIPALOIDAAN, NIIN RAKENNE PYSYY TEHOKKAANA PÄIVITTÄMISEEN.

#include <iostream>                                     // standardikirjastojen standardikirjasto, esim cout ei pelaa ilman tätä.
#include <cstdlib>                                      // Tämä on standardikirjasto ajamaan yleisiä käskymuotoja systeemissä.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt, joten koodin määrä vähenee, kun sitä ei tarvitse kirjoittaa jokaiseen cout -käskyyyn.

int main() {
bool avaa_readme = false;                               // Boolean funktio on false ja nolla, tai true ja 1.
        cout << "\nHaluatko ennen aloittamista lukea README -tiedoston Notepadissa? Paina 'K' ,muuten jatkat automaattisesti eteenpain.\n";
        cout << "Aseta komentokehotteesi hieman isommaksi, jotta voit nauttia pelista taydella grafiikalla.\n";
        char valinta;                                   // Char -variable auttaa ymmärtämään yhden kirjaimen vastausta.
        cin >> valinta;                                 // cin on input -variable.
        if (valinta == 'k' || valinta == 'K') {         // Ehtorakennetta.
            avaa_readme = true;
            cout << "\nKun saat luettua READMEn, voit jatkaa tasta pelaamaan!\n"; 
            system("notepad README.txt");               // Ajetaan notepad ja tiedosto.
         
            system("pause");                            // Pausella vähän selkeyttä.
            system("p_tervetuloa.exe");                 // Ajetaan pelin osioita.
            system("p_kirjautuminen.exe");              
            system("p_rajahdysvaara.exe");              // Koska käytn looppeja pelin lopettamiksesi, en voi käskyttää tässä 
                                                        // kaikkia tiedostoja peräkkäin vaan ajan ne pelin osioiden sisällä,
                                                        // muuten pää EXE, vain jatkaa seuraavaan tiedostoon.
                                                        // tämän opin kantapään kautta.
        
        } 
        
        else {                                          // Jos ei, niin sit startataan pelimoottori.
            avaa_readme = false;
            system("p_tervetuloa.exe");                 
            system("p_kirjautuminen.exe");              
            system("p_rajahdysvaara.exe");              
            
        }
        return 0;                                       // En ole erikseen tehnyt tähän failaus -protokollaa, jos peli kaatuu niin se kaatuu kunnolla.
                                                    
                                                        // Pelin toiminnallisuus ja hallittavuus perustuu useaan tiedostoon,
                                                        // joidan debuggaaminen parantaa pelin testaamista.
}

    

