void setup() {
  Serial.begin(115200);
  pinMode(13, INPUT);
  ledcSetup(0, 5000, 8);
  ledcAttachPin(14, 0);
}

void loop() {
  int input = analogRead(13);
  int input_map = map(input,0 ,1200, 0, 255);
  Serial.println(input);
  ledcWrite(0, input_map);
}
