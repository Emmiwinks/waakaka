#define BUTTON_PIN 26 // GPIO21 pin connected to button
#define BUTTON_PIN2 27 // GPIO21 pin connected to button

void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  pinMode(BUTTON_PIN, INPUT);
  pinMode(BUTTON_PIN2, OUTPUT);
  digitalWrite(BUTTON_PIN2, HIGH);
}

void loop() {
  // read the state of the switch/button:
  Serial.println(digitalRead(BUTTON_PIN));
  Serial.println(digitalRead(BUTTON_PIN2));
  delay(200);

  //Serial.print("Wert 1:");
  //Serial.print(analogRead(BUTTON_PIN));
  //Serial.println();
}
