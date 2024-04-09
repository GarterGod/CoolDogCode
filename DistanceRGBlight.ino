
#define  MAX_RANG      (520)//the max measurement vaule of the module is 520cm(a little bit longer than  effective max range)
#define  ADC_SOLUTION      (1023.0)//ADC accuracy of Arduino UNO is 10bit
#define  Inch_Convert  (2.54)
#define Foot_Convert (30.48)
int sensityPin = A0;    // select the input pin 
const int red = 9;    // the number of the LED pin
const int green = 10;
const int blue = 11;

void setup() {
  // Serial init
  Serial.begin(9600);
   pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}
float dist_t, sensity_t, dist_f ;
void loop() {
  // read the value from the sensor:
 sensity_t = analogRead(sensityPin);
  // turn the ledPin on

 dist_f = sensity_t * MAX_RANG  / ADC_SOLUTION;//
 dist_f= dist_f/ Foot_Convert;// 
 Serial.print(dist_f,1);
 Serial.println("ft");



 dist_t = sensity_t * MAX_RANG  / ADC_SOLUTION;//
 dist_t= dist_t/ Inch_Convert;// 
 Serial.print(dist_t,1);
 Serial.println("in");


 // check if distance is greater than a threshold
  if (dist_t > 12.0) {    // for example, if distance in feet is greater than 5.0

        digitalWrite(red, HIGH);
        delay(500);
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        delay(500);
         digitalWrite(blue, LOW);



  } else {
    Serial.print("Distance less than or equal to 12 inches");
     // print distance with 2 decimal places

  }
}
