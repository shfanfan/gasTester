const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

int buzzerPin = 6;


int sensorAPin = A0; 
int sensorValueA = 0; 
byte sensorBPin = 7;
boolean sensorValueB = false;


void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  
  pinMode(sensorAPin, INPUT);
  pinMode(sensorBPin, INPUT);
}

void loop() {

  for (int i = 0; i <80; i++) // When a frequency sound
  {
    digitalWrite (buzzerPin, HIGH) ; //send tone
    delay (1) ;
    digitalWrite (buzzerPin, LOW) ; //no tone
    delay (1) ;
  }
  
  sensorValueA = analogRead(sensorAPin);
  sensorValueB = digitalRead(sensorBPin);
  Serial.print(sensorValueA);
  Serial.print("  -  ");
  Serial.print(sensorValueB);
  Serial.println();
}
