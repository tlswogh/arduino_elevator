// C++ code
//

const int call_btn1 = 2;
const int call_btn2 = 3;
const int call_btn3 = 4;

const int floor1 = 7;
const int between1=8;
const int between2=9;
const int floor2 = 10;
const int between3=11;
const int between4=12;
const int floor3 = 13;

 
 int up_down=0; //up=1,down=0
 int elevator[7]={7,8,9,10,11,12,13};
 int finish=1;
 int i;
 int now=0;


void setup()
{
  pinMode(call_btn1,INPUT);
  pinMode(call_btn2,INPUT);
  pinMode(call_btn3,INPUT);
  
  
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  
  Serial.begin(9600);
  digitalWrite(elevator[0],1);
  
}

void loop()
{ 
  


  
  if(digitalRead(call_btn1)==1){
    finish=1;
    
  }
  if(digitalRead(call_btn2)==1){
    finish=4;
    
  }
  if(digitalRead(call_btn3)==1){
    finish=7;
    

  }
  if(now>finish){
    up_down=0;

  }
  else{
    up_down=1;
  }
 if(up_down==1){
  for(i=now; i<finish; i++){
    digitalWrite(elevator[i-1],1);
    delay(500);
    digitalWrite(elevator[i-1],0);
  }
  
  now=finish;
 }
 else{
  for(i=now; i>finish ;i--){
    digitalWrite(elevator[i-1],1);
    delay(500);
    digitalWrite(elevator[i-1],0);
  }
  
  now=finish;
 }
 digitalWrite(elevator[now-1],1);
    

    
      
      


  
      


}
  
  
  

 
 
