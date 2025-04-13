/*This program just turns the LED ON when Button is Pressed and Off when let go*/ 

int buttonPin=2; //Assigning variables to pin 2 and 13
int ledPin=13;


// the setup function runs once when you press reset or power the board
void setup() {
  //initialize GPIO pin 13 and 2
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(buttonPin) == LOW) // this fuction changes the state of button pin from being pressed or not
  {
    digitalWrite(ledPin, HIGH); //this makes sure that when the button is pressed the LED turns ON
  }else{
    digitalWrite(ledPin, LOW); // similarly, if the button state is not changed then the LED remains OFF
  }
}