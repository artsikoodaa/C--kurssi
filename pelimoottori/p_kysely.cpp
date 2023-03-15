//Luodaan pelin ydin, eli kysely. Käytän luokkia ja ehtorakenteita.

//Tehtävässä tulee käyttää yleisimpien Compilereiden standardikirjastoja. Määritellään ne seuraavaksi.
#include <iostream>
#include <string>
#include <vector>

using namespace std;                                    //Tämä tunnistaa sanoja käskyiksi. Hyödyllinen apu, kun ei tartte koodiin kirjoittaa koko ajan.


class nesteoil {
private:
    std::string text;
    std::string answer;

public:
    nesteoil(string text) : text(text) {}

    void set_answer(std::string answer) {
        this->answer = answer;
    }

    std::string get_text() {
        return text;
    }
};

class nesteoil2 {
private:
    vector<nesteoil2> nesteoil;

public:
    void add_question(nesteoil2 q) {
        nesteoil2.push_back(q);
    }

    void display() {
        for (int i = 0; i < nesteoil2.size(); i++) {
            cout << i+1 << ". " << nesteoil2[i].get_text() << std::endl;
        }
    }
};

int main() {
    Questionnaire q;
    Question q1("What is your name?");
    Question q2("What is your age?");
    Question q3("What is your favorite color?");

    q.add_question(q1);
    q.add_question(q2);
    q.add_question(q3);

    q.display();

    return 0;
}