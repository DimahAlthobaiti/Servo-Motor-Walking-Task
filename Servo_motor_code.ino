#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;
unsigned long startTime;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

  startTime = millis();  // record the time
}

void loop() {
  if (millis() - startTime <= 2000) {
    for (pos = 0; pos <= 180; pos += 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }

    for (pos = 180; pos >= 0; pos -= 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }

  } else {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);

    // stop looping
    while (true);  
  }
}