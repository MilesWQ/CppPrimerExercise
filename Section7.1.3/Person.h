#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include<iostream>

struct Person {
	std::string name;
	std::string address;
	std::string getName()const;
	std::string getAddress()const;
};
std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);

std::string Person::getName()const {
	return name;
}

std::string Person::getAddress()const {
	return address;
}

std::istream& read(std::istream &is, Person &person) {
	is >> person.name >> person.address;
	return is;
}

std::ostream& print(std::ostream &os, const Person &person) {
	os << person.getName() << " " << person.getAddress();
	return os;
}
#endif