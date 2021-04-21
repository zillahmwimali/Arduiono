void AMBER(){
int y=1;
while(y<=4){
digitalWrite(Amber,HIGH);
delay(1500);
digitalWrite(Amber,LOW);
delay(1500);
y++;
}
}
