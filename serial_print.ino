void setup() { Serial.begin(115200);
}

void loop() {
  Serial.print(0x00);
  Serial.print(0x01);
  Serial.print(0x02);
  Serial.print(0x03); 
  Serial.print(0x04);
  delay(2000);
}

