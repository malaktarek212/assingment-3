#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Mechanic.h"

class Mechanic : public Person {
private:
  int counter;
  Appointment appointments[10]; // Array of struct Appointment

public:
  Mechanic() {}
  Mechanic(string name1, int id1, int age1, int counter1,
           Appointment appointments1[])
      : Person(name, id, age), counter(counter1) {
  }
  int getCounter() const { }
  void setCounter(int counter1) {  }
  bool isAvailable(Appointment appointment1, Appointment appointment2) const {
    

};

