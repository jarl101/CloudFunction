int led = D7;

void setup() {
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    pinMode(led, OUTPUT);

}

void loop() {
    

}


void myHandler(const char *event, const char *data) {

    if(strcmp(data,"wave")==0) {
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(1000);
    }
    else if (strcmp(data,"pat")==0) {
        digitalWrite(led, HIGH);
        delay(800);
        digitalWrite(led, LOW);
        delay(300);
        digitalWrite(led, HIGH);
        delay(800);
        digitalWrite(led, LOW);
        delay(1000);
    }
    else
    {
        
    }
}
