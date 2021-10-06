// Smartcube source code created by Ludovico Comito - mail:ludocomito@gmail.com
int ValRosso;  
int ValBlu;  
int ValVerde;   
// pin a cui collegare i piedini del LED RGB  
const int VERDE = D1;  
const int BLU = D3;  
const int ROSSO = D2;  
  
// tempo di transizione colore  
const int delayTime = 30;  
  
void setup() {  
   Spark.function("lightTimer",lightTimer);
  // imposta il pin digitale come output  
  pinMode(VERDE, OUTPUT);  
  pinMode(BLU, OUTPUT);  
  pinMode(ROSSO, OUTPUT);  
  
  
  // si impostano ad HIGH i pin VERDE, BLU, ROSSO  
  // inizialmente il led RGB sarà spento  
 
}  
  
// definizione di variabili globali  
  
void loop() {  
  
  
}  

 int lightTimer(String command){
   if(command =="gmail"){ 
  analogWrite(VERDE, 39);  
  analogWrite(BLU, 0);  
  analogWrite(ROSSO, 225);  
 }
   
if(command =="twitter"){ 
    
  analogWrite(VERDE, 182);  
  analogWrite(BLU, 241);  
  analogWrite(ROSSO, 0); 

}
if(command =="white"){ 
    
  analogWrite(VERDE, 255);  
  analogWrite(BLU, 255);  
  analogWrite(ROSSO, 255); 

}
if(command =="off"){ 
    
  analogWrite(VERDE, 0);  
  analogWrite(BLU, 0);  
  analogWrite(ROSSO, 0); 

}
if(command =="facebook"){ 
    
  analogWrite(VERDE, 14);  
  analogWrite(BLU, 255);  
  analogWrite(ROSSO, 23); 
}

if(command =="rain"){ 
   
  for (int i=0; i <= 10; i++){
  analogWrite(VERDE, 2);  
  analogWrite(BLU, 255);  
  analogWrite(ROSSO, 23); 
  delay(100);
  analogWrite(VERDE, 0);  
  analogWrite(BLU, 0);  
  analogWrite(ROSSO, 0); 
  delay(100);
  
}
 
 if(command =="cloudy"){ 
   
  for (int i=0; i <= 10; i++){
  analogWrite(VERDE, 2);  
  analogWrite(BLU, 255);  
  analogWrite(ROSSO, 23); 
  delay(100);
  analogWrite(VERDE, 0);  
  analogWrite(BLU, 0);  
  analogWrite(ROSSO, 0); 
  delay(100);
 }
}
 if(command =="clear"){ 
       
    ValRosso = 255;
       
   for( int d = 0 ; d <= 2 ; d++){ 
  
  for( int i = 0 ; i < 110 ; i += 1 ){  
    
    ValRosso -= 1;  
  
    /* ad ogni ciclio la differenza 
     255 - ValVerde AUMENTA 
     provocando un graduale spegnimento del rosso 
     */  
  
    analogWrite( ROSSO, 255 - ValRosso );  
  
    // attesa di 20 ms per percepire il colore  
    delay( delayTime );  
  }  
  
   }  
  ValVerde = 100;  
  
  for( int i = 0 ; i < 110 ; i += 1 ){  
  
    ValVerde -= 1;  
  
    /* ad ogni ciclio la differenza 
     255 - ValVerde AUMENTA 
     provocando un graduale spegnimento del verde 
     */  
  
    analogWrite( VERDE, 100 - ValVerde );  
  
    // attesa di 20 ms per percepire il colore  
    delay( delayTime );  
  } 
    
  
   
  
}
  analogWrite(VERDE, 0);  
  analogWrite(BLU, 0);  
  analogWrite(ROSSO, 0); 
       

}

 
}
