#pragma once
#include <Arduino.h>

// SONOFF SNZB-01M (Orb 4-in-1) : compose l'action d'un appui (ex. "double_button_2") a partir
// de l'endpoint source (= numero du bouton) et de la valeur de l'attribut FC12/0000.
void sonoffKeyActionManage(String inifile, uint8_t endpoint, int attribute, int len, char* datas);

// Attribut sous lequel est rangee l'action d'un bouton qui envoie des COMMANDES On/Off/Toggle
// (et non des rapports d'attribut) : l'attribut 0 du cluster On/Off, comme le fait deja le
// template du bouton Aqara (24321.json, "Clic" sur 0006/0). A declarer dans le template :
// "cluster": "0006", "attribut": 0.
#define ONOFF_ACTION_ATTR 0x0000

// Bouton envoyant des commandes du cluster On/Off (ex. SONOFF SNZB-01P) : range l'action sous
// 0006/0000 (ONOFF_ACTION_ATTR), la publie (MQTT, WebPush) et declenche les regles.
void onOffCommandActionManage(String inifile, uint8_t endpoint, uint8_t command);
