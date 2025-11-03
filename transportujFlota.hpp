#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) {
        return 0;
    }
    Stocznia stocznia;
     int  licznik        = 0;
      int total_zaglowce = 0;
     

        while (licznik < towar) {
            Statek* s2 = stocznia();
            licznik += s2->transportuj();
            if (dynamic_cast<Zaglowiec*>(s2) != nullptr) {
                total_zaglowce ++;
            }
            delete s2;
        }
        return total_zaglowce;
    }
