#include "fcn_tele.h"
WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);
setupTele tele;


void setupTele::init_Wifi()
{
    tele.password="0937875855";
    tele.ssid="Phat";

}

void setupTele::setupWifi()
{
    init_Wifi();
    Serial.begin(115200);  
    WiFi.mode(WIFI_STA);
    WiFi.begin(tele.ssid, tele.password);
    client.setCACert(TELEGRAM_CERTIFICATE_ROOT);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
}

void setupTele::sendData(String message)
{
    bot.sendMessage(CHAT_ID, message);
}

void setupTele::warining(String warining, uint32_t value)
{
    char buffer[100];
    sprintf(buffer,"canh bao gia tri vuot nguong := %d !!!!!!!!\n ",value);
    bot.sendMessage(CHAT_ID,buffer);
    bot.sendMessage(CHAT_ID,warining);
    //Serial.printf("",value);
    //Serial.printf("%s\n",warining);
}