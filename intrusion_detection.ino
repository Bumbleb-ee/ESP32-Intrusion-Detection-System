#include<WiFi.h>
#include<WiFiClientSecure.h>
#include<UniversalTelegramBot.h>
#include<ArduinoJson.h>
const char* ssid     = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
String botToken      = "YOUR_BOT_TOKEN";
String chatID        = "YOUR_CHAT_ID";

int pirPin = 13;

// --- Telegram setup ---
WiFiClientSecure client;
UniversalTelegramBot bot(botToken, client);

// --- Timing ---
bool motionSent = false;

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);

  // Connect to WiFi
  Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n✅ WiFi Connected!");

  client.setInsecure();
    bot.sendMessage(chatID, "✅ Intrusion Detection System is ONLINE!", "");
  Serial.println("System Online!");
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH && motionSent == false) {
    Serial.println("🚨 Motion Detected!");
    bot.sendMessage(chatID, "🚨 ALERT: Motion Detected!", "");
    motionSent = true;
    delay(5000);  // Wait 5 seconds before next alert
  }

  if (motion == LOW) {
    motionSent = false;  // Reset when motion stops
  }
}
