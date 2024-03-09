#include <stdio.h>
#include <kipr/wombat.h>

int main() {
  // Move back until it reaches the rock heap.
  motor(0, 90);
  motor(1, 90);
  msleep(10000);

  // Turn 90 degrees.
  motor(1, -90);
  motor(0, 90);
  msleep(2534);

  // Head into rock heap.
  motor(0, -90);
  motor(1, -90);
  msleep(2000);

  // Deposit Rock.
  set_servo_position(0, 313);
  set_servo_position(1, -543);
  msleep(1000);
  
}
