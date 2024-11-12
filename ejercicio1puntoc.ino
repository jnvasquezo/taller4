const int pin1 = 34;
const int pin2 = 35;
const int pin3 = 36;
const int pinSalida = 22;

void setup() {
 pinMode(pin1, INPUT);
 pinMode(pin2, INPUT);
 pinMode(pin3, INPUT);
 pinMode(pinSalida, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 bool p1 = digitalRead(pin1);
 bool p2 = digitalRead(pin2);
 bool p3 = digitalRead(pin3);
 
 bool alarma = (p1 && p2) || (p2 && p3) || (p1 && p3);
 
 digitalWrite(pinSalida, alarma);

 Serial.println("----------------------------------------");
 Serial.println("Estado de las piezas:");
 Serial.print("Pieza 1: "); 
 Serial.println(p1 ? "DEFECTUOSA" : "CORRECTA");
 Serial.print("Pieza 2: "); 
 Serial.println(p2 ? "DEFECTUOSA" : "CORRECTA");
 Serial.print("Pieza 3: "); 
 Serial.println(p3 ? "DEFECTUOSA" : "CORRECTA");
 Serial.println("----------------------------------------");
 
 int contadorDefectos = p1 + p2 + p3;
 Serial.print("Total piezas defectuosas: ");
 Serial.println(contadorDefectos);
 Serial.print("Estado de alarma: ");
 Serial.println(alarma ? "ACTIVADA" : "DESACTIVADA");
 Serial.println("----------------------------------------\n");
 
 delay(5000);
}
