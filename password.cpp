#include <iostream>
#include <string>
#include "password.h"

using namespace std;

Password::Password(string password) {
    this->password = password;
}

void Password::setPassword(string password) {
    this->password = password;
}

string Password::getPassword() {
    return password;
}

bool Password::isStrong() {
    bool hasLower = false, hasUpper = false, hasDigit = false;
    for (char c : password) {
        if (islower(c)) {
            hasLower = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        }
    }
    return hasLower && hasUpper && hasDigit && password.length() >= 8;
}

