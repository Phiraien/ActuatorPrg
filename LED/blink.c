#define LED_PIN 13       // Built-in LED pin on most Arduino boards
#define DELAY_MS 1000    // Delay time in milliseconds

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn the LED on
  delay(DELAY_MS);             // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED off
  delay(DELAY_MS);             // Wait for 1 second
}
