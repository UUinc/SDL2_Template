#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

using namespace std;

class RenderWindow
{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;

public:
    RenderWindow(const char *p_title, int p_w, int p_h);
    SDL_Texture *LoadTexture(const char *p_filePath);
    void CleanUp();
    void Clear();
    void Render(SDL_Texture *p_tex);
    void Display();
};