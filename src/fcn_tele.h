#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <Arduino.h>
#define BOTtoken "7040537799:AAHbciJh4XykJKqH9s5DpONHa-weC5gcqWA"
#define CHAT_ID "5561587743"
extern WiFiClientSecure client;
extern UniversalTelegramBot bot;

class setupTele
{
private:
    const char* ssid ;
    const char* password ;
public:
    
    void init_Wifi();
    void setupWifi();
    void sendData(String message);
    void warining(String warining, uint32_t value);
};

extern setupTele tele;
