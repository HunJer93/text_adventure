#define MENU_H
#include <string>
using namespace std;
// the menu is responsible for handling inputs from the player
// and displaying outputs from the Characters and Environments in the game
namespace N {
  class Menu {
      private:
        const string WELCOME_MESSAGE = "Welcome to Mount Pleasant where everyday is exactly the same!\n";
        const string HELP = "If you need help, type H";
        const string HELP_MENU = "Interact with the world by entering the inputs on the screen.\
        You can type \'Q\' to Quit the game. \
        You can type \'M\' to view the Map. \
        You can type \'I\' to view the Inventory.";
        char userInput;

      
      public:
        Menu();
        void displayHelpMenu();
        // void displayMenuOptions(map <char, string> interaction);

  };
}