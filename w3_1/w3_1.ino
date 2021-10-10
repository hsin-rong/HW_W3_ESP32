#define LedPin 14

#define shortLightTime 250 //短亮時間
#define longLightTime 500  //長亮時間
#define codeSpaceTime 250 //亮暗間格
#define letterSpaceTime 500 //字母間格

char input;// to save the input

int freq = 2000;
int channel = 0;
int resolution = 8;

void setup() {
  Serial.begin(115200);
  pinMode(LedPin, OUTPUT);

  ledcSetup(channel, freq, resolution);
  ledcAttachPin(LedPin, channel);
}

void setup() {
  Serial.begin(115200);
  pinMode(13, INPUT);
  ledcSetup(0, 5000, 8);
  ledcAttachPin(14, 0);
}

void loop() {
  int input = analogRead(13);
  int input_map = map(input, 1200,0, 0, 255);
  Serial.println(input);
  ledcWrite(0, input_map);
}
