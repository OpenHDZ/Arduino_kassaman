//***************************************************************************************************************
//
// Programme : mindjibalina
// author    : Open Hardware Algerie
// E-mail    : openhardwaredz@gmail.com
//*************************************************************************************************************** 

#include <Playtune.h>

const unsigned char PROGMEM score [] = {
0,59, 0x90,76, 0,237, 0x80, 0,59, 0x90,74, 0,178, 0x90,72, 1,41, 0x80, 0,59, 0x90,74, 0,178, 0x80, 0,59, 
0x90,76, 0,237, 0x80, 0,59, 0x90,77, 0,178, 0x90,79, 1,100, 0x80, 0,59, 0x90,77, 0,178, 0x80, 0,59, 0x90,76, 
1,100, 0x80, 0,59, 0x90,74, 1,219, 0x80, 0,59, 0x90,72, 1,100, 0x91,76, 0,118, 0x80, 0,59, 0x81, 0,59, 
0x90,74, 0,237, 0x80, 0,59, 0x90,72, 0,118, 0x80, 0,59, 0x90,71, 4,46, 0x91,74, 0,118, 0x80, 0,59, 0x81, 
0,59, 0x90,72, 0,178, 0x80, 0,59, 0x90,71, 0,178, 0x90,69, 6,129, 0x80, 1,160, 0x90,74, 1,160, 0x80, 0,118, 
0x90,74, 0,237, 0x80, 0,59, 0x90,72, 0,178, 0x80, 0,59, 0x90,74, 1,160, 0x91,76, 0,59, 0x80, 1,160, 0x90,72, 
0,178, 0x81, 2,82, 0x80, 0,59, 0x90,71, 0,118, 0x80, 0,59, 0x90,72, 2,201, 0x80, 0,178, 0x90,74, 1,41, 
0x90,72, 0,178, 0x80, 0,59, 0x90,71, 0,237, 0x80, 0,59, 0x90,69, 0,178, 0x90,71, 1,219, 0x80, 0,59, 0x90,72, 
1,160, 0x91,69, 1,41, 0x80, 2,23, 0x81, 0,118, 0x90,69, 3,183, 0x91,74, 0,178, 0x80, 2,82, 0x81, 0,59, 
0x90,72, 0,178, 0x90,74, 1,219, 0x80, 0,59, 0x90,76, 1,219, 0x91,72, 0,118, 0x80, 2,82, 0x81, 0,59, 0x90,71, 
0,118, 0x80, 0,59, 0x90,72, 3,124, 0x90,74, 1,100, 0x80, 0,59, 0x90,72, 0,118, 0x80, 0,59, 0x90,71, 1,41, 
0x90,69, 0,178, 0x90,71, 1,219, 0x80, 0,59, 0x90,72, 2,23, 0x91,69, 0,178, 0x80, 2,82, 0x90,68, 0x81, 0,59, 
0x80, 0,59, 0x90,69, 4,225, 0x80, 0,118, 0x90,69, 1,160, 0x91,76, 0,118, 0x80, 1,100, 0x81, 0,59, 0x90,77, 
1,217, 0x80, 0,61, 0x90,76, 2,201, 0x90,74, 0,237, 0x90,72, 3,5, 0x80, 0,118, 0x90,72, 1,160, 0x80, 0,59, 
0x90,71, 1,41, 0x91,74, 0,59, 0x80, 0,59, 0x81, 0,118, 0x90,72, 1,100, 0x80, 0,59, 0x90,71, 1,219, 0x80, 
0,59, 0x90,69, 1,160, 0x80, 0xf0};

Playtune pt;

void setup() {
  // put your setup code here, to run once:

    pt.tune_initchan (4);
    pt.tune_initchan (9);

}

void loop() {
  // put your main code here, to run repeatedly:

    pt.tune_playscore(score);
    while (pt.tune_playing);
    pt.tune_delay(1000);
}
