#include <iostream>
using namespace std;

#include "SDL.h"
 
int main(int argc, char**argv) {
    cout << "Built" << endl;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow(
       "SDL2Test",
       SDL_WINDOWPOS_UNDEFINED,
       SDL_WINDOWPOS_UNDEFINED,
       640,
       480,
       0
    );

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN);
    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();
}