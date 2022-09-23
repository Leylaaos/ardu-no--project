
int red=3;   //red pin3 yellow pin7'ye bağlı 
int yellow=7;
int button_1=2; //buton1 pin2'ye buton2 pin12ye bağlı 
int button_2=12;


void setup() {

 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(button_1,INPUT);
 pinMode(button_2,INPUT);
 
}

void loop() {
  if (digitalRead(button_1)==LOW)
  {
    digitalWrite(red,LOW);  //buton1'de ikisi aynı anda yansın 
    digitalWrite(red,HIGH);
    delay(600);
    digitalWrite(yellow,LOW);
    digitalWrite(yellow,HIGH);
    delay(600);
  }
   if (digitalRead(button_2)==LOW)
  {
    digitalWrite(red,HIGH);
    digitalWrite(yellow,LOW);  //buton2'de biri 1 iken diğeri 0 olsun kırmızı led daha geç sönsün
    delay(800);
    digitalWrite(red,LOW);
    digitalWrite(yellow,HIGH);
    delay(600);
  }
  }
  
  
