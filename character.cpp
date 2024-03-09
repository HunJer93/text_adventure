#include <iostream>
#include <map>
using namespace std;
// the Character class is the highest parent for characters with dialog

class Character {
    protected:
      string name;
      map<char, string> dialog = {
        {'A', "This is the first option"},
        {'B', "This is the second option!"},
        {'C', "Look at that, a third option!"},
        {'D', "Could there be more options???"}
    };
};