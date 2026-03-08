# line-follower-robot

## Overview

This project implements a **Line Follower Robot** using an **Arduino Nano**, **IR sensors**, and an **L298N motor driver**.
The robot detects a black line on a white surface and automatically adjusts its movement to stay on the path.

## Hardware Components

* Arduino Nano
* L298N Motor Driver
* IR Sensor Modules (2)
* DC Gear Motors (2)
* 18650 Li-ion Batteries
* Robot Chassis
* Jumper Wires

## Robot Image

![linefollower bot](https://github.com/user-attachments/assets/a891557d-d59c-4b79-9da8-652fc84036d0)


## Working Principle

The robot uses **IR sensors** to detect the contrast between a black line and a white surface.

* If both sensors detect white → Robot moves forward
* If left sensor detects black → Robot turns left
* If right sensor detects black → Robot turns right
* If both detect black → Robot stops

The Arduino processes the sensor signals and controls motor movement through the **L298N motor driver**.

## Pin Configuration

### Arduino Nano → L298N

| Arduino | L298N |
| ------- | ----- |
| D2      | IN1   |
| D3      | IN2   |
| D4      | IN3   |
| D5      | IN4   |
| D9      | ENA   |
| D10     | ENB   |

### IR Sensors → Arduino

| Sensor          | Arduino Pin |
| --------------- | ----------- |
| Left IR Sensor  | A1          |
| Right IR Sensor | A0          |

### Motors

| Motor       | L298N      |
| ----------- | ---------- |
| Left Motor  | OUT1, OUT2 |
| Right Motor | OUT3, OUT4 |

## Applications

* Industrial automation
* Warehouse robots
* Autonomous vehicles
* Robotics learning projects

## Future Improvements

* Implement PID control for smoother tracking
* Add obstacle detection
* Increase number of sensors for better accuracy

## Author

Electrical and Electronics Engineering Student
Interested in Embedded Systems and Robotics
