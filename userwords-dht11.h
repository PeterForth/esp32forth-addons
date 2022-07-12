#include "DHTesp.h"
DHTesp dht;
void setupdht11(){
dht.setup(13, DHTesp::DHT11);
}
int readtemp( int val  ){
    float temperature = dht.getTemperature();
      val = temperature * 100;  
    return val;
}
int readhumid( int  val  ){
     float humidity = dht.getHumidity();
     val = humidity * 100; 
   return val;
}

