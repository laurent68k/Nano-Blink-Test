/*
    Laurent FAVARD

    This small porgram blink the embedded LED on the nano board and send a welcomme message through teh serial port during the setup.

    Purpose:  
    - Test your board
    - Test your serial port (At 115200)
    - Test your Arduino environment

    REMARK :

    Port: 'COM3' on my Lenovo laptop. Depends on your machine
    Board is :'Arduino nano'
    Processor MUST BE:  "ATmega 328P (Old bootloader)"
*/

// the setup function runs once when you press reset or power the board
void setup() {

     
    Serial.begin(115200); 
    delay(10);

    Serial.println("Hello World! I'm a nano");

    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

    digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
    delay(150);
                         
    digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
    delay(150);                     
}
