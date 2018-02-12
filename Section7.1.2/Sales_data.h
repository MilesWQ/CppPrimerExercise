#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	std::string isbn() const {
		return bookNo;
	}

	Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data &other) {
	units_sold += other.units_sold;
	revenue += other.revenue;
	return *this;
}
#endif
