//L293D and Motor
int in1 = 8;	// Motor 1 
int in2 = 7;	// Motor 1

int in3 = 5;	// Motor 2
int in4 = 4;	// Motor 2

void setup() {
	//Set pins as outputs
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
}

void loop() {
  
  	//Motor 1 in one direction
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
  
  	//Motor 2 in Opposite direction
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
}
