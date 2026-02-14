#ifndef BLACKJACK_H
#define BLACKJACK_H
#include "ButtonManager.h"
#include "MenuManager.h"
#include "DisplayProxy.h"
#include "HAL.h"
#include <Arduino.h>

extern const unsigned char blackJackApp_frame_0_bits[] PROGMEM;

class BlackJackApp {
public:
    BlackJackApp(ButtonManager&);
    void begin();
    void end();
    void update();
    static void onButtonBackPressed(const ButtonEvent&);
    static BlackJackApp* instance;
private:
    ButtonManager& buttonManager;
    DisplayProxy& display;
    unsigned long lastFrameTime;
    int currentFrame;
};
extern BlackJackApp blackJackApp;
#endif