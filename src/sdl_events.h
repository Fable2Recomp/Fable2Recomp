#pragma once

#include <SDL3/SDL.h>
#include <ui/game_window.h>

// Custom user event ID
#define SDL_USER_EVILHERO (SDL_EVENT_USER + 1)

// Simulate a resize event (optional use)
inline void SDL_ResizeEvent(SDL_Window* pWindow, int width, int height)
{
    SDL_Event event{};
    event.type = SDL_EVENT_WINDOW_RESIZED;
    event.window.windowID = SDL_GetWindowID(pWindow);
    event.window.data1 = width;
    event.window.data2 = height;

    SDL_PushEvent(&event);
}

// Simulate a move event (optional use)
inline void SDL_MoveEvent(SDL_Window* pWindow, int x, int y)
{
    SDL_Event event{};
    event.type = SDL_EVENT_WINDOW_MOVED;
    event.window.windowID = SDL_GetWindowID(pWindow);
    event.window.data1 = x;
    event.window.data2 = y;

    SDL_PushEvent(&event);
}

// Custom evil Hero toggle event
inline void SDL_User_EvilHero(bool isEvil)
{
    SDL_Event event{};
    event.type = SDL_USER_EVILHERO;
    event.user.windowID = SDL_GetWindowID(GameWindow::s_pWindow);
    event.user.code = isEvil ? 1 : 0;

    SDL_PushEvent(&event);
}

