#include <iostream>
#include <string>
#include "change.h"

using namespace std;

int main() {
    string input;
    cin >> input;
    cout << "Result: " << change_letter(input) << std::endl;
    return 0;
}