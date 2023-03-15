int main() {
  
    cout << "Welcome to the Choose Your Own Adventure game!" << std::endl;
    cout << "You find yourself standing at the entrance to a cave. What do you do?" << std::endl;
    cout << "1. Enter the cave." << std::endl;
    cout << "2. Turn back and leave." << std::endl;
    int choice;
    cin >> choice;
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