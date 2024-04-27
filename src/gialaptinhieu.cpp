#include "gialaptinhieu.h"

gialaptinhieu _fake;


void gialaptinhieu::gialapTinhieu(UINT32 *ptr)
{
    _fake.fake_data=random(1,100);
    Serial.printf("day la du lieu nam trong ham con : %d\n",_fake.fake_data);
    *ptr=_fake.fake_data;
    
}