#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MIN_THRESHOLD_BATT_TEMP 0
#define MAX_THRESHOLD_BATT_TEMP 45
#define MIN_THRESHOLD_BATT_SoC 20
#define MAX_THRESHOLD_BATT_SoC 80
#define MAX_THRESHOLD_BATT_CHARGE_RATE 0.8 

void validityCheck (int validity, char* param);
int checkBatteryTemperature(float temperature);
int checkBatterySoC(float SoC);
int checkBatteryChargeRate(float chargeRate);
int rangeConditionCheck(float param, int min_threshold, int max_threshold);
int limitConditionCheck(float param, float max_threshold);
