// Tämä on itsekirjoitettu pieni header-tiedosto. Voimme käyttää sitä kuin standardikirjastoa muissa ohjelmissa.

#ifndef h_tietokoneruutu_ala
#define h_tietokoneruutu_ala

#include <iostream>                                     // standardikirjastojen standardikirjasto.
#include <fstream>                                      // tämä on datatiedostojen lukemiseen, ja myös kirjoittamiseen. Alla käytetään ifstreamia tästä kirjastosta.

using namespace std;                                    // std spesifioidaan asioita, ja kun kirjoitan tämän tähän se skooppaa nuo cout käskyt.

void tietokoneruutu_ala() {                             // voidia käyttämällä emme palauta arvoja.
    cout << "*\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*                                                                                           *\n";
    cout << "*********************************************************************************************\n";
    cout << "           }. -------------------------------------------------------------------.\n";        
    cout << "           | [Esc] [F1][F2][F3][F4][F5][F6][F7][F8][F9][F0][F10][F11][F12] o o o|\n";        
    cout << "           |                                                                    |\n";        
    cout << "           | [`][1][2][3][4][5][6][7][8][9][0][-][=][_<_] [I][H][U] [N][/][*][-]|\n";        
    cout << "           | [|-][Q][W][E][R][T][Y][U][I][O][P][{][}] | | [D][E][D] [7][8][9]|+||\n";        
    cout << "           | [CAP][A][S][D][F][G][H][J][K][L][;]['][#]|_|           [4][5][6]|_||\n";        
    cout << "           | [^][][Z][X][C][V][B][N][M][,][.][/] [__^__]    [^]    [1][2][3]| ||\n";        
    cout << "           | [c]   [a][________________________][a]   [c] [<][V][>] [ 0  ][.]|_||\n";        
    cout << "           `--------------------------------------------------------------------'\n";        
}                                                                          
#endif