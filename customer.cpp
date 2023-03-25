#include "Customer.h"
#include <iostream>

class Customer : public Person {
private:
  int MechanicID;
  Appointment appointment;

public:
  Customer(string name1, int id1, int age1, int MechanicID1,
           Appointment appointment1) {
    MechanicID = MechanicID1;
    appointment = appointment1;
  }

  int get_MechanicID() const { return MechanicID; }
  void set_MechanicID(int MechanicID1) { MechanicID = MechanicID1; }
  Appointment get_appointment() const { return appointment; }
  void set_appointment(Appointment appointment1) {
    appointment = appointment1;
  }

  bool operator<(const Customer &m) const {
    if (appointment.hours < m.appointment.hours)
      return true;
    else if (appointment.hours == m.appointment.hours &&
             appointment.min < m.appointment.min)
      return true;
    else
      return false;
  }
  bool operator>(const Customer &m) const {
    if (appointment.hours > m.appointment.hours)
      return true;
    else if (appointment.hours == m.appointment.hours &&
             appointment.min > m.appointment.min)
      return true;
    else
      return false;
  }
  bool operator==(const Customer &m) const {
    return appointment.hours == m.appointment.hours &&
           appointment.min == m.appointment.min;
  }
  void printInfo() const {
    cout << "Mechanic ID: " << MechanicID << endl;
    cout << "Appointment: " << appointment.hours << ":" << appointment.min
         << endl;
  }
};
