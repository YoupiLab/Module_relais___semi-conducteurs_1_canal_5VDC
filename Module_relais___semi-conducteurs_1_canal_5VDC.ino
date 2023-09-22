int relay_Pin = 8; // Déclaration du pin 8 comme entrée du relais
void setup() {
pinMode(relay_Pin,OUTPUT);// Initialisation du pin 8 comme sortie de l'arduino
Serial.begin(9600);
}

void loop() {
digitalWrite(relay_Pin,HIGH); // On envoie un signal de 5V au relais pour allumer la lampe
Serial.println("Lampe allumée");// On affiche l'état de la lampe dans le moniteur série
delay(2000);// On attend pendant deux secondes 
digitalWrite(relay_Pin,LOW); // On envoie un signal de 0V au relais pour éteindre la lampe
Serial.println("Lampe éteinte");// On affiche l'état de la lampe dans le moniteur série
delay(1000);// On attend pendant une seconde
}
