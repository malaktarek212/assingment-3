#ifndef PERSON_H
#define PERSON_H

class Person {
protected:
  string name;
  int id;
  int age;

public:
  Person() {}
  Person(string name1, int id1, int age1) {
  }
  string get_name() const {  }
  void set_name(string name1) {  }
  int get_id() const {  }
  void set_id(int id1) {  }

  int get_age() const { }
  void set_age(int age1) {  }

  void printinfo() const {
  }
};
