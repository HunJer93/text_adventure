#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include "Menu.h"

using namespace menu_namespace;
using namespace std;


// the menu is responsible for handling inputs from the player
// and displaying outputs from the Characters and Environments in the game

  // display welcome messages on build
  Menu::Menu() {
    cout << WELCOME_MESSAGE;
    cout << HELP_MENU;
    cout << HELP << endl;
  };

  void Menu::displayHelpMenu() {
    cout << HELP_MENU << endl;
    cout << HELP << endl;
    
  }

  // unpack the interaction options and text
  void Menu::displayMenuOptions(map <char, string> interaction) {
    // cycle each option in the interaction
    for_each(interaction.begin(), interaction.end(), [](const auto& pair){
      cout << "[" << pair.first << "]- " << pair.second << endl;
    });
  };

  // get the user input
  string Menu::getUserInput() {
    cout << WHAT_DO << endl;
    getline(cin, userInput);

    cout << userInput;

    return userInput;
  }