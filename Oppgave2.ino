
//I denne oppgaven skal du bruke en fleks-sensor til å sende verdier tilbake til Arduionen, som du igjen skal bruke til å bestemme blinkehastigheten på et lys. 
//Til denne oppgaven kommer til du til trenge en fleks-sensor. De ser slik ut: http://www.spectrasymbol.com/wp-content/themes/spectra/images/banner_image.png
//Dersom du ikke har et slikt i ditt kit, rekk opp en hånd. 
//Forslag til krets: https://123d.circuits.io/circuits/1952080-oppgave2 . Merk deg at "blå-dingsen" er hvor fleks-sensoren skal puttes. Den brukes på samme måte

int sensorPin = 0;    // The sensor is connected to analog pin 0
                      //Merk at det er en forskjell mellom analoge og digitale porter, porten det er snakk om er merket A0

int ledPin = 13;      // The LED is connected to digital pin 13

void setup(){
  pinMode(ledPin, OUTPUT); //<-- Is the same as "pinMode(13, OUTPUT);
                           //Vi trenger ikke å fortelle en analog port om en den skal være input eller output, så vi skriver ikke noe på den. 
}
void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue; //Her oppretter vi bare en varibel som vi skal bruke senere 
  
  sensorValue = analogRead(); //Hva bør analogRead(Finn ut hva som skal stå her) lese? En port kanskje?
  //Visste du at analogRead kan ha verdier fra 0 til 1023?
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  
  delay();                    //Har vi et tall som kan fungere som et delay? 
  
  digitalWrite(ledPin, LOW);  // Turn the LED off
  
  delay();                    // Pause for sensorValue milliseconds
}
