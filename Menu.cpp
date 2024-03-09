#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include "Menu.h"

using namespace N;
using namespace std;


// the menu is responsible for handling inputs from the player
// and displaying outputs from the Characters and Environments in the game

  
  
  // display welcome messages on build
  Menu::Menu() {
    std::cout << WELCOME_MESSAGE << endl;
    std::cout << HELP << endl;
  };

  void Menu::displayHelpMenu() {
    cout << HELP;
    cout << HELP << endl;
    cout << "are you working now?";
  }

  // unpack the interaction options and text
  // void Menu::displayMenuOptions(map <char, string> interaction) {
  //   // cycle each option in the interaction
  //   for_each(interaction.begin(), interaction.end(), [](const auto& pair){
  //     cout << "[" << pair.first << "]- " << pair.second ;
  //   });