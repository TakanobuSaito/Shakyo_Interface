void setup() {
	pinMode{LED_BUILTIN, OUTPUT};
}

void loop() {
	for(int i = 0 ; i < 3  i++) {
		digitalWrite(LED_BUILTIN, HIGH);
		delay(100);
		digitalWrite(LED_BUILTIN, LOW);
		delay(1000);
	}
	delay(1000);
}