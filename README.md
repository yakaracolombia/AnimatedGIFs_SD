fork yakarizado de https://github.com/prenticedavid/AnimatedGIFs_SD

# AnimatedGIFs_SD
Display GIFs on TFT screens from Flash, SD or SPIFFS 

GIFs require at least 32kB of SRAM.   So this example can only run on Zero, Due, ESP8266, ESP32, Teensy3.x, STM32x4xx ...

All targets can use SPI libraries e.g TFT_eSPI, Adafruit_ST7735, Adafruit_ILI9341, ...
Most targets can use MCUFRIEND_kbv (except ESP8266)

Most chips can store some sample GIFs in Flash
All targets can render unlimited number of GIFs from SD  Card.
ESP8266 and ESP32 can also store some samples with SPIFFS.  Enable with USE_SPIFFS in FileNameFunctions.h

Note that you need a current ESP32 for SPIFFS.   And ESP is a little fussy about SD Card type.

Set DEBUG to 0, 2, 3 in GifDecoderImpl.h  

GIF optimisation via PC or online is not that clever.   
They should minimise the display rectangle to only cover animation changes.
They should make a compromisde between contiguous run of pixels or multiple transparent pixels.

Many thanks to Craig A. Lindley and Louis Beaudoin (Pixelmatix) for their original work on small LED matrix.

he modificado los pines de conexion de pantalla para hacerla compatible con mis otros proyectos

![WEMOS FULL 1](https://user-images.githubusercontent.com/22075544/162288708-423066c5-3a7a-49df-9e68-abba32e27a41.jpg)

ademas de incluir una version portable de arduino con el FS para poder usar el PROGMEM como almacenamiento adicional

he incluido la libreria modificada de eTFT compatible con multiples drivers que se usaran en futuros videos

se recomiendo usar https://ezgif.com para convertir videos o comprimir otros gif

recordemos que la potencia no es tan alta asi que con gif muy grandes o que superes los 240 pixeles se puede experimentar ralentizaciones o bug de imagenes asi que sientanse en la libertar total de probar todas las optimizaciones y configuraciones de la pagina https://ezgif.com

en teoria podemos usar 2mb de almacenamiento en el ESP8266 pero yo personalmente consigo error al momento de que la carpeta data pese mas de 1.7mb asi que recomiendo no superar ese tamaño

se puede rotar la imagen buscanlo la linea  tft.setRotation(1); y cambiando el (1) por 2, 3, 4, 5 etc

he dejado dos variables a definir segun el tipo de pantalla en caso de color RGB invertido
