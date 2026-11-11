# GSE — Ground Support Equipment

Ground support equipment for a bipropellant (N2O / IPA) liquid rocket motor: remote N2O loading and remote ignition.

See [notes.md](notes.md) for current status, design thinking and next steps.

## Layout

| Path | What |
|---|---|
| `notes.md` | Working notes: situation, MVP, next steps, open questions |
| `gse-1.png` | Diagram |
| `GSE/` | KiCad project (schematic + PCB) |
| `firmware/servo-flow-test/` | PlatformIO sketch (Arduino Uno): opens a servo valve for 5 s on serial command `T`, for mass-flow testing |

## Firmware

Built with [PlatformIO](https://platformio.org/):

```bash
cd firmware/servo-flow-test
pio run -t upload
pio device monitor
```
