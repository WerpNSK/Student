#include <iostream>
#include <string>
#include "student.h"
#include "date.h"
using namespace std;

void main() {
	student st;
	date dt;
	st.setName("Vasy");
	st.setGroupName("first");
	st.addMarks(5);
	st.addMarks(4);
	st.addMarks(3);
	st.addMarks(2);
	dt.inputDate();
	st.info();
	dt.infoDate();


	system("pause");
}