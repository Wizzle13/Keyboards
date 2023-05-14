# Scotto9

A 9 key handwired macropad.

![Scotto9](https://user-images.githubusercontent.com/8194147/191654573-d30a7cf3-2570-4f49-9b5f-de466acb5bc8.jpg)  
![Matrix](https://user-images.githubusercontent.com/8194147/191866156-65d453ec-7105-46d8-a706-a0e755f261ae.jpg)
![Controller](https://user-images.githubusercontent.com/8194147/191866177-8041dad9-07c6-42c3-b8f1-4770ef4a7b5e.jpg)

# Parts

-   1x - [Arduino Pro Micro (Atmega32U4)](https://amzn.to/3LwgAUq)
-   9x - [1N4148 Diode](https://amzn.to/3DMbQZ5)
-   4x - [8mm M2 Spacer](https://amzn.to/3r1xdxO)
-   8x - [M2x6mm Screw](https://amzn.to/3r1xdxO)
-   9x - MX Switches

# Pins

Top left to right. Pins refer to the number on the Pro Micro, for more info see [info.json](QMK/info.json).

-   **Rows** - 15, 14, 16
-   **Columns** - 4, 5, 6

# Case

The controller is simply hot glued into the bottom of the case.

-   [Plate](Case/Scotto9%20-%20Plate.stl)
-   [Case](Case/Scotto9%20-%20Case.stl)

# Flashing

1. [Install QMK locally](https://github.com/qmk/qmk_firmware)
2. Make changes to the keymap if required.
3. Run `qmk flash -kb handwired/jscotto/scotto9 -km default -c`.

# License

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/nc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/sa.svg?ref=chooser-v1"></a></p>

<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/joe-scotto/keyboards/tree/main/Scotto9">Scotto9</a> by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://github.com/joe-scotto">Joe Scotto</a> is licensed under <a href="http://creativecommons.org/licenses/by-nc-sa/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">CC BY-NC-SA 4.0
