#include <Keypad.h>

// ----------------------
// 4x4 Keypad
// ----------------------
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 10, 11, 12};
byte colPins[COLS] = {A0, A1, A2, A3};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// ----------------------
// 7 Segment Pins
// a b c d e f g
// ----------------------
const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

// ----------------------
// Display Functions
// ----------------------
void clearDisplay()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}

// Display 1
void key1()
{
  clearDisplay();
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
}

// Display 2
void key2()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 3
void key3()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segG, HIGH);
}

// Display A
void keyA()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 4
void key4()
{
  clearDisplay();
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 5
void key5()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 6
void key6()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display small b
void keyB()
{
  clearDisplay();
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 7
void key7()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
}

// Display 8
void key8()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display 9
void key9()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

// Display C
void keyC()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
}

// Display *
void keyStar()
{
  clearDisplay();
  digitalWrite(segG, HIGH);
}

// Display 0
void key0()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
}

// Display #
void keyHash()
{
  clearDisplay();
  digitalWrite(segA, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segG, HIGH);
}

// Display d
void keyD()
{
  clearDisplay();
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segG, HIGH);
}

void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

  clearDisplay();
}

void loop()
{
  char key = keypad.getKey();

  if (key)
  {
    switch (key)
    {
      case '1': key1(); break;
      case '2': key2(); break;
      case '3': key3(); break;
      case 'A': keyA(); break;

      case '4': key4(); break;
      case '5': key5(); break;
      case '6': key6(); break;
      case 'B': keyB(); break;

      case '7': key7(); break;
      case '8': key8(); break;
      case '9': key9(); break;
      case 'C': keyC(); break;

      case '*': keyStar(); break;
      case '0': key0(); break;
      case '#': keyHash(); break;
      case 'D': keyD(); break;
    }
  }
}