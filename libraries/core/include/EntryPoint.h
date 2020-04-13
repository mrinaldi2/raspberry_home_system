//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_ENTRY_POINT_H
#define RASPBERRYHOME_ENTRY_POINT_H

extern RazHome::RazCore* RazHome::CreateApplication();

int main(int argc, char ** argv) {
    auto entryPoint = RazHome::CreateApplication();
    entryPoint->run();
    delete entryPoint;
}

#endif //RASPBERRYHOME_ENTRY_POINT_H

