const int pinTransparente = 34;  
const int pinDuro = 35;          
const int pinFragil = 36;        
const int pinSalida = 22;        

void setup() {
  pinMode(pinTransparente, INPUT);
  pinMode(pinDuro, INPUT);
  pinMode(pinFragil, INPUT);
  pinMode(pinSalida, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool w = digitalRead(pinTransparente);
  bool x = digitalRead(pinDuro);
  bool y = digitalRead(pinFragil);
  
  bool esVidrio = (w && x) || ((!w || !x) && y);
  
  digitalWrite(pinSalida, esVidrio);

  Serial.println("----------------------------------------");
  Serial.println("Estado de los sensores:");
  Serial.print("Transparente (w): "); 
  Serial.println(w ? "SI" : "NO");
  Serial.print("Duro (x): "); 
  Serial.println(x ? "SI" : "NO");
  Serial.print("Fragil (y): "); 
  Serial.println(y ? "SI" : "NO");
  Serial.println("----------------------------------------");
  Serial.print("Clasificacion: ");
  if (w && x) {
    Serial.println("ES VIDRIO (Z=1)");
  } else if ((!w || !x) && y) {
    Serial.println("ES VIDRIO (Z=1)");
  } else {
    Serial.println("NO ES VIDRIO (Z=0)");
  }
  Serial.println("----------------------------------------\n");
  
  delay(5000);
}
