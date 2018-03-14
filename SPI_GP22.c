/** This code will be used to communicate with a GP-22 TOF device.   
      @Author: Lorin Achey

         */

/* General Purpose Libs */
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<stdint.h>
#include<linux/spi/spidev.h>

/* Custom Libs */
#include "SPI.h"

#define SPI_PATH "/dev/spidev1.0"  //Not sure that SPI_PATH is necessary...

int main(){
   
   close(fd);               //close the file
   return 0;
}