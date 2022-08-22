/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

// Relay pin is controlled with D8. The active wire is connected to Normally Closed and common
int relay = 8;
volatile byte relayState = LOW;

// Timer Variables
long lastDebounceTime = 0;  
long debounceDelay = 10000;
long onTimeInSecs = 10;
long offTimeInSecs = 25 * 60; 

void setup() {
  // Pin for relay module set as output
  pinMode(relay, OUTPUT);
  // Serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  digitalWrite(relay, LOW);
  Serial.println("On");
  delay(onTimeInSecs * 1000);

  digitalWrite(relay, HIGH);
  Serial.println("Off");
  delay(offTimeInSecs * 1000);
}
