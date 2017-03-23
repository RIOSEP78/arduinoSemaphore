int red = 10, yellow = 9, green = 8, pedRed = 13, pedGreen = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  digitalWrite(pedRed, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
  digitalWrite(pedGreen, LOW);

  
}
