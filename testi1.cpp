#include <iostream>

int main() {
    std::cout << "Welcome to the Choose Your Own Adventure game!" << std::endl;
    std::cout << "You find yourself standing at the entrance to a cave. What do you do?" << std::endl;
    std::cout << "1. Enter the cave." << std::endl;
    std::cout << "2. Turn back and leave." << std::endl;

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You cautiously step into the cave. As you move forward, you hear a faint growling noise." << std::endl;
        std::cout << "What do you do?" << std::endl;
        std::cout << "1. Investigate the noise." << std::endl;
        std::cout << "2. Run back out of the cave." << std::endl;

        std::cin >> choice;

        if (choice == 1) {
            std::cout << "You approach the source of the noise and discover a sleeping bear. You try to sneak past it, but step on a twig and wake it up." << std::endl;
            std::cout << "The bear charges at you and you barely manage to escape. You run back to the entrance of the cave, your heart racing." << std::endl;
        } else {
            std::cout << "You turn and run back out of the cave. As you're running, you trip and fall. You look back and see that you've been followed by a pack of wolves." << std::endl;
            std::cout << "You try to run, but the wolves catch up to you and you don't make it out of the woods alive." << std::endl;
        }

    } else {
        std::cout << "You turn back and leave the cave. As you're walking back, you hear a faint voice calling for help." << std::endl;
        std::cout << "What do you do?" << std::endl;
        std::cout << "1. Investigate the voice." << std::endl;
        std::cout << "2. Keep walking and ignore the voice." << std::endl;

        std::cin >> choice;

        if (choice == 1) {
            std::cout << "You follow the sound of the voice and discover a lost hiker. You help them find their way back to civilization and are hailed as a hero." << std::endl;
        } else {
            std::cout << "You keep walking and ignore the voice. As you're leaving, you realize that you've missed your chance to do something good." << std::endl;
        }
    }

    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}

class Car {
    private:
        std::string make;
        std::string model;
        int year;
    
    public:
        Car(std::string _make, std::string _model, int _year) {
            make = _make;
            model = _model;
            year = _year;
        }
    
        void print() {
            std::cout << "Make: " << make << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Year: " << year << std::endl;
        }
};

int main() {
    Car myCar("Ford", "Mustang", 2022);
    myCar.print();
    
    return 0;
}

void grafiikat(string filename)
{
    ifstream file(filename);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;}
        file.close();
    } else {
        cout << "Unable to open file " << filename << endl;
    }
    
}

int main(){
    string filename1 = "g_tervetuloa.txt";
    string filename2 = "g_etusivu.txt";
    string filename3 = "g_peli.txt";
    {
    grafiikat(filename1);
    cout << endl;
    system("pause");
    system("cls");
    grafiikat(filename2);
    cout << endl;
    system("pause");
    system("cls");
    grafiikat(filename3);
    cout << endl;
    system("pause");
    }    
    cout << "You find yourself standing at the entrance to a cave. What do you do?" << std::endl;
    cout << "1. Enter the cave." << std::endl;
    cout << "2. Turn back and leave." << std::endl;    
    return 0;'
    
    
    int main() {
    std::string filename = "grafiikka/g_tervetuloa.txt";
    std::string command = "open \"" + filename + "\"";
    int exit_code = system(command.c_str());
    if (exit_code == 0) {
        std::cout << "File opened successfully." << std::endl;
    } else {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
    return 0;'