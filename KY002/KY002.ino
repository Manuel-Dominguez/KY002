/*
  KY-002
  Enciende el LED situado en el pin 13 cuando detecta una vibracion por el pin 10
  Autor: M.Dominguez feb2015
  SoloArduino.blogspot.com

 */
int LED = 13 ; // Define donde estará el LED de aviso de vibración 
int Shock = 10; //  Define qué pin de entrada usa Arduino para la señal de entrada del sensor KY-002
int val; // Definimos una variable con el nombre Val para registrar la señal que nos mande el sensor KY-002

void setup () 
{   
  pinMode (LED, OUTPUT) ; // Configura al pin que hemos llamado LED, como un pin de salida   
  pinMode (Shock, INPUT) ; // Configura el pin que hemos llamado Shock, como un pin de entrada para monitorizar la señal del sensor KY-002 
} 

void loop () 
{
 val = digitalRead (Shock) ; // Pregunta el pin Shock que nivel de tensión tiene, y lo registra en la variable que hemos llamado val 
 if (val == HIGH) //  Si el valor de la variable val es ALTO, entonces manda que el LED se encienda
     {     
     digitalWrite (LED, LOW); //entonces manda que el LED se apague 
      }   
 else   
     {     
     digitalWrite (LED, HIGH);   //en caso contrario manda el LED se encienda
     } 
}

