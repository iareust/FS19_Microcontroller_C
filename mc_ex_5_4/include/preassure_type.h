#ifndef PREASSURE_TYPE_H
#define PREASSURE_TYPE_H

typedef enum PressureEntity_{MEGA, KILO, ZERO, MILLI, MICRO} PressureEntity_type;

typedef struct PressureMeasurements_{
  float value;
  PressureEntity_type entity;
} PressureMeasurements_type;


#endif
