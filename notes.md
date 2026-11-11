# GSE Notes

## Situation
Bi propellent liquid rocket motor.

1. We need to load our oxidizer (N2O) remotely.
2. We need to start motor remotely

## Solutions
1. Rules state we can use a remote connection if approved, otherwise must be wired via RJ45
2. Onboard powered electronics
3. Powered teather

I am starting the solution with a wired connection via RJ45 because that will be allowed no matter what.

I am focusing on loading sequence first. Controlling a single servo that allows N2O to enter the motor. 

## current mvp:

**components**
- arduino(looking to change this to an esp32 or stm32 or arduino nano)
- rj45 breakout board
- max485 rs transmitter

i successfully connected two ardunios over an ethernet cable, and was able to control a single small servo open and close

## next steps
i have a few directions i can go next. 
- change out microcontrollers
- look at power supply/pwm for larger servo
- change button/switch control
- create schematic
- look at ken's power supply that he told me about
    - looking at the servos we are using (25kg) their max current is 3.3A

## pending
i have ordered:
- potentiometer
- pogo connector
- sx1262 lora module
- 915mHz antenna


## thoughts
- we will probably have to design a pcb for onboard controls.
- what if we have the power supply for the servos kept off the rocket?
    - we could potentially have the power supply for the servos connected via a pogo connector
    - if we want to have the onboard servo still mesasuring data then we could have an onboard battery that just powers the microcontroller and any sensors we might want
    - also might be redundent/just extra weight to have a battery on board, once the motor starts there is nothing we can do, so may as well reduce weight?
