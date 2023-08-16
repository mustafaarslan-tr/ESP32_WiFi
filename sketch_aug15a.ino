#include <WiFi.h>

const char* preferredSSID = "WIFI_SSID";          // Tercih edilen WiFi ağı adı
const char* preferredPassword = "WIFI_PASSWORD";  // Tercih edilen WiFi şifresi
const char* newSSID = "NewWifiName";          // Yeni WiFi ağı adı
const char* newPassword = "123456";               // Yeni WiFi şifresi
const int newChannel = 1;                         // Yeni WiFi kanalı
unsigned long startTime;

void setup() {
  Serial.begin(115200);

  // Öncelikli WiFi ağına bağlanma denemesi
  WiFi.begin(preferredSSID, preferredPassword);

  Serial.print("WiFi'ye bağlanmaya çalışıyor");
  startTime = millis();  // Başlangıç zamanını kaydet

  while (WiFi.status() != WL_CONNECTED && millis() - startTime < 1000) {
    delay(1000);
    Serial.print(".");
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWiFi'ye başarıyla bağlandı.");
  } else {
    Serial.println("\nTercih edilen WiFi'ye bağlanılamadı.");
    Serial.println("Yeni WiFi ağı açılıyor...");

    // Yeni WiFi erişim noktası oluşturma
   // WiFi.softAPConfig(IPAddress(192, 168, 1, 1), IPAddress(192, 168, 1, 1), IPAddress(255, 255, 255, 0));
    WiFi.softAP(newSSID, newPassword, newChannel);

    Serial.print("Hotspot oluşturuldu! IP adresi: ");
    Serial.println(WiFi.softAPIP());
  }
}

void loop() {
  // Ekstra işlemler buraya eklenebilir
}
