/*         UTN-FICA-CIERCOM
             OPTATIVA II
            CARLA RIVERA
    Cx serial
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12, 11, 10, 9, 8);

String readString; //Asignamos la palabra readString a una variable tipo cadena
int i=0;

void setup() {
  Serial.begin(9600); //inicializamos la comunicacion serial
  
  lcd.begin(16, 2);
  lcd.clear();
  lcd.noAutoscroll();
  delay( 200 );
}

void loop() {
  while (Serial.available()) { //Se verifica la disponibilidad del puero serial 
    delay(3);                  // a traves de un loop
    char c = Serial.read();  // Se leen los caracteres que ingresan por el puerto
    readString += c;         //se acumulan cada uno de los caracteres en readString
  }
  if (readString.length() >0) { //Se verifica que la variable contenga informacion
    lcd.clear();
    Serial.println(readString);  //se envia lo que tenga la variable
    lcd.print(readString);


  // movimiento de texto en lcd   
 for(int i=1; i<=16;i++)
  {
    
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(readString);
    
    delay(200);
  }
   
for(int i=16; i>=1;i--)
  {
    
    lcd.clear();
    lcd.setCursor(i, 1);
 
    lcd.print(readString);
    
 
    delay(200);
  }

  }}
