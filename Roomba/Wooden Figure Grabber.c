#include <stdio.h>
#include <kipr/wombat.h>

int main() {
  create_connect();

  // Grab the wooden figures
  create_drive_straight(1000);

  // Close the bulldozer
  motor(1, -90);
  msleep(1252);

  // Push the rock
  create_drive_straight(3200);

  // Spin the roomba CCW
  create_spin_CCW(2110);

  // Move forward a bit
  create_drive_straight(500);

  // Spin the roomba CW
  create_spin_CW(1055);

  // Move forward a bit
  create_drive_straight(500);

  // Open the bulldozer
  motor(1, 90);
  msleep(1252);

  // Drive back
  create_drive_straight(-500);
}
