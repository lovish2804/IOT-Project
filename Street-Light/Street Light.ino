/*
 * Interface InfraRed Sensor Using NodeMCU
 * By TheCircuit
 * Red :     5V
 * Brown: Sensor output
 * Black : Ground
*/

int ledPin1 = D5;
//int ledPin2 = D6;// choose pin for the LED
int ledPin3 = D8;
int inputPin1 = D7;
int inputPin3 = D4;
//int inputPin2 = D3;// choose input pin (for Infrared sensor) 
int val1 = 0,val3=0,val2=0; // variable for reading the pin status 
void setup() 
{ 
   pinMode(ledPin1, OUTPUT); // declare LED as output 
   pinMode(inputPin1, INPUT);
   pinMode(ledPin2, OUTPUT); // declare LED as output 
  pinMode(inputPin2, INPUT);// declare Infrared sensor as input
   pinMode(ledPin3, OUTPUT); // declare LED as output 
   pinMode(inputPin3, INPUT);// declare Infrared sensor as input
} 
void loop()
{ 
   val1 = digitalRead(inputPin1); // read input value 
   if (val1 == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin1, LOW); // turn LED OFF   
   } 
   else
   { 
      digitalWrite(ledPin1, HIGH); // turn LED ON 
   }
 
   val2 = digitalRead(inputPin2); // read input value 
   if (val2 == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin2, LOW); // turn LED OFF   
   } 
   else 
   { 
      digitalWrite(ledPin2, HIGH); // turn LED ON 
   } 
    val3 = digitalRead(inputPin3); // read input value
   if (val3 == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin3, LOW); // turn LED OFF   
   } 
   else
   { 
      digitalWrite(ledPin3, HIGH); // turn LED ON 
   }
}
