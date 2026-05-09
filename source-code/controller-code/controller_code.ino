void setup() {
  Serial.begin(38400); // Initializes serial communication at this number for bluetooth modules

  pinMode(10, INPUT); // Set pin 10 as an input for the "forward" button
  pinMode(11, INPUT); // Set pin 11 as an input for the "backward" button
  pinMode(12, INPUT); // Set pin 12 as an input for the "right" button
  pinMode(13, INPUT); // Set pin 13 as an input for the "left" button
}

void loop() {
  // Checks state of button connected to pin 12
  if (digitalRead(4) == HIGH) { 
    Serial.println("F"); // Sends 1 letter message to car through bluetooth telling it to go forward
  }
  // Checks state of button connected to pin 13
  else if (digitalRead(3) == HIGH) { 
    Serial.println("B"); // Sends 1 letter message to car through bluetooth telling it to go backward
  }
  else if (digitalRead(2) == HIGH) { 
    Serial.println("R"); // Sends 1 letter message to car through bluetooth telling it to spin right
  }
  else if (digitalRead(13) == HIGH) { 
    Serial.println("L"); // Sends 1 letter message to car through bluetooth telling it to spin left
  }

  delay(200); // Wait 200 milliseconds for every input cycle in order to get rid of any jerks when the car moves
} 
