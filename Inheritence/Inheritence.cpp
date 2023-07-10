#include<iostream>
#include<cassert>

using namespace std;

//#include"Singleinheritance.h"
//#include"Multilevel.h"
//#include"Hierarchical_inheritance.h"
#include"Multiple.h"

int main() {

	/*Person** list = new Person * [3];
	list[0] = new Student("Name_1", "Surname_1", "Male", 20, 97);
	list[1] = new Student("Name_2", "Surname_2", "Female", 15, 45);
	list[2] = new Student("Name_3", "Surname_3", "Male", 18, 78);

	for (int i = 0; i < 3; i++) {
		((Student*)list[i])->Show();
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		delete list[i];
	}
	delete[] list;*/

	/*Person** list = new Person * [3];
	list[0] = new University("Name_1", "Surname_1", "Male", 20, 97, "BMU");
	list[1] = new University("Name_2", "Surname_2", "Female", 15, 45, "ADNSU");
	list[2] = new University("Name_3", "Surname_3", "Male", 18, 78, "Xezer");

	for (int i = 0; i < 3; i++) {
		((University*)list[i])->Show();
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		delete list[i];
	}
	delete[] list;*/

	/*Person person("Name_1", "Surname_1", "Male", 20);
	person.Show();
	cout << endl;

	Student student("Name_2", "Surname_2", "Female", 19, "Computer Science");
	student.Show();
	cout << endl;

	Teacher teacher("Name_3", "Surname_3", "Female", 34, "Mathematics");
	teacher.Show();
	cout << endl;*/

	Student student("Name_1", "Surname_1", "Male", 20, "Tesla", 10000, "Oxford");
	student.Show();

	return 0;
}