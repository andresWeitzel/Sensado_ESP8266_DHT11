//SENSADO DE TEMPERATURA Y HUMEDAD EN LABORATORIO
            
#define BLYNK_PRINT Serial // Comente esto para desactivar las impresiones
#include <SPI.h>;
#include <ESP8266WiFi.h>;
#include <BlynkSimpleEsp8266.h>;
#include <SimpleTimer.h>;
#include <DHT.h>;

// Deberías obtener el token de autenticación en la aplicación Blynk.
// Vaya a Configuración del proyecto (icono de tuerca).
char auth[] = "_kc9BxuBX9RZHGFAk0TaZ59IT66TAdy1";

// Sus credenciales de WiFi.
// Establezca la contraseña en "" para redes abiertas.
char ssid[] = "xx";
char pass[] = "xx";


#define DHTPIN 2 // Pin del sensor

// ¡Descomenta el tipo que estés usando!
#define DHTTYPE DHT11 // DHT 11
//#define DHTTYPE DHT22 // DHT 22, AM2302, AM2321
//#define DHTTYPE DHT21 // DHT 21, AM2301

//Configuramos el objeto creado del sensor
DHT dht(DHTPIN, DHTTYPE);

//Instanciamos el Timer
SimpleTimer timer;

//Usaremos el digital de la app v9 para la lectura del led aviso
WidgetLED led1(V9);

//Crearemos una funcion para el destello del led
void advertenciaLed()
{
  Serial.print("Uptime (s): ");
    Serial.println(millis() / 1000);

  if (led1.getValue()) {
    led1.off();
    Serial.println("LED on V9: off");
  } else {
    led1.on();
    Serial.println("LED on V9: on");
  }
  
}

// Esta función envía el tiempo de actividad de Arduino cada segundo a Virtual Pin (5, 6, 7 & amp; amp; amp; amp; amp; amp; 8).
// En la aplicación, la frecuencia de lectura de Widget debe establecerse en PUSH. Esto significa
// que defina con qué frecuencia enviar datos a la aplicación Blynk.
void sendSensor()
{
 float h = dht.readHumidity();
 float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit

 if (isnan(h) || isnan(t)) {
 Serial.println("Failed to read from DHT sensor!");
 return;
 }
 // Puedes enviar cualquier valor en cualquier momento.
 // No envíes más de 10 valores por segundo.
 Blynk.virtualWrite(V5, h); // Humidity for gauge
 Blynk.virtualWrite(V6, t); // Temperature for gauge
 Blynk.virtualWrite(V7, h); // Humidity for graph
 Blynk.virtualWrite(V8, t); // Temperature for graph

 //Si se supera el umbral establecido invocamos a la funcion de la advertencia del led
 if(t >= 35){
 advertenciaLed();
 //Enviamos un alerta por email
  Blynk.email("xx@hotmail.com","AVISO!!", "Se supero la temperatura maxima!!.");
  delay(200);
 
 
  }
 }
 

void setup()
{
 Serial.begin(115200); 

 //Inicializamos los parametros que le pasamos a BLYNK
 Blynk.begin(auth, ssid, pass);
 
//Iniciamos el objeto creado del sensor
 dht.begin();

//Utilizamos un vector timer de la libreria importada 
//Envia los datos a la app cada 1 segundo
 
 timer.setInterval(1000L, sendSensor);
}

void loop()
{
 Blynk.run(); // Initiates Blynk
 timer.run(); // Initiates SimpleTimer

 

}
  
 
