![Index app](./doc/assets/img/wemos.jpg)

# Proyecto Sensado_ESP8266_DHT11
Sistema de Control de sensado de temperatura y humedad con una placa ESP8266 y un sensor DHT11

<br>

## Índice 📜

<details>
 <summary> Ver </summary>
 
 <br>
 
### Sección 1) Descripción, Tecnologías y Referencias

 - [1.0) Descripción del Proyecto.](#10-descripción-)
    - [1.0.0) Objetivos y Finalidad.](#100-objetivos-y-finalidad)
    - [1.0.1) Introducción.](#101-introducción)
    - [1.0.2) Hardware.](#102-hardware)
    - [1.0.3) Software.](#103-software)
    - [1.0.4) Conclusiones.](#143-conclusiones)
    - [1.0.5) F.O.D.A](#105-foda)
 - [1.1) Ejecución del Proyecto.](#11-ejecución-del-proyecto-)
 - [1.2) Configurar un proyecto serverless desde cero](#12-configurar-un-proyecto-serverless-desde-cero-)
 - [1.3) Tecnologías.](#13-tecnologías-)
 - [1.4) Referencias.](#14-referencias-)

<br>

</details>



<br>

## Sección 1) Descripción, Tecnologías y Dependencias 


### 1.0) Descripción [🔝](#índice-) 

### 1.0.0) Objetivos y Finalidad

<details>
  <summary>Ver</summary>
 
 <br>

 El propósito de este proyecto es la inclusión tecnológica por parte del personal que se desempeña en el sector de salud, específicamente en laboratorios. Como así también aumentar el sistema de medición y control en logística.
La motivación surgió en base a implementar algún sistema que nos permita tener una cómoda medición de rangos de temperatura y humedad sin tener que preocuparnos constantemente sobre el aparato del laboratorio, darles prioridad a otras tareas, agilizar tiempos y tener un mejor control sobre el mismo.
El destinatario del proyecto será el personal que se implemente en el área de salud, puntualmente en el sector descrito previamente
La funcionalidad del proyecto es a un bajo costo de inversión, una implementación de un punto de sensado de temperatura y humedad controlado de forma automática y remota. El personal del sector podrá hacer uso de este sistema de sensado mediante una aplicación móvil, el uso de la misma es descrita en este informe.
Las metodologías para el funcionamiento del dispositivo son:

* Creación y estructuración del código del dispositivo de censado (Wemos d1 esp8266).

* Descarga y configuración de la aplicación Blynk.

* Diseño, implementación y configuración de plantilla de la app.

* Puesta a prueba del dispositivo y aplicación.


<br>

</details>



### 1.0.1) Introducción

<details>
  <summary>Ver</summary>
 
 <br>

 Mediante el surgimiento de la necesidad de tener un control en un ambiente de trabajo se planteó la posibilidad de realizar un punto de censado 
de temperatura y humedad en un ambiente no controlado de forma automática por parte del personal, incorporando la capacidad tecnológica a un bajo costo y una inversión de control y seguridad más apropiada. La problemática se presenta a nivel general en la inversión de automatismos en el sector productivo, salud, etc.
y la poca inversión de formación del personal en cuanto a tecnología concierne. Por eso con el proyecto presentado se implementa no solo un automatismo electrónico sino también la inclusión tecnológica del personal a este de forma que la interacción sea directa por el mismo.

En la etapa inicial del proyecto se realizo el conexionado del sistema electrónico a implementar y el diseño de software que este precisaba.
	En la segunda etapa del proyecto se confecciono el entorno de desarrollo (ide: arduino), mediante el cual se realizará y armara el programa principal de la placa ESP8266(núcleo lógico del proyecto), además de la confección del ide se implementaron las librerías necesarias para el funcionamiento del mismo junto con el sensor de temperatura y humedad (DHT11) y la app móvil de uso.
	La tercera etapa consistió en el desarrollo del programa que implementa el ESP8266 y el diseño de plantilla de la aplicación Blynk



<br>

</details>



### 1.0.2) Hardware

<details>
  <summary>Ver</summary>
 
 <br>

![Index app](./doc/assets/img/diagrama_conexion.png)

#### Características técnicas del Wemos d1 mini ESP8266:

* Velocidad: 80MHz/160MHz
* Flash: 4M bytes
* Tensión funcionamiento: 3.3V
* Entradas y salidas digitales: 11, todos (salvo el D0) con PWM, interrupciones, e I2C
* Entradas analógicas: 1 (Max. 3.2V)
* Conector Micro-USB.

#### Características técnicas del sensor DHT11:

* Alimentación: 3Vdc ≤ Vcc ≤ 5Vdc
* Rango de medición de temperatura: 0 a 50 °C
* Precisión de medición de temperatura: ±2.0 °C.
* Resolución Temperatura: 0.1°C
* Rango de medición de humedad: 20% a 90% RH.
* Precisión de medición de humedad: 4% RH.
* Resolución Humedad: 1% RH
* Tiempo de censado: 1 seg.



<br>

</details>










| Elementos | 
| ------------- | 
| 1 ESP8266 Wemos D1. |
| 1 Sensor de temperatura/humedad dht11 |


| Driver| Funcion |
| ------------- | ------------- |
| http://www.wch.cn/download/CH341SER_EXE.html | Reconocimiento puerto serial |


 Librerias principales| Funcion |
| ------------- | ------------- |
| https://github.com/adafruit/DHT-sensor-library | Sensor de Temperatura/Humedad |
| https://github.com/esp8266/Arduino  | Modulo wifi esp8266   |


## Software
- https://www.arduino.cc/
- https://blynk.io/
- https://fritzing.org/download/

