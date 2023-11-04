// Linear Potentiometer Code, 0-5kOhms roughly, some of the potentiometers
// have different ranges unfortunately, so some need to be rescaled

/* The Linear Potentiometers come with three wires, VCC, SIG, GND
Voltage, signal, and ground

Code adapted from esp32io.com's article on rotary pots */ 


#define ReadPin 8 // arbitrary gpio PIN-- find out later from PCB

// Will rescale the 0 to max resistance to the new data value (position in centimeters)
float floatMap(float x, float min_in, float in_max, float out_in, float out_max, )
  return (x-in_min) * (out_max - out_min) / (in_max-in_min) + out_min;

// resistence values, different for each potentiometer
int maxResist = 4095; 
int minResist = 0; 
int maxPos = 50;

void setup() {
  // begin the data transmission at 9600 bits per sec
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int analogResistence = analogRead(ReadPin);
  // Mapping the resistence to the 50cm potentiometer
  position = floatMap(analogResistence, minResist, maxResist, 0, maxPos)


  // printing the position
  Serial.println("Resistence: ");
  Serial.print(analogResistence);
  Serial.println("Position: ");
  Serial.print(position);
  Serial.print(" cm");
  delay(100);
}
