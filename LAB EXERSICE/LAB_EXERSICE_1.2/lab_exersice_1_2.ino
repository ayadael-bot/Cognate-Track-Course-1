int LED2 = 2;
int LED3 = 3;
int LED4 = 4;
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;
int LED8 = 8;
int LED9 = 9;
int LED10 = 10;
int LED11 = 11;
int LED12 = 12;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(2, HIGH);
  delay(250); 
  digitalWrite(12, LOW);
  digitalWrite(2, LOW);
  delay(250); 
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  delay(250); 
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  delay(250); 
  digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);
  delay(250); 
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  delay(250); 
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(250); 
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  delay(250);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  delay(250); 
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  delay(250);
  digitalWrite(7, HIGH);
  delay(250); 
  digitalWrite(7, LOW);
  delay(250); 
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(250); 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(250);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(250);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(250);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(250); 
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(250); 
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  delay(250);
}