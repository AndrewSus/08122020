//#include <TimerOne.h>

//#include <Wire.h>
//#include <SoftwareSerial.h>
//SoftwareSerial RS485(7, 6); // RX, TX - Какие выводы будут использованы для RS485

 

const int BUTTON_INT0 = 0;

volatile int count = 0;                                              // Создаём массив для данных
int data = 0;
//const uint8_t     PIN_direction_TX_RX = 10;  // указываем номер вывода arduino, к которому подключены выводы RE и DE конвертирующего модуля

void button1() {
  count++; //18022019
}




void setup(){
    
    //pinMode(PIN_direction_TX_RX,   OUTPUT);    // устанавливаем режим работы вывода PIN_direction_TX_RX, как "выход"
    //digitalWrite(PIN_direction_TX_RX, LOW);    // устанавливаем уровень логического «0» на выводе PIN_direction_TX_RX (переводим модуль в режим приёма данных)
    
    Serial.begin(9600);
    //while (!Serial) {
    //; // wait for serial port to connect. Needed for native USB port only
  //}
    //RS485.begin(9600); // SoftwareSerial
    
    attachInterrupt(BUTTON_INT0, button1, LOW);  //Условие для кнопки по прерыванию
    
        
}

void loop()
{
  //data = count;
  //delay(5000);
  if ( count != 0)
  {
     //был клик кнопки
    //digitalWrite(PIN_direction_TX_RX, HIGH); // переводим модуль в режим передачи данных
    //delay(2);
    Serial.println(count);
    //Serial.println(RS485.println(data));
    //digitalWrite(PIN_direction_TX_RX, LOW);  // переводим модуль в режим приёма данных
    
    }

  //data = count;
   
  }
