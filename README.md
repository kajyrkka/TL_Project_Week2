# TL_Project_Week2
Telecommunications Project Week 2 Assignments

# WEEK 2 tasks are as follows:

## Task 1 check first Kari's video what kind of functionality should be achieved => video link to be added

## Task 2 Compile and flash WorkingADCSolution to nrf5340dk and add accelerator sensor

Before actually connecting accelerator sensor verify that ADC works correctly (i.e feed 3.3V to each pins defined below).
Use pins:
p0.03 for x acceleration
p0.04 for y acceleration
p0.05 for z acceleration

When you have connected accelartor sensor verify that it gives meaningful results before continuing to task 3.

## Task 3 Learn how to make a Bluetooth Low Energy connection from nrf5340dk and how to send 3 integer values over BLE.

Register yourself at https://academy.nordicsemi.com/

Continue Bluetoot Low Energy Fundamentals course were we left at tietoliikenteen perusteet course. I.e. continue from 
Lesson 4 Data Exchange in Bluetooth Low Energy https://academy.nordicsemi.com/lessons/lesson-4-bluetooth-le-data-exchange/

Complete Lesson 4 exercise 2. You should now be able to send one integer value over Bluetooth to your mobile phone.
You must install nrfConnect application to your phone to read messages send from nrf5340dk.

Modify now your code in order to send 3 integer values instead of one over Bluetooth. And verify from your mobile that this
actually happens.

## Task 4 Integrate bluetooth transmission and Task2 in order to send x,y,z accerator values and info about sensor orientation

Sensor orientation is reported as:
X-axis up = 0
X-axis down = 1

Y-axis up = 2
Y-axis down = 3

Z-axis up = 4
Z-axis down 5
Sensor orientation value is selected with nrf5340dk pushButtons Button 0 is used to select orientation
and Button 1 is used to start a new measurement which measures 100 x,y,z + orientation values and sends those over Bluetooth.
