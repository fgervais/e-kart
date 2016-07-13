#include <Shell.h>
#include <Servo.h>

Servo esc;

uint8_t setSpeed(String parameters)
{
  Serial.print('\n');
  Serial.print("Hello from setSpeed()");
  Serial.print('\n');
  Serial.print("Parameters: ");
  Serial.print(parameters);

  esc.write(parameters.toInt());

  return 0;
}

void setup() {
  esc.attach(9);
}

void loop() {
  Command setSpeedCommand("setSpeed", setSpeed);
  
  Shell shell(115200);
  shell.add(&setSpeedCommand);
  shell.run();
}
