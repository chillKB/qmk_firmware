# Flip 6p

![Flip 6p](https://imgur.com/vWZ0y4x.png)

*A 60% with flippable and mirrorable numpad, allowing for traditional or southpaw layouts. Removable blockers for WKL and HHKB layouts are also supported.*

* Keyboard Maintainer: [chillKB](https://github.com/chillKB)
* Hardware Supported: *Daring Run Flip 6p **wired-only** PCB* (NOT tri-mode wireless)
* Hardware Availability: *[Daring Run](https://d-r.works/collections/flip-6p)*

Make example for this keyboard (after setting up your build environment):

    make daringrun/flip_6p:default

Flashing example for this keyboard:

    make daringrun/flip_6p:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key of the main 60% cluster (usually Escape) and plug in the keyboard
* **Physical reset pads**: Remove the caps lock keycap and briefly short the two small circular pads to the right of the switch
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

Once you enter the bootloader, the keyboard will show up as a USB storage device on your computer. You can drag and drop a `.uf2` firmware file to flash it, or use the flash command above.
