#ifndef EXERCISES321
#define EXERCISES321
#include <vector>
#include <string>
#include <iostream>
class Exercises321 {
private:
	std::vector<int> ivec;
	std::vector<std::string> svec;
	bool isIvec;//flag for which type of vector created. 0-int,1-string.
public:
	Exercises321(const std::vector<int> &vec, const bool &isint) :ivec(vec), isIvec(isint) {}
	Exercises321(const std::vector<std::string> &s, const bool &isint) :svec(s), isIvec(isint) {}
	void print() const;
};

void Exercises321::print() const {
	if (isIvec) {
		std::cout << "Size of int vector is " << ivec.size() << " and the values are: " << std::endl;
		for (auto iterator = ivec.cbegin(); iterator != ivec.cend(); ++iterator) {
			std::cout << *iterator << " ";
		}
	}
	else {
		std::cout << "Size of string vector is " << svec.size() << " and the values are: " << std::endl;
		for (auto iterator = svec.cbegin(); iterator != svec.cend(); ++iterator) {
			std::cout << *iterator << " ";
		}
	}
}
#endif // !EXERCISES321
