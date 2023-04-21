int ir1 = 9;
int ir2 = 8;
int motor1anode = 2;
int motor1cathod = 3;
int motor2anode = 4;
int motor2cathod = 5;

void setup()
{
  pinMode(ir1, INPUT); 
  pinMode(ir2, INPUT); 
  pinMode(motor1anode, OUTPUT);
  pinMode(motor1cathod, OUTPUT);
  pinMode(motor2anode, OUTPUT);
  pinMode(motor2cathod, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int ir1_Status = digitalRead(ir1); 
  int ir2_Status = digitalRead(ir2);
  
  if (ir1_Status == HIGH && ir2_Status == HIGH)
  {
    //motor forward
    Serial.println("forward");
    digitalWrite(motor1anode ,HIGH);
    digitalWrite(motor1cathod ,LOW);
    digitalWrite(motor2anode ,HIGH);
    digitalWrite(motor2cathod ,LOW);
  }
   else if (ir1_Status == LOW && ir2_Status == HIGH)
  {
    //motor left
    Serial.println("left");
    digitalWrite(motor1anode ,HIGH);
    digitalWrite(motor1cathod ,LOW);
    digitalWrite(motor2anode ,LOW);
    digitalWrite(motor2cathod ,HIGH);
  }
  else if (ir1_Status == HIGH && ir2_Status == LOW)
  {
    //motor right
     Serial.println("right");
     digitalWrite(motor1anode ,LOW);
     digitalWrite(motor1cathod ,HIGH);
     digitalWrite(motor2anode ,HIGH);
     digitalWrite(motor2cathod ,LOW);
  }
  else if (ir1_Status == LOW && ir2_Status == LOW)
  {
    //motor backward
     Serial.println("backward");
     digitalWrite(motor1anode ,LOW);
     digitalWrite(motor1cathod ,HIGH);
     digitalWrite(motor2anode ,LOW);
     digitalWrite(motor2cathod ,HIGH);
  }
 
}
