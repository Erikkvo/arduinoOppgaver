
//I denne oppgaven skal du bruke et potentimeter til å sende verdier tilbake til Arduionen, som du igjen skal bruke til å bestemme blinkehastigheten på et lys. 
//Til denne oppgaven kommer til du til trenge et potentimeter. De ser slik ut: http://www.exploringarduino.com/wp-content/uploads/2013/06/10k-ohm-trimpot-400x247.jpg
//Dersom du ikke har et slikt i ditt kit, rekk opp en hånd. 
//Forslag til krets: https://123d.circuits.io/circuits/1952080-oppgave2 

int sensorPin = 0;    // The potentiometer is connected to analog pin 0
                      //Merk at det er en forskjell mellom analoge og digitale porter, porten det er snakk om er merket A0

int ledPin = 13;      // The LED is connected to digital pin 13

void setup(){
  pinMode(ledPin, OUTPUT); //<-- Is the same as "pinMode(13, OUTPUT);
                           //Vi trenger ikke å fortelle en analog port om en den skal være input eller output, så vi skriver ikke noe på den. 
}
void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue; //Her oppretter vi bare en varibel som vi skal bruke senere 
  
  sensorValue = analogRead(sensorPin); //Her blir sensorValue satt til det samme som port A0 leser. 
  
  digitalWrite(ledPin, HIGH);     // Turn the LED on
  
  delay(sensorValue);             // Pause for sensorValue milliseconds 
  
  digitalWrite(ledPin, LOW);      // Turn the LED off
  
  delay(sensorValue);             // Pause for sensorValue milliseconds
}
