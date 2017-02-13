# Clases Primaria Tech

# Clases de robótica para primaria

Trabajamos con niños de 8 años, pero con experiencia previa en programación y algo de robótica (Lego)

## Introducción

Les presentamos algunos componentes (servos, sensores siguelíneas y leds) que todos identifican y una placa de Arduino que reconocen incluso alguno indica los tipos de entradas/salidas

Hablamos de diseño 3D y de programación

## Clase 1

Programación con bitbloq

Encuentran los bloques sin dificultad

Entienden los bloques de control (incluso los bucles)

Se muestran el concepto de variable, presentando los tipos y el ámbito (local/global)

### Proyectos:
* Semáforo sencillo
* Semáforo con intermitencias

## Clase 2

Introducimos el concepto de entrada analógica

Problemas por no haber etiquetado bien las entradas/cables

Hacen cálculos mentales para ver la duración/retardo

### Proyectos
* Semáforo con duración regulada por potenciómetro
* Semáforo con parpadeos regulados por potenciómetro

## Clase 3

Vemos el problema de usar esperas

Presentamos el sensor siguelíneas y los mueve muy rápido para ver la zona en la que detecta el borde de la mesa

### Proyectos

* Semáforo con pulsador

## Clase 4

Utilizamos sensores de proximidad Infrarrojos:
* Sensor digital
* Sensor analógico

TODO: Imagen del sensor moviendose rápido

### Proyectos

* Detección del suelo
* Hucha

## Clase 5

Sensor analógico de proximidad infrarrojo :
* Calibración de colores



1ª versión del robot (sólo con componentes del kit)

![robot0](./images/robot0.jpg)
## Clase 6

Objetivo: vamos a dibujar una paisaje con montañas, pero que no sea siempre igual. Para ellos usamores **números aleatorios**

Vamos a hacer un viaje por la tierra, y usaremos 2 leds: uno azul para representar el mar y otro verde para la tierra. En el visor de gráficos veremos la forma de nuestra montaña

![soft1](./images/Aleatorio_soft1.png)
![soft2](./images/Aleatorio_soft2.png)


[Proyecto](./proyectos/montaña_prueba_1_-------------------------------------------------------------------------------------------------.json) (montaña_prueba_1_-------------------------------------------------------------------------------------------------)

## Clase 7


Robot

![robot hardware](./images/Robot1_hardware.png)

![robot software básico](./images/robot1_programa.png)


Montamos un robot con materiales reciclados (cajas, clips y gomas elásticas)

* Controlamos el robot a distancia con el potenciometro:
  * <100 Hacia atrás
  * >900 Hacia adelante
  * En otro caso se para

¿Podemos añadir más opciones?

![robot gomas](./images/robot_clip.jpg)

![robot gomas](./images/robot_gomas.jpg)

![robot_mando](./images/robot_mando.jpg)

![robot](./images/robot1.jpg)

[video](./images/robot.mp4)

## Clase 8

Hacer un programa reutilizable con funciones

[Proyecto](./proyectos/FuNcIoNeS############################################################################.json) (FuNcIoNeS############################################################################)

![Funciones](./images/Funciones.png)

Terminado el montaje del robot

![RobotFinal](./images/RobotFinal.jpg)

## Clase 9

* Objetivo: Robot que no se cae de la mesa

¿Cómo funcionan los Sensores IR?

Ejemplo muy sencillo para ver los valores:

![Test](./images/Test_Sensor_IR.png)

![Test soft](./images/Test_Sensor_IR_soft.png)

Resultado: El sensor da 1 cuando tiene suelo

Extra: ¿Cómo funcionan los Infrarrojos de un mando a distancia? ¿Qué envían? ¿Cómo no se mezclan la señal de los mandos?

## Reto: Siguelíneas
