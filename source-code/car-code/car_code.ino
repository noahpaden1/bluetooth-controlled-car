const int M1A = 6; 
const int M1B = 7;  

const int M2A = 8; 
const int M2B = 9; 

const int M3A = 10; 
const int M3B = 11;  

const int M4A = 12;  
const int M4B = 13;  


void setup() {
  Serial.begin(38400); // Initialize serial communication for HC-05 bluetooth modules
  
  pinMode(M1A, OUTPUT); 
  pinMode(M1B, OUTPUT); 
  pinMode(M2A, OUTPUT); 
  pinMode(M2B, OUTPUT); 
  pinMode(M3A, OUTPUT); 
  pinMode(M3B, OUTPUT); 
  pinMode(M4A, OUTPUT); 
  pinMode(M4B, OUTPUT); 
}


void loop() {
  // Checks if data is able to be read between HC-05 modules
  if (Serial.available() > 0) {
    char receivedChar = Serial.read(); // Reads incoming character
    Serial.write(receivedChar);
    if (receivedChar == 'F') {
      Serial.println("F Recieved");
      digitalWrite(M1B, HIGH);
      digitalWrite(M2A, HIGH);
      digitalWrite(M3A, HIGH);
      digitalWrite(M4B, HIGH);
      delay(200);
      digitalWrite(M1B, LOW);
      digitalWrite(M2A, LOW);
      digitalWrite(M3A, LOW);
      digitalWrite(M4B, LOW);  
    } else if (receivedChar == 'B') {
        Serial.println("B Recieved");
        digitalWrite(M1A, HIGH);
        digitalWrite(M2B, HIGH);
        digitalWrite(M3B, HIGH);
        digitalWrite(M4A, HIGH);
        delay(200);
        digitalWrite(M1A, LOW);
        digitalWrite(M2B, LOW);
        digitalWrite(M3B, LOW);
        digitalWrite(M4A, LOW); 
      } else if (receivedChar == 'L') {
        Serial.println("L Recieved");
        digitalWrite(M1A, HIGH);
        digitalWrite(M2A, HIGH);
        digitalWrite(M3A, HIGH);
        digitalWrite(M4A, HIGH);
        delay(200);
        digitalWrite(M1A, LOW);
        digitalWrite(M2A, LOW);
        digitalWrite(M3A, LOW);
        digitalWrite(M4A, LOW); 
      } else if (receivedChar == 'R') {
        Serial.println("R Recieved");
        digitalWrite(M1B, HIGH);
        digitalWrite(M2B, HIGH);
        digitalWrite(M3B, HIGH);
        digitalWrite(M4B, HIGH);
        delay(200);
        digitalWrite(M1B, LOW);
        digitalWrite(M2B, LOW);
        digitalWrite(M3B, LOW);
        digitalWrite(M4B, LOW);
      }
  }
}       