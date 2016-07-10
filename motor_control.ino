#include <Shell.h>

uint8_t setSpeed(String parameters)
{
  Serial.print('\n');
  Serial.print("Hello from setSpeed()");
  Serial.print('\n');
  Serial.print("Parameters: ");
  Serial.print(parameters);
  return 0;
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  Command setSpeedCommand("setSpeed", setSpeed);
  
  Shell shell(115200);
  shell.add(&setSpeedCommand);
  shell.run();
}
