#include "change.h"

string change_letter(const string to_change){
    string new_string = "";
    for (int i = 0; i < to_change.length(); i++){
        char letter = to_change[i];
        if (letter == 'a'){
            new_string = new_string + "b";
        }
        else if (letter == 'b'){
            new_string = new_string + "a";
        }
        else{
            new_string = new_string + letter;
        }
    }
    return new_string;
}
