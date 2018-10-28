/*Programa para manejo de pantalla LCD 16*2 */
#include<LiquidCrystal.h>
//inicializar LCD
LiquidCrystal lcd(13,12,11,10,9,8);  //RS,E,D4,D5,D6,D7
String txt="Hola"; //defino variable y texto a imprimir
int i=0; //variable de control 

void setup() {
  lcd.begin(16,2); //inicializo la interfaz del lcd y defino dimensiones de pantalla
}

void loop() {
 for (int ; i<16; i++){ //bucle for para recorrer de izquierda a derecha
   lcd.clear(); //borro la pantalla
   lcd.setCursor(i,0); //elijo la posicion del lcd
   lcd.print(txt); // imprimo dato
   delay (100); //espero a visualizar
}
for(int i=16; i>=1;i--)//bucle for para ecorrer de derecha a izquierda 
  {
    lcd.clear(); //borro la pantalla 
    lcd.setCursor(i, 1); //elijo la posicion del lcd 
    lcd.print(txt); //imprimo dato
    delay(100); //espero a visualizar
  }
i=0; //reinicio la variable para que repita el ciclo 
}

  

