const int buzzer = 13; 
const int yesilLed=12;
const int kirmiziLed=11;


void setup(){
  pinMode(buzzer, OUTPUT);
  pinMode(yesilLed, OUTPUT);
  pinMode(kirmiziLed, OUTPUT);
  Serial.begin(9600); 
}
 
void loop(){
  
  int alevSensorDegeri = analogRead(A0); 
  int yeniAlevDegeri=map(alevSensorDegeri,0,1023,0,5);
  Serial.println(yeniAlevDegeri); 
  if(yeniAlevDegeri<4){
      digitalWrite(yesilLed,LOW);
      digitalWrite(kirmiziLed,HIGH);
      sesCal();
    }else{
      digitalWrite(yesilLed,HIGH);
      digitalWrite(kirmiziLed,LOW);
      noTone(buzzer);
      delay(1000);
    }
  
  delay(20); 
  
}

void sesCal(){
  int deger=2000;
  tone(buzzer, deger);
  
}

