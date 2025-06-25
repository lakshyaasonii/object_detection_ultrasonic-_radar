#include <Servo.h>

int led_pin01 = 2;
int led_pin02 = 3;
int led_pin03 = 4;
int led_pin04 = 5;

int buzzer_pin = 8;

int servo_pin = 7;

int trigger_pin = 13;
int echo_pin = 10;

Servo myServo ;

float distance;
long duration;


void setup() {
  Serial.begin(9600);
    pinMode(led_pin01, OUTPUT);
    pinMode(led_pin02, OUTPUT);
    pinMode(led_pin03, OUTPUT);
    pinMode(led_pin04, OUTPUT);

    pinMode(buzzer_pin, OUTPUT);
    pinMode(trigger_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    myServo.attach(servo_pin);
}

void loop() {
  for(int angle=0; angle<=180; angle +=1){
      ScanAtAngle(angle);
  }

  for(int angle=180; angle>=180; angle-=1){
      ScanAtAngle(angle);
  }
  
  
}

//calling ScanAtAngle function
  void ScanAtAngle(int angle){
    myServo.write(angle);
    delay(15);
   
    //for the generation of ultrasonic wave from sensor
    digitalWrite(trigger_pin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigger_pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger_pin,LOW);
    

    //reading of echo pin
    duration = pulseIn(echo_pin,HIGH);
    distance = duration * 0.0343 / 2;

      digitalWrite(buzzer_pin,HIGH);
      digitalWrite(led_pin01,LOW);
      digitalWrite(led_pin02,LOW);
      digitalWrite(led_pin03,LOW);
      digitalWrite(led_pin04,LOW);
    //for distance and angle printing
    if(distance <=50 && distance >2){
      Serial.print("Angle: ");
      Serial.print(angle);
      Serial.print("Distance: ");
      Serial.print(distance);
      Serial.println("cm");

      
    } else {
      Serial.println("No object detected under 50cm range!!");
    }


    //for led alert system
    if(distance <=50 && distance >40){
      digitalWrite(led_pin01,HIGH);
      digitalWrite(buzzer_pin,LOW);
    }
    else if(distance <=40 && distance >30){
      digitalWrite(led_pin02,HIGH);
      digitalWrite(buzzer_pin,LOW);
    }
    else if(distance <=30 && distance >20){
      digitalWrite(led_pin03,HIGH);
      digitalWrite(buzzer_pin,LOW);
    }
    else if(distance <=20 && distance >10){
      digitalWrite(led_pin04,HIGH);
      digitalWrite(buzzer_pin,LOW);
    }
    else if(distance <=10 && distance>2){
      digitalWrite(led_pin01,HIGH);
      digitalWrite(led_pin02,HIGH);
      digitalWrite(led_pin03,HIGH);
      digitalWrite(led_pin04,HIGH);
      digitalWrite(buzzer_pin,LOW);
    }
    
    delay(15);
  }
  
  
