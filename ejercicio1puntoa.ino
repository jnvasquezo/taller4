const int pin1 = 34;
const int pin2 = 35;
const int pin3 = 36;
const int pinLedError = 22;

void setup() {
  // Configurar pines de entrada
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  
  // Configurar pin de salida
  pinMode(pinLedError, OUTPUT);
}

void loop() {
  // Leer el estado de las entradas
  bool a = digitalRead(pin1);
  bool b = digitalRead(pin2);
  bool c = digitalRead(pin3);
  
  bool error = ((a && b && c) || (!a && !b && !c)) || 
               (a && b) || (b && c) || (a && c);
               
  // Establecer la salida
  digitalWrite(pinLedError, error);
}
