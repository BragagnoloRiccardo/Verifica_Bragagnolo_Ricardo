
int rosso = 13;
int giallo = 11;
int bianco= 7;
int verde = 5;
int durataLed = 0;
void setup() {
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(bianco, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
  durataLed = seriale("Quanti millisecondi devono durare i led?", durataLed);
}


void loop() {
  digitalWrite(rosso, HIGH);   
  delay(durataLed);                       
  digitalWrite(rosso, LOW);   
  delay(1000); 
  
  digitalWrite(giallo, HIGH);   
  delay(durataLed);                       
  digitalWrite(giallo, LOW);   
  delay(durataLed);     
  
  digitalWrite(bianco, HIGH);   
  delay(durataLed);                       
  digitalWrite(bianco, LOW);   
  delay(durataLed);  


  digitalWrite(verde, HIGH);   
  delay(durataLed);                       
  digitalWrite(verde, LOW);   
  delay(durataLed);
  
  
  }
  int seriale(String s, int i){
  Serial.println(s);
  while (Serial.available()==0){};
  i = Serial.readString().toInt();
  return i;
}
