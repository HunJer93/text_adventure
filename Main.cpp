#include <iostream>
#include <map>
#include "Menu.h"

using namespace N;
using namespace std;

int main() {

    Menu mainMenu;

    std::map<char, string> testInteraction = {
        {'A', "This is the first option"},
        {'B', "This is the second option!"},
        {'C', "Look at that, a third option!"},
        {'D', "Could there be more options???"}
    };

    
    
    // test menu interaction
    mainMenu.displayHelpMenu();
    return 0;
}