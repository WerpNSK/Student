#pragma once
#include <iostream>
#include <string>
using namespace std;

class student {
	string name;
	string groupName;
	int* marks;
	int sizeMarks;
public:
	student() {
		this->name = "Petya";
		this->groupName = "pv014";
		this->marks = nullptr;
		this->sizeMarks = 0;
	}
	student(string name, string groupName) {
		this->name = name;
		this->groupName = groupName;
		this->marks = nullptr;
		this->sizeMarks = 0;
	}
	~student() {
		if (marks != nullptr)
			delete[]this->marks;
		this->marks = nullptr;
		this->sizeMarks = 0;
	}

	inline string getName() const { return this->name; }
	inline string getGroupName() const { return this->groupName; }
	inline int getCountMarks() const { return this->sizeMarks; }


	void setName(string name) {
		this->name = name;
	}
	void setGroupName(string groupName) {
		this->groupName = groupName;
	}

	void info() const {
		cout << "Name: " << this->name << " Group: " << this->groupName << "  Marks: ";
		for (size_t i = 0; i < this->sizeMarks; i++)
		{
			cout << this->marks[i] << " ";
		}
	}

	void addMarks(int mark) {
		if (this->marks == nullptr)
		{
			this->marks = new int[1];
			this->marks[0] = mark;
			this->sizeMarks = 1;
		}
		else
		{
			int* tmpMarks = new int[this->sizeMarks + 1];
			for (size_t i = 0; i < this->sizeMarks; i++)
			{
				tmpMarks[i] = this->marks[i];
			}
			tmpMarks[this->sizeMarks] = mark;
			delete[]this->marks;
			this->marks = tmpMarks;
			this->sizeMarks++;
		}

	}

	student(const student& st) {
		this->name = st.name;
		this->groupName = st.groupName;
		this->sizeMarks = st.sizeMarks;
		this->marks = new int[st.sizeMarks];
		for (size_t i = 0; i < st.sizeMarks; i++)
		{
			this->marks[i] = st.marks[i];
		}
	}


};
