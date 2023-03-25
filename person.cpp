#include "person.h"
class Person {
protected:
  string name;
  int id;
  int age;

public:
  Person() {}
  Person(string name1, int id1, int age1) {
    name = name1;
    id = id1;
    age = age1;
  }
  string get_name() const { return name; }
  void set_name(string name1) { name = name1; }
  int get_id() const { return id; }
  void set_id(int id1) { id = id1; }

  int get_age() const { return age; }
  void set_age(int age1) { age = age1; }

  void printinfo() const {
    cout << "Name: " << name << ", ID: " << id << ", Age: " << age;
  }
};
