void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  

}

struct Light{
  public:
   int pin;
   int dellay = 1000;
 };

Light led;


int pin =0;


void setPins(){
  int i = pow(2, led.pin);
  
  if(i%2==1){
    digitalWrite(10,HIGH);
  }
  else{
    digitalWrite(10,LOW);
  }
  
  i = i>>1;

  if(i%2==1){
    digitalWrite(11,HIGH);
  }
  else{
    digitalWrite(11,LOW);
  }
  
  i = i>>1;

  if(i%2==1){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }

  i = i>>1;
  
  if(i%2==1){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  
}


void loop() {
  led.pin=pin;//pow(2,pin);
  setPins();
  delay(led.dellay);                     
  pin+=1;
}
