int ldrPin=A0; //Variable para almacenar el pin de la LDR
int ldrValue=0; //Variable para almacenar el valor que recibimos de la LDR

int ledRPin=6; //Pin del LED rojo
int ledGPin=9; //Pin del LED verde
int ledBPin=5; //Pin del LED azul

void setup(){
  //Inicializamos los pines de los LEDs como salidas
  pinMode(ledRPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
}

void loop(){
  //Leemos el valor que nos proporciona la LDR
  ldrValue=analogRead(ldrPin);
  //Si el valor esta por debajo del umbral, encenderemos todos los LEDs para simular el color blanco
  if(ldrValue<200){
    digitalWrite(ledRPin, HIGH);
    digitalWrite(ledGPin, HIGH);
    digitalWrite(ledBPin, HIGH);
  }
  //Si no, apagaremos todos los LEDs
  else{
    digitalWrite(ledRPin, LOW);
    digitalWrite(ledGPin, LOW);
    digitalWrite(ledBPin, LOW);
  }
}
