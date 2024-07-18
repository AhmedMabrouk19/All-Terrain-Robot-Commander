#define in1 2
#define in2 3
#define in3 4
#define in4 5



char t;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);
}
void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void go() {
 digitalWrite(in1, HIGH);//LEFT
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);//RIGHT
  digitalWrite(in4, HIGH);                  

}
void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void back() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void Stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void loop() {
  if (Serial.available()) {
    t = Serial.read();
  }

  if (t == 'F') {
    go();
    Serial.println("go");
  }
  else if (t == 'B') {
    back();
    Serial.println("Back");
  } else if (t == 'L') {
    left();
    Serial.println("left");
  } else if (t == 'R') {
    right();
    Serial.println("right");
  } else {
    Stop();
    Serial.println("Stop");
  }
  //delay(100);
} 