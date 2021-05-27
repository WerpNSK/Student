#pragma once
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

class date {
	int day;
	int month;
	int year;
public:
	date(int d = 0, int m = 0, int y = 0) {}
	date(const date& d) {
		this->day = d.day;
		this->month = d.month;
		this->year = d.year;
	}
	~date() {
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
	date(date&& d) {}
	date& operator=(date&& d) {
		if (this == &d)
			return *this;
		this->day = d.day;
		this->month = d.month;
		this->year = d.year;
		return *this;
	}
	date operator+=(int d) {
		this->day = this->day + d;
		if (this->day > 30) {}

	}
	date operator+=(const date& d) {}
	date operator-=(int d) {}
	date operator-=(const date& d) {}

	void inputDate() {
		cout << "Day: ";
		cin >> this->day;
		cout << "Month: ";
		cin >> this->month;
		cout << "Year: ";
		cin >> this->year;
	}

	void infoDate() {
		cout << " Birthday: " << this->day << ":" << this->month << ":" << this->year;
	}
};

