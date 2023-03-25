#include "Customer.h"
#include <iostream>

class Mechanic : public Person {
private:
  int counter;
  Appointment appointments[10]; // Array of struct Appointment

public:
  Mechanic() {}
  Mechanic(string name1, int id1, int age1, int counter1,
           Appointment appointments1[])
      : Person(name, id, age), counter(counter1) {
    counter = counter1;
    for (int i = 0; i < counter; i++) {
      appointments[i] = appointments1[i];
    }
  }
  int getCounter() const { return counter; }
  void setCounter(int counter1) { counter = counter1; }
  bool isAvailable(Appointment appointment1, Appointment appointment2) const {
    for (Appointment app : appointments) {
      if (appointment1.hours == appointment2.hours &&
          appointment1.min == appointment2.min) {
        return false;
      }
    }
    return true;
  }
};
