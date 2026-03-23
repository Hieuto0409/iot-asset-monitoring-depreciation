#include <Arduino.h>

#define UART_TX 17
#define UART_RX 16
#define baud 115200

HardwareSerial SerialPort(2);
uint8_t data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(baud);
  SerialPort.begin(baud, SERIAL_8N1, UART_RX, UART_TX);
}

void loop() {
  if(SerialPort.available()){
    data = SerialPort.read();
    Serial.println(data, HEX);
  }
}

