// image help from https://javl.github.io/image2cpp/

const int buttonPin = 6;
const int ledPin = 4;
const int buzzerPin = 5;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  //display.clearDisplay();

  digitalWrite(buzzerPin, HIGH);
  delay(10);
  digitalWrite(buzzerPin, LOW);

  digitalWrite(ledPin, HIGH);
    
}
