// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_LELtieto
#define h_LELtieto

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void LELtieto() {                                       // voidia käyttämällä emme palauta arvoja.
    
cout << "***********************************************************************************************\n";
cout << "       OLET VAIHTANUT TYOPISTETTA, JA VALVOT ILTAPAIVAN KAASUMITTAREITA\n";
cout << "       Istahdat paikallesi valvomaan prosessikaasuja.\n";
cout << "       prosessin kaasumittarit ilmoittavat sinulle lukemia\n";
cout << "       ja joudut tekemaan turvallisia paatoksia.\n";
cout << "***********************************************************************************************\n";
cout << "       Jotta voisit tehda turvallisia paatoksia,\n";
cout << "       Sinun tulee tietaa, etta LEL tarkoittaa; Lower Explosive Limit\n";
cout << "       Se on rajahdysvaarallisen kaasun alin raja missä sen kaasu voi rajahdysmaisesti syttya\n";
cout << "       Sinun tulee tietaa, etta LEL tarkoittaa; Lower Explosive Limit\n";
cout << "***********************************************************************************************\n";
cout << "       Tanaan prosessivalvonnassa paasee aika-ajoin ilmaan propaania.\n";
cout << "       Propaani on samaa kaasua mita on kaasupulloissa.\n";    
cout << "***********************************************************************************************\n";
cout << "       Yleisesti kaasuhalytysrajat ovat alahalytysrajalla 10/20/40 -prosenttia.\n";    
cout << "       Yleisesti kaasuhalytysrajat ovat ylahalytysrajalla 20/40/50 -prosenttia.\n";
cout << "***********************************************************************************************\n";
cout << "       NESTE OIL tassa pelissa kayttaa rajoja  50 LEL ja alle tuuletuksen alarajaohjaukselle.\n";
cout << "       100 prosenttia LEL ja Nesteella suoritetaan hataseis,\n";
cout << "       ihmiset evakuoidaan, ja tuuletus kytketaan maksimille.\n";
cout << "***********************************************************************************************\n";        
cout << "       ALAPPA TOIHIN...\n";
}
#endif