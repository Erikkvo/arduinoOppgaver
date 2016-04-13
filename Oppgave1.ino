
//Velkommen til Arduino IDE, det er i dette vinduet du kommer til å programmere din Arduino
//for å se et forslag til hvordan koble opp kretsen, gå hit: https://123d.circuits.io/circuits/1951827-oppgave-1

void setup() {
  //void setup() forteller du Arudionen hvilke portet på kortet du skal bruke, og hva de skal brukes til.
  //pinMode(port, tilstand)
  
  pinMode(13, OUTPUT); //Her forteller du kortet at du vil bruke port 13 på kortet som OUTPUT, altså at den skal sende ut strøm
  
  //Merk deg at alle linjer som starter med "//" fungerer som kommentarer, og blir ikke lest av datamaskinen. Disse linjene er for oss mennesker. 
  //En annen ting du kan merke deg er at alle linjene som står mellom { } slutter på en ;

}

void loop() {
  //I void loop() "skjer koden" din. Det er her du forteller at lys-dioden din skal lyse, eller noe annet du måtte ønske.
  //Din oppgave er å få en LED-lampe til til blinke.
  //for å gjøre dette må du bruke to funksjoner: digitalWrite(port, tilstand); og dealy(ms);
  //med digitalWrite(port, tilstand); forteller forteller du til kortet at port skal ha tilstand HIGH eller LOW. 
  //delay(ms); fungerer slik at koden venter i så mange millisekunder

  //Prøv å få et lys på port 13 på arduinonen til å blinke med 250 millisekunder mellom HIGH og LOW. 
}
