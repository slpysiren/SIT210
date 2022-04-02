int MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void setup() {
	pinMode(MY_LED, OUTPUT);
}

void loop() {
    // N
	digitalWrite(MY_LED, HIGH); // long
	delay(500);
	digitalWrite(MY_LED, LOW);
	delay(250);
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(750);
    
    // E
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(750);
    
    // R
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH); // long
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(750);
    
    // I
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(750);

    // S
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH); // short
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(750);
    
    delay(1s);
    
}

