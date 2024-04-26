#ifndef _DLA_COLOR
#define _DLA_COLOR

#include <Arduino.h>

class newled{
    private:

    public:
        newled(int pinR, int pinG, int pinB);
        void rgb(int R, int G, int B);
        void id(int codeColor);
        void clear();
		void status(bool r, bool g, bool b);
        void teste();
        void shine(int shine);
        
};

#endif