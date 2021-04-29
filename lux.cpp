#include <iostream>


void advancedRead()
{
  tsl2591Gain_t g[] = {TSL2591_GAIN_MAX, TSL2591_GAIN_HIGH};
  int h[] = {1, 25};
  tsl2591IntegrationTime_t t[] = {TSL2591_INTEGRATIONTIME_600MS, TSL2591_INTEGRATIONTIME_500MS};
  int u[] = {600, 500};

  Ko = <a définir !>

  uint32_t lum = tsl.getFullLuminosity();
  uint16_t raw_data, lux;
  raw_data = lum & 0xFFFF;
  
  if (check_conf_t == t[0] && check_conf_g == g[0])
  {
    if (raw_data < 60000)
    {
        configure_sensor(g[1], t[1]);
        uint32_t lum = tsl.getFullLuminosity();
        raw_data = lum & 0xFFFF;
        lux = Ko * h[1] * u[1];
    }
    lux = Ko * h[0] * u[0];
  }
  else if (check_conf_t == t[1] && check_conf_g == g[1])
  {
    if (raw_data > 10000)
    {
        configure_sensor(g[0], t[0]);
        uint32_t lum = tsl.getFullLuminosity();
        raw_data = lum & 0xFFFF;
        lux = Ko * h[0] * u[0];
    }
    lux = Ko * h[1] * u[1];
  }

  Serial.print(lux);
}




int main(void) {
  std::cout << "wesh alors chacal" << std::endl;
  return 0;
}