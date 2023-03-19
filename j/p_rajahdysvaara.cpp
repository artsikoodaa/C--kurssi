    // P_KYSELY.EXE
    // TARJOAA PELISSÄ EHTORAKENTEET, LUOKAT / FUNKTIOT, SEKÄ PERINTÄÄ
    // TÄMÄ TIEDOSTO ON PELIN MOOTTORI, JOKA KÄY KUNNES PELAAJA TEKEE VIRHEEN

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.
#include <string>                                       // tällä varmistamme, että luokat ja funktiot toimivat oikein.

#include "h_putki.h"                                    // tässä on itsetehty headari perintää varten.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt, joten koodin määrä vähenee, kun sitä ei tarvitse kirjoittaa jokaiseen cout -käskyyyn.

int main() {
    bool pelaauudelleen = false;                        // Boolean funktio on false ja nolla, tai true ja 1.
    do {                                                // Tuodaan koko alla oleva koodi do -loopin alle, jotta saadaan kierto-ominaisuus.
    int paine = 0;
    int nopeus = 0;                               
    
    cout << "\n*********************************************************************************************\n";
    cout << " Tyhja sailioauto saapuu tankattavaksi. Asetat tayttonopeuden sallituissa rajoissa 0-5 m/s\n";
        cin >> nopeus;                                          // Syötetään omaan hedariin tietoa.
        while (nopeus < 0 || nopeus > 5 ) {                      // Käytetään while -looppia luomaan mainitut rajat
            ifstream a1("g_rajahdys.txt");                      // Jos while -looppi toteutuu, ajetaan räjähdys-kuva.
            if (a1.is_open())
            cout << a1.rdbuf();
            system("pause");
            a1.close();
            exit(EXIT_SUCCESS);                                 // Ajetaan CMD -alas. Peli loppuu.
            }
            if (cin.fail()) {                                   // Tällä ajan CMD:n alas, jos väärä string syötetään.
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);
            }
            
    cout << "\n*********************************************************************************************\n";
    cout << " Asetat myos syottopaineen, joka on sallittu rajoissa: 0-8 baria\n";
        cin >> paine;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        while (paine < 0 || paine > 8) {
        ifstream a2("g_rajahdys.txt");                          // jatketaan copypaste -koodauksella seuraavaan tiedostoon.
            if (a2.is_open())
            cout << a2.rdbuf();
            system("pause");
            a2.close();
            exit(EXIT_SUCCESS);
            }
            if (cin.fail()) {                                   // Tällä ajan CMD:n alas, jos väärä string syötetään.
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);
            }
                                    
    cout << "\n*********************************************************************************************\n";
        
    int indikaattori = laske_rajahdysvaara(paine, nopeus); //Tässä headarin antamat arvot määritellään vielä indikaattoriksi, jotta se voidaan tulostaa alla.

    cout << " Talla hetkella rajahdysvaara -indikaattori nayttaa Neste Oilin\nomalla indikaattorimittarillaan lukemaa " << indikaattori << ".\n";
    cout << " KAIKKI KUNNOSSA. HIENOA TOIMINTAA, OPERAATTORI!\n";
    cout << " PYSYTHAN SALLITUISSA RAJOISSA, JOTTA KAIKKI PAASEVAT TURVALLISESTI TANAANKIN KOTIIN.\n OLETHAN VAROVAINEN ASETUKSISSA!\n";
    cout << " MYOS ALIPAINEEN MUODOSTAVAT NEGATIIVISET LUKEMAT VOIVAT RAJAYTTAA KOKO PAIKAN.\n";

    cout << "SEURAAVA REKKA TULEEKIN JO, MUISTATHAN OLLA VAROVAINEN ASETUKSISSA!\n ONHAN VERENSOKERISI KUNNOSSA, JOTTA HOMMA EI LAHDE KASISTA!\n\n";
        ifstream a3("g_rekka.txt");                          // jatketaan copypaste -koodauksella seuraavaan tiedostoon.
        if (a3.is_open())
        cout << a3.rdbuf();
        a3.close();

    cout << "\n Haluatko vastaanottaa toisen sailioauton ja valvoa sita, vai lahdetko lounaalle ja jatkat iltapaivaan? (k/e)\n";
        char valinta;
        cin >> valinta;

        if (valinta == 'k' || valinta == 'K') {             // Tässä aloitettu do -looppi päätetään true tai falsella, ja ajetaan uudelleen tai ei.
            pelaauudelleen = true;
        } 
        else {
            pelaauudelleen = false;
            system("p_lounas.exe");
               
        }

    } while (pelaauudelleen);

return 0;

}