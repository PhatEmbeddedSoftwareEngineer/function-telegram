#include "fcn_tele.h"
#include "gialaptinhieu.h"
static uint32_t data;
void setup() {
  
  tele.setupWifi();  
  tele.sendData("hello world");
}

void loop() {
  // put your main code here, to run repeatedly:
  _fake.gialapTinhieu(&data);
  Serial.printf("day la ham data nam trong ham loop: %d\n",data);
  /**
   * gia lap tin hieu cam bien khi no nam ngoai nguonc kiem soat
  */
  if(data < 50)
  {
    tele.warining("bao cho co quan chuc nang nhe =))))\n",data);
  }
  delay(5000);
}
