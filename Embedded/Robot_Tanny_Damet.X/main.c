/* 
 * File:   main.c
 * Author: TP-EO-1
 *
 * Created on 16 novembre 2022, 10:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
/*
 * 
 */


    
int main (void){
/***************************************************************************************************/

//Initialisation de l?oscillateur
/****************************************************************************************************/

InitOscillator();

/****************************************************************************************************/

// Configuration des entr?es sorties

/****************************************************************************************************/

InitIO();
InitTimer23();
InitTimer1();
InitPWM();

PWMSetSpeed(25);

LED_BLANCHE = 1;
LED_BLEUE = 1;
LED_ORANGE = 1;

/****************************************************************************************************/

// Boucle Principale

/****************************************************************************************************/

while(1){
   // LED_BLANCHE = !LED_BLANCHE;
    // LED_BLEUE = !LED_BLEUE;
} 

// fin main
}
    
    
    
    
    
    
    
    
    
    
    
    



