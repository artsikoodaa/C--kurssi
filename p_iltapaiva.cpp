// P_ILTAPAIVA.EXE
// TARJOAA PELISSÄ LUOKAN / FUNKTIOT, JA OMIEN HEADARIEN KÄYTÖN.
// KYSEESSÄ ON PELIN TOINEN PELIMOOTTORI.

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.
#include <string>                                       // tällä varmistamme, että luokat ja funktiot toimivat oikein.
#include <chrono>                                       // Kronologiakirjasto.
#include <thread>                                       // Kirjasto funktioille ja luokille.

#include "h_tietokoneruutu_yla.h"                       // tässä on itsetehtyjä headareita. Tuotan grafiikkaa.
#include "h_tietokoneruutu_keski.h"
#include "h_tietokoneruutu_ala.h"
#include "h_kysymys0.h"
#include "h_kysymys25.h"
#include "h_kysymys50.h"
#include "h_kysymys75.h"
#include "h_kysymys100.h"
#include "h_LELtieto.h"

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt, joten koodin määrä vähenee, kun sitä ei tarvitse kirjoittaa jokaiseen cout -käskyyyn.

int main() {
    int valinta;
    int valinta1 = 1;
    int valinta2 = 2;
    int valinta3 = 3;
    
    cout << "\n";                                       // Tällä vain varmistan, että ASCII lähtee tulostuun omalta riviltään.
    tietokoneruutu_yla();                               
    tietokoneruutu_keski();                             // Ajelen headareita jarjestyksessa.
    tietokoneruutu_ala();
    cout << "\nTERVETULOA TYOPISTEELLESI!\n";
    system("pause");
    LELtieto();
    cout << "\n";                                                                               
    system("pause");

    cout << "\nProsessi on kaynnissa. Ole tarkkana.\n";
    cout << "\nValitse oikea vaihtoehto mittarinayttaman mukaan.\n";
    
    this_thread::sleep_for(chrono::seconds(1));         // Aikaviiveellä iloa peliin.
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n";

    tietokoneruutu_yla();
    kysymys0 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    cout << "\nViela kaikki hyvin. Mittari nayttaa nollaa.\n";
    cout << "\nNyt valitse, jokin vaihtoehto.";
    cout << "Muistathan, etta alaraja 75 LEL, ja 100 LEL hataseis.\nViela kaikki hyvin.\n"; 
    cout << "Olet vastuullinen, etta prosessi etenee,\n";
    cout << "ja rahaa tulee osakkeenomistajien tilille. Et voi hataseisottaa ilman syyta.\n";
        
    cin >> valinta;
    if (valinta == valinta1) {
            cout << "Ei viel tarvitse tuulettaa.\n";
            }
    if (valinta == valinta2) {
            cout << "Turha halytys. Esimiehet saapuvat paikalle ja erottavat sinut. GAME OVER! \n";
            system("pause");
            exit(EXIT_SUCCESS);                                 
            } 
    if (valinta == valinta3) {
            cout << "Oikea valinta!\n";
            }
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 5 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 4 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 3 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\n";                                      
    tietokoneruutu_yla();
    kysymys25 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    
    cin >> valinta;
    if (valinta == 1) {
            cout << "Hyva idea, parempi tuulettaa heti.\n";
            }
    if (valinta == 2) {
            cout << "Ehka vahan liian hataista viela tassa vaiheessa\n";
            cout << "Et saa kohta palkkaa, kun koko ajan keskeytat prosessin.\n";
            } 
    if (valinta == 3) {
            cout << "Oikea valinta!\n";
            } 
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\n";                                      
    tietokoneruutu_yla();
    kysymys50 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    
    cin >> valinta;
    if (valinta == 1) {
            cout << "Neste Oilin virallinen alaraja, hienoa toimintaa! Tuuletus on hyva!.\n";
            }
    if (valinta == 2) {
            cout << "Ehka vahan liian hataista viela tassa vaiheessa\n";
            }
    if (valinta == 3) {
            cout << "Uuuuuuu.....\n";
            } 
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\n";                                      
    tietokoneruutu_yla();
    kysymys25 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    
    cin >> valinta;
    if (valinta == 1) {
            cout << "Hyva idea, parempi tuulettaa heti.\n";
            }
    if (valinta == 2) {
            cout << "Ehka vahan liian hataista viela tassa vaiheessa\n";
            cout << "Et saa kohta palkkaa, kun koko ajan keskeytat prosessin.\n";
            } 
    if (valinta == 3) {
            cout << "Oikea valinta!\n";
            }
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\n";                                      
    tietokoneruutu_yla();
    kysymys75 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    
    cin >> valinta;
    if (valinta == 1) {
            cout << "Nyt tuuletus kayntiin ehdottomasti ja seurataan tilannetta herkeamatta.\n";
            }
    if (valinta == 2) {
            cout << "Hyva valinta, mutta esimiehesi ei tykkaa, eika osakkeenomistajat\n";
            }
    if (valinta == 3) {
        cout << "Nyt olet kusessa, prosessi tayttyi nopeasti 100 LEL hoyryavasta kaasusta. Kaikki kuolivat, sinun syy!\n";
            ifstream a1("g_rajahdys.txt");                      
            if (a1.is_open())
            cout << a1.rdbuf();
            system("pause");
            a1.close();
            exit(EXIT_SUCCESS);                                 
            }
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 4 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 3 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 2 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Seuraava tieto kaasuilmaisimelta 1 sekuntia.\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\n";                                      
    tietokoneruutu_yla();
    kysymys100 ();
    tietokoneruutu_ala();
    cout << "\n";                                      
    
    cin >> valinta;
    if (valinta == 1) {
            cout << "Tuuletus ei nayta riittavan.......\n";
            ifstream a1("g_rajahdys.txt");                      
            if (a1.is_open())
            cout << a1.rdbuf();
            system("pause");
            a1.close();
            exit(EXIT_SUCCESS);                                 
            }
    if (valinta == 2) {
            cout << "OIKEIN PELATTU ! Pelastetaan kaikki!\n";
            }
    if (valinta == 3) {
        cout << "Nyt olet kusessa, prosessi tayttyi nopeasti 100 LEL hoyryavasta kaasusta. Kaikki kuolivat, sinun syy!\n";
            ifstream a1("g_rajahdys.txt");                      
            if (a1.is_open())
            cout << a1.rdbuf();
            system("pause");
            a1.close();
            exit(EXIT_SUCCESS);                                 
            }
    if (valinta >= 4 || valinta <= 0) {
            cout << "Kone meni jumiin. GAME OVER!\n";
            system("pause");
            exit(EXIT_SUCCESS);  
            }    
    cout << "*********************************************************************************************\n";
    cout << "ONNEKSI OLKOON, OLET PELANNUT PELIN LAPI! NYT PAASET KOTIIN\n";
    cout << "*********************************************************************************************\n";
    cout << "Todellisuudessa LEL -rajat ovat todella alhaisia. Yleensa 10/20 tai 20/40 LEL raja-arvoilla. \n";
    cout << "\n";
    cout << "*********************************************************************************************\n";
    cout << "Kiitos pelaamisesta!\n";
    system("pause");
    return 0;    
}