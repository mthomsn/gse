# Proof of concept — not flight/GSE firmware

> **These sketches are early test code only.** They were written to prove out the basic concept for the GSE modules (wired RS-485 link over RJ45, remote servo actuation). They are **not** the GSE firmware and are not intended for use with propellants. Real firmware will be developed separately as the design matures (microcontroller choice, power, safety interlocks, protocol, etc. are all still open — see [../../notes.md](../../notes.md)).

## What was tested

| Sketch | Board | What it showed |
|---|---|---|
| `GSE_Sender/` | Arduino Uno | Button press → sends `'1'` / `'0'` over RS-485 (MAX485 + RJ45 breakout) |
| `GSE_Reciever/` | Arduino Uno | Receives `'1'` / `'0'` over RS-485 → servo to 90° / 0° |
| `servo-flow-test/` | Arduino Uno (PlatformIO) | Serial command `T` → opens servo valve for 5 s, for water mass-flow testing |

Result: two Arduinos communicated over an Ethernet cable and opened/closed a small servo.

## Known limitations (intentionally not addressed)

- No error checking, framing, acknowledgements or heartbeat on the link
- No fail-safe state if the cable is disconnected
- No arming / interlock logic
- Small hobby servo powered from the Arduino — not the 25 kg servo (up to 3.3 A) planned for the valve
- SoftwareSerial at 9600 baud
