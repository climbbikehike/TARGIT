/*
* A Simple GPIO application
* Written by Derek Molloy for the book "Exploring BeagleBone: Tools and
* Techniques for Building with Embedded Linux" by John Wiley & Sons, 2014
* ISBN 9781118935125. Please see the file README.md in the repository root
* directory for copyright and GNU GPLv3 license information.            */

#include<iostream>
#include<unistd.h> //for usleep
#include"GPIO.h"
using namespace exploringBB;
using namespace std;

int main(){
   GPIO outGPIO(49), inGPIO(115);

   // Basic Output - Flash the LED 10 times, once per second
   outGPIO.setDirection(OUTPUT);

   // Input pin is connected to the SiPM, sensL detector.
   // Our goal is to print to the console, HIGH/LOW, based on voltage returned from detector.
   inGPIO.setDirection(INPUT);

   for (int i=0; i<30; i++){
      outGPIO.setValue(HIGH);
      cout << "The value from sensL is: " << inGPIO.getValue() << endl;
      usleep(100000);  //usleep takes in an input in microseconds, so we need 100000 microseconds for                       //100 milliseconds.
      outGPIO.setValue(LOW);
      cout << "The value from sensL is: " << inGPIO.getValue() << endl;
      usleep(100000);
   }

   cout << "END TEST" << endl;

   return 0;
}
~           