#define MENU_H
#include <string>
using namespace std;
// the menu is responsible for handling inputs from the player
// and displaying outputs from the Characters and Environments in the game
namespace menu_namespace {
  class Menu {
      private:
        const string WELCOME_MESSAGE = "\nWelcome to Mount Pleasant where everyday is exactly the same!\n";
        const string HELP = "If you need to see this message again, type \'H\' for help!\n";
        const string HELP_MENU = "\nInteract with the world by entering the inputs on the screen.\n \
        You can type \'Q\' to Quit the game. \n \
        You can type \'M\' to view the Map. \n \
        You can type \'I\' to view the Inventory.\n";
        const string WHAT_DO = "What do you do:";
        const int MAX_INPUT = 1;
        string userInput;

      
      public:
        Menu();
        void displayHelpMenu();
        void displayMenuOptions(map <char, string> interaction);
        string getUserInput();
  };
}