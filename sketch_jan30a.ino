e//atividade 1

#include "WiFi.h"

void setup() {

  Serial.begin(115200);

  Serial.println("iniciando wifi...");

  WiFi.mode(WIFI_STA);

  Serial.println("Configuração concluida!");
 
}
 
void loop() {

  Serial.println("Procurando...");
 
  int qtderedes = WiFi.scanNetworks();

  Serial.println("verificação concluida.");
 
  if (qtderedes == 0){

    Serial.println("nenhuma rede encontrada");

  }else{

    Serial.print("total de redes (s) encontada(s) :  ");

    Serial.println(qtderedes);
 
    for (int i = 0; i< qtderedes; i++) {

      Serial.print(i + 1);

      Serial.print(": ");
 
      Serial.print(WiFi.SSID(i));

      Serial.print(" - sinal (");
 
      Serial.print(WiFi.RSSI(i));

      Serial.print(") - Possui senha? ");
 
      Serial.println((WiFi.encryptionType (i) == WIFI_AUTH_OPEN) ? "Não" : "Sim");

      delay(10);

    }

    delay(5000);

  }

 
}
 
//atividade 2
 