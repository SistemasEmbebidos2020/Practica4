# Practica4

- MCU es una variable donde se guarda el micro del Arduino que usaremos.
- La frecuencia del oscilador del Arduino Uno es de 16MHz, por eso se coloca ese valor. 
- Si se pone la mitad, 8MHz todo tiempo que declaremos se demorará el doble en ejecutar.
- Baudrate es la velocidad de programación del Arduino, no es la velocidad de transmisión de datos.
- Si no sabe donde está conectado el Arduino usar ls /dev/tty*
- Flash es para cargar en el Arduino, si no tiene uno conectado, debe comentar esa instrucción

# Ejecutar las siguientes actualizaciones en Raspbian
- sudo apt-get update
- sudo apt-get upgrade
- sudo apt-get install avr-libc gcc-avr avrdude
- sudo apt-get install build-essential
- sudo apt-get install git

# CLONE
- git status
- git clone https://github.com/SistemasEmbebidos2020/Practica4.git


Practica:
sudo git clone https://github.com/SistemasEmbebidos2020/Practica4
acceder a la carpeta : cd Practica4
acceder al archivo: sudo nano dcmotor.c 
para salir del editor: ctrl x
para ver en que puerto se encuentra conectado nuestro atmega: sudo ls /dev/tty*
para ver la configuración de nuestra comunicación:
sudo nano makefile
salir: ctrl x
para programar nuestro sistema embebidos:
sudo make FNAME=dcmotor
