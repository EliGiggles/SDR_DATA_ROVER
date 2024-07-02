###  The final product is going to be a telerobot controlled through VHF frequencies, or potentially loRa, 
###that can gather information on nearby devices using an RTL-SDR and report it back to a control station. Today.
###I started early work on the motor drivers, wiring up a test circuit and beginning to write code to drive them.

class MotorControl {
public:
  // Constructor
  MotorControl(int p1, int p2);
  
  // Public methods
  void begin();
  void update(signed int direction, unsigned long time);
  void doSomething();
  int getValue();
  void setValue(int value);

private:
  //private:
  // Private variables (not methods)
  int _first_pin;
  int _second_pin;
  signed int _direction;
  unsigned long _time;

};

// Constructor implementation
MotorControl::MotorControl(int p1, int p2) : _first_pin(p1), _second_pin(p2) {
  // Pin mode setup moved to begin() method
}
void MotorControl::begin() {
  pinMode(_first_pin, OUTPUT);
  pinMode(_second_pin, OUTPUT);
}


void MotorControl::update(signed int direction, unsigned long time) {
  // Main loop code here (like in Arduino's loop())
  // This method can be called repeatedly
 _time = (time);
 _direction = (direction);

}

MotorControl Motor1(3,5);

void setup() {
Motor1.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  
}
