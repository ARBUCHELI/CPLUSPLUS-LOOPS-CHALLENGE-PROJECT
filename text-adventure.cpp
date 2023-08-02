#include <iostream>

int main() {
      std::string choice1;
      std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
    std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon.\n";
    std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
    std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
    std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
    std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
    std::cout << "*      *      *\n";
    std::cout << "What do you do?\n";
    std::cout << "\n";
    std::cout << "* Enter A if you ask the Gryphon next to you what the jurors are doing.\n";

    std::cout << "* Enter B is you sneak a tart\n";

    std::cout << "* Enter C if you sit and wait for the trial to begin.\n";
    std::cin >> choice1;
    
    for (int i = 2; i >= 0; i--) {
      if (choice1 == "A") {
        std::cout << "The Gryphon just decided to eat You.  Good luck the next time!!!\n";
        std::cout << "You have " << i << " attempts left!!!\n";
        std::cin >> choice1;
      }
      else if (choice1 == "C") {
        std::cout << "You will lose the trial.  The Queen never shows any mercy.  Good luck the next time!!!\n";
         std::cout << "You have " << i << " attempts left!!!\n";
        std::cin >> choice1;
      }
      else if (choice1 == "B") {
        std::cout << "There is a key to scape inside of the tart, You saved your life!!!\n";
        break;
      }
      else {
        std::cout << "Try to use capital letters to entre your option!!!\n";
        std::cout << "You have " << i << " attempts left!!!\n";
        std::cin >> choice1;
      }
      if (i == 1 && choice1 != "B") {
        std::cout << "You don't have any attempts left, you lost the game!!!\n";
        break;
      }
    }
}