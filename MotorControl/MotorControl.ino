/*  
I manage to get the motor Driver software working, and control the speed, as well as making it, go forward and backwards, 
but I still have a few bugs to work out, namely, that the motors will keep going when they're not supposed to. 
I think I might know how to fix that though. Additionally, the wiring on the motors needs another pass.
*/
class MotorControl {
public:
  // Constructor
  MotorControl(int p1, int p2);
  
  // Public methods
  void begin();
  void update(signed int direction);
  void doSomething();
  int getValue();
  void setValue(int value);

private:
  //private:
  // Private variables (not methods)
  int _first_pin;
  int _second_pin;
  signed int _direction;

};

// Constructor implementation
MotorControl::MotorControl(int p1, int p2) : _first_pin(p1), _second_pin(p2) {
  // Pin mode setup moved to begin() method
}
void MotorControl::begin() {
  pinMode(_first_pin, OUTPUT);
  pinMode(_second_pin, OUTPUT);
}


void MotorControl::update(signed int direction) {
  // Main loop code here (like in Arduino's loop())
  // This method can be called repeatedly
 _direction = map(direction, 0, 128, 0, 256);
if (_direction > 0){
analogWrite(_first_pin, _direction);
analogWrite(_second_pin, 0);
}
if (_direction < 0){
analogWrite(_second_pin, _direction);
analogWrite(_first_pin, 0);
}
if (_direction == 0){
analogWrite(_second_pin, 0);
analogWrite(_first_pin, 0);
}
}
MotorControl Motor1(5,3);

void setup() {
Motor1.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < 256; ++ i) {
Motor1.update(i);
  delay(10);
}
delay(1000);
for (int i = 0; i > -256; -- i) {
Motor1.update(i);
  delay(10);
}
}
