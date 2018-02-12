#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>
//Exercise 7.12 Move declartions ahead of definitions then move the constructor which takes istream into the struct definition body.
struct Sales_data;
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);

struct Sales_data {
	//Exercise 7.14 explicitly initialize members in default constructer.
	Sales_data():bookNo(), units_sold(0), revenue(0.0) {}
	Sales_data(const std::string &bookno) :bookNo(bookno) {}
	Sales_data(const std::string &bookno, unsigned unitsSold, double unitPrice) :bookNo(bookno), units_sold(unitsSold), revenue(unitsSold*unitPrice) {}
	Sales_data(std::istream &is) {
		read(is, *this);
	}
	std::string bookNo;
	unsigned units_sold;
	double revenue;

	std::string isbn() const {
		return bookNo;
	}
	double avg_price() const;
	Sales_data& combine(const Sales_data&);
};

double Sales_data::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}
	return 0;
}

Sales_data& Sales_data::combine(const Sales_data &other) {
	units_sold += other.units_sold;
	revenue += other.revenue;
	return *this;
}
//read bookNo,units_sold and unit price sequentially.
std::istream &read(std::istream &is, Sales_data &item) {
	double unit_price = 0.0;
	is >> item.bookNo >> item.units_sold >> unit_price;
	item.revenue = unit_price * item.units_sold;
	return is;
}
//print bookNo, units_sold, revenue, average price.
std::ostream& print(std::ostream &os, const Sales_data &item) {
	os << item.bookNo << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &data1, const Sales_data &data2) {
	Sales_data sum = data1;
	sum.combine(data2);
	return sum;
}
#endif
