
// constants won't change. They're used here to set pin numbers:
  // the number of the pushbutton pin
const int red = 9;    // the number of the LED pin
const int green = 10;
const int blue = 11;
const int dim = A2; 

void setup() {
  // initialize the LED pin as an output:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  // initialize the pushbutton pin as an input:

}

void loop() {
  // read the state of the pushbutton value:

         delay(50);
        digitalWrite(red, HIGH);
        delay(100);
        digitalWrite(blue, LOW);
        delay(900);
        digitalWrite(green, HIGH);
        delay(100);
        digitalWrite(red, LOW);
        delay(900);
        digitalWrite(blue, HIGH);
        delay(100);
        digitalWrite(green, LOW);
        delay(900);

  }

    // turn LED on:
   






