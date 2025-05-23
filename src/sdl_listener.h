#pragma once

#include <SDL3/SDL.h> // SDL3 include
#include <vector>

// Interface for objects that want to listen to SDL events
class ISDLEventListener
{
public:
    virtual ~ISDLEventListener() = default;
    virtual bool OnSDLEvent(SDL_Event* event) = 0;
};

// Global accessor for the listener registry
extern std::vector<ISDLEventListener*>& GetEventListeners();

// Base class for easy registration of an event listener
class SDLEventListener : public ISDLEventListener
{
public:
    SDLEventListener()
    {
        GetEventListeners().emplace_back(this);
    }

    // Override to handle SDL events in your subclass
    bool OnSDLEvent(SDL_Event* event) override { return false; }
};

