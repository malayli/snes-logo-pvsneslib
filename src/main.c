/*---------------------------------------------------------------------------------


    "Made with PVSnesLib" Logo for SNES Projects
    Author: digifox


---------------------------------------------------------------------------------*/
#include <snes.h>
#include "logo.h"

int main(void) {
    // Initialize sound engine (take some time)
    spcBoot();

    // Initialize SNES
    consoleInit();

    dmaClearVram();

    initPVSnesLibLogo();

    //setFadeEffect(FADE_IN);
    setFadeEffectEx(FADE_IN, 8);
    WaitForVBlank();

    while (1) {
        if (updatePVSnesLibLogo() == 1) {
            // The logo animation is complete
            // Paste your game code here
            // consoleNocashMessage("Start your game!");
        }

        // Wait for vblank
        WaitForVBlank();
    }
    return 0;
}
