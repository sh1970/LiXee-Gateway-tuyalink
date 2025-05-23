void getBind(uint64_t mac, int device_id, String model);
void getConfigReport(uint8_t shortAddr[2], int device_id, String model);
bool getPollingDevice(uint8_t shortAddr[2], int device_id, String model);
void SpecificTreatment(uint8_t shortAddr[2], String model);
String getLinkyDatas(String IEEE);
String getLinkyMode(int mode);
String getPowerGaugeAbo(String IEEE, String Attribute, String Time);
String getLastValuePower(String IEEE,String Attribute, String Time);
String getTrendPower(String IEEE,String Attribute, String Time);
String getDatasPower(String IEEE,String Attribute, String Time);
String getTrendEnergyEuros(String IEEE);
String getPowerGaugeTimeDay(String IEEE, String Attribute);
String getPowerDatas( String IEEE, String type, String Attribute, String time);
float getTarif(int attribute, String Type);
float getTarifPower(String IEEE, int power);
String getZigbeeValue(String IEEE, String cluster, String attribute);
String getDeviceStatus(String IEEE);



void SendBind(uint64_t mac, int cluster);
void SendDeleteDevice(uint64_t mac);
void SendConfigReport(uint8_t shortAddr[2], int cluster, int attribut, int type, int rmin, int rmax, int rtimeout, uint8_t rchange);
void SendAttributeRead(int shortAddr, int cluster, int attribut);
void SendAction(int command, int ShortAddr, String tmpValue);
void SendActiveRequest(uint8_t shortAddr[2]);
void SendSimpleDescriptionRequest(uint8_t shortAddr[2], uint8_t endpoint);
void SendBasicDescription(uint8_t shortAddr[2], uint8_t endpoint);
//void readZigbeeDatas(uint8_t ShortAddr[2],uint8_t Cluster[2],uint8_t Attribute[2], uint8_t DataType,int len, char* datas);
void readZigbeeDatas(String filename,uint8_t Cluster[2],uint8_t Attribute[2], uint8_t DataType,int len, char* datas);
