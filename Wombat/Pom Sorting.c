#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
  while(0 == 0) {

  // Align itself with the black line
  int stop;
   if(stop <= 1000)
      if(analog(1) >= 3900) {
        motor(0, -90);
        motor(1, 70);

        stop = stop + 1;
      } else {
        motor(0, 70);
        motor(1, -90);

        stop = stop + 1;
      }

    //Stop when it sees the poms
    if(analog(0) >= 2100) {
      motor(0, -40);
      motor(1, -40);
    }

    // sort poms by closing arms
    enable_servos();
    set_servo_position(0, 680);
    set_servo_position(1, -213);
    msleep(1000);

    //Stop when it sees the poms
    if(analog(0) >= 2100) {
      motor(0, -40);
      motor(1, -40);
    }

    // sort poms by opening arms
    set_servo_position(0, 313);
    set_servo_position(1, -543);
    msleep(1000);
  }

    //Stop when it sees the rock
    if(analog(0) >= 2100) {
      motor(0, -40);
      motor(1, -40);
    }

    // grab the rock
    set_servo_position(0, 680);
    set_servo_position(1, -213);
    msleep(1000);
  }
  
  return 0;
}
