# QMK commands

## QMK MSYS
Used to create new keyboard files.

### creating new keyboard

* Open QMK MSYS
* type qmk setup (if first time running)
* type qmk new-keyboard
* enter Keyboard name
* Enter GitHub name
* enter Real Name
* select keyboard layout (52 for custom)
* select chip controller
* edit keyboard in VS Code

### compile kewboard

* qmk compile -kb [keyboard code] -km default
* file should be available in root


## QMK Toolbox
Used to load files on to board

* Open QMK Toolbox
* Open local .hex file
* Select processor Chip 
    * ATmega32U4 - Ardino Pro Mini
* 
