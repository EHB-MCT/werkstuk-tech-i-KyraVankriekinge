#define LED1 12
#define LED2 11
#define LED3 10
#define LED4 9
#define LED5 8

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);}
  
  void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED5, LOW);
  digitalWrite(LED1, HIGH);
  delay(400);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(400);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(400);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(400);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(400);

}