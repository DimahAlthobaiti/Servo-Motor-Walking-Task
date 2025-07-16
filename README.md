# Servo Motor Walking Task – Arduino

This project consists of two main tasks using Arduino and Servo motors to simulate basic humanoid robot leg motion.

---

## Task 1: 4 Servo Sweep with Time Control

### Objective:
Control **4 servo motors** to perform a sweeping motion (0° → 180° → 0°) **for 2 seconds**, then stop and hold all servos at **90°** (neutral position).

### Setup:
- Servo motors connected to digital pins **9, 10, 11, 12**
- Arduino UNO or compatible board

### Arduino Code:

The code for Task 1 can be found in the file [`Servo motor code.ino`](./Servo motor code.ino).

It controls 4 servo motors to sweep for 2 seconds, then fix them at 90 degrees.

### Code Summary:
- Uses `millis()` for time-based control (2 seconds only)
- After 2 seconds, all servos are fixed at 90°
- Loop stops using `while(true);`

### Example Pin Mapping:
| Servo | Connected to Pin | Description       |
|-------|------------------|-------------------|
| servo1 | 9                | Right Hip         |
| servo2 | 10               | Right Knee        |
| servo3 | 11               | Left Hip          |
| servo4 | 12               | Left Knee         |

### Servo Motor Mapping and Wiring Diagram 

The diagram below shows the connection of 4 servo motors representing joints in a humanoid robot's legs.

<img width="1240" height="759" alt="Result2" src="https://github.com/user-attachments/assets/8d46779a-d0cb-4602-84fe-39a786c56bb5" />

---

## Task 2: Humanoid Walking Algorithm 

### Objective:
Simulate a basic walking motion of a biped robot using 4 servo motors: 2 for hips and 2 for knees.

### Walking Sequence with Angle Ranges:
```cpp
// Step 1: Lift Right Leg
kneeRight.write(50–70);

// Step 2: Swing Right Forward
hipRight.write(110–130);

// Step 3: Lower Right Leg
kneeRight.write(85–95);

// Step 4: Shift Weight to Right
hipLeft.write(60–80);

// Step 5: Lift Left Leg
kneeLeft.write(50–70);

// Step 6: Swing Left Forward
hipLeft.write(110–130);

// Step 7: Lower Left Leg
kneeLeft.write(85–95);

// Step 8: Shift Weight to Left
hipRight.write(60–80);

// Repeat steps 1–8
