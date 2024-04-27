#include <Arduino.h>
typedef uint32_t UINT32;

class gialaptinhieu
{
public:
    UINT32 fake_data=0;
    void gialapTinhieu(UINT32 *ptr);
};

extern gialaptinhieu _fake;
