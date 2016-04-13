
//Nå skal vi prøve å gjøre noe litt mer spennende enn å få et lys til å blinke, nå skal vi prøve å få en servo til å rotere!
//En servo er en bitteliten motor, som beveger på tannhjul som derretter roterer på et hode. I denne oppgaven skal du bestemme hvordan motoren fungerer

# include <Servo.h> //Fordi servoen er litt mer avansert en et LED-lys må vi hente inn litt ekstra funksjonalitet ved å hente inn et bibliotek.

Servo myservo; //Her oppretter du et "servo-objekt". Du kan se på den som en digital representasjon av din fysiske servo.
int potpin = 0; //Vi skal bruke et potentiometer i denne oppgaven, som fungerer litt som en fleks-senor, men ved at du vrir på en knob i stedenfor. 
                //Den ser slik ut: http://www.exploringarduino.com/wp-content/uploads/2013/06/10k-ohm-trimpot-400x247.jpg 
int val;        //Denne varibelen bruker vi til å holde på signalet vi får fra potentiometeret

void setup() {
    myservo.attach(9); //Her forteller du kortet at du har festet kortet på digitalport 9 

}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
