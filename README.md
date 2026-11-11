# GSE — Ground Support Equipment

Ground support equipment for a bipropellant (N2O / IPA) liquid rocket motor: remote N2O loading and remote ignition.

> **Status: early development.** This repo is a working log of an in-progress design. Nothing here is finished or approved for use with propellants.

See [notes.md](notes.md) for current status, design thinking and next steps.

## Layout

| Path | What |
|---|---|
| `notes.md` | Working notes: situation, MVP, next steps, open questions |
| `gse-1.png` | Diagram |
| `GSE/` | KiCad project (schematic + PCB) |
| `firmware/proof-of-concept/` | **Test code only.** Arduino sketches used to prove the concept (RS-485 sender/receiver, servo flow test). Not the GSE firmware |

## Firmware

There is no GSE firmware yet. The sketches in [`firmware/proof-of-concept/`](firmware/proof-of-concept/) were quick tests to check that the wired RS-485 link and remote servo control work. They will be replaced as development continues. See that folder's README for what was tested and what is deliberately missing.
