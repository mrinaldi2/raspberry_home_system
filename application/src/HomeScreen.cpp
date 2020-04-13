#include <iostream>
#include "Core.h"
#include "HomeScreen.h"
using namespace std;

HomeScreen::HomeScreen() {

}

HomeScreen::~HomeScreen() {

}

void HomeScreen::render() {
    cout << "Hello I am rendering" << endl;
}

RazHome::RazCore* RazHome::CreateApplication() {
    return new HomeScreen();
}