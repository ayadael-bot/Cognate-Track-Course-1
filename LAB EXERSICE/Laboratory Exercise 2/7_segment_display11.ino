const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

const int upButton = 10;
const int downButton = 9;

int count = 0; 

bool lastUpState = HIGH;
bool lastDownState = HIGH;

const byte numData[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, 
  {0, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 0, 1, 1, 0, 1}, 
  {1, 1, 1, 1, 0, 0, 1}, 
  {0, 1, 1, 0, 0, 1, 1}, 
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 1, 0, 1, 1}  
};

void setup() {
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(upButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);

  displayNumber(count);
}

void loop() {
  bool currentUpState = digitalRead(upButton);
  bool currentDownState = digitalRead(downButton);

  if (currentUpState == LOW && lastUpState == HIGH) {
    count++;
    if (count > 9) count = 9; 
    displayNumber(count);
    delay(50); 
  }
  lastUpState = currentUpState;

  if (currentDownState == LOW && lastDownState == HIGH) {
    count--;
    if (count < 0) count = 0; 
    displayNumber(count);
    delay(50);
  }
  lastDownState = currentDownState;
}
void displayNumber(int num) {
  digitalWrite(segA, numData[num][0]);
  digitalWrite(segB, numData[num][1]);
  digitalWrite(segC, numData[num][2]);
  digitalWrite(segD, numData[num][3]);
  digitalWrite(segE, numData[num][4]);
  digitalWrite(segF, numData[num][5]);
  digitalWrite(segG, numData[num][6]);
}