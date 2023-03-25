#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "mechanic.h"
#include "person.h"

class Customer : public Person {
private:
  int MechanicID;
  Appointment appointment;

public:
  Customer(string name1, int id1, int age1, int MechanicID1,
           Appointment appointment1) {
   
  }

  int get_MechanicID() const {  }
  void set_MechanicID(int MechanicID1) {  }
  Appointment get_appointment() const {  }
  void set_appointment(Appointment appointment1) {
  }

  bool operator<(const Customer &m) const {
    
  }
  bool operator>(const Customer &m) const {
    
  }
  bool operator==(const Customer &m) const {
   
  }
  void printInfo() const {
  }
};

