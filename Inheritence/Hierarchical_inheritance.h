#pragma once

//class Person {
//private:
//    string _name;
//    string _surname;
//    string _gender;
//    int _age;
//
//public:
//    Person(string name, string surname, string gender, int age) {
//        SetName(name);
//        SetSurname(surname);
//        SetGender(gender);
//        SetAge(age);
//    }
//
//    string GetName() {
//        return this->_name;
//    }
//
//    string GetSurname() {
//        return this->_surname;
//    }
//
//    string GetGender() {
//        return this->_gender;
//    }
//
//    int GetAge() {
//        return this->_age;
//    }
//
//    void SetName(string name) {
//        if (name.length() > 3) {
//            this->_name = name;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void SetSurname(string surname) {
//        if (surname.length() > 3) {
//            this->_surname = surname;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void SetGender(string gender) {
//        if (gender == "Male" || gender == "Female") {
//            this->_gender = gender;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void SetAge(int age) {
//        if (age > 12) {
//            this->_age = age;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void Show() {
//        cout << "Name: " << this->GetName() << endl
//            << "Surname: " << this->GetSurname() << endl
//            << "Gender: " << this->GetGender() << endl
//            << "Age: " << this->GetAge() << endl;
//    }
//};
//
//class Student : public Person {
//private:
//    string _faculty;
//
//public:
//    Student(string name, string surname, string gender, int age, string faculty)
//        : Person(name, surname, gender, age) 
//    {
//        SetFaculty(faculty);
//    }
//
//    string GetFaculty() {
//        return this->_faculty;
//    }
//
//    void SetFaculty(string faculty) {
//        if (faculty.length() > 3) {
//            this->_faculty = faculty;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void Show() {
//        Person::Show();
//        cout << "Faculty: " << this->GetFaculty() << endl;
//    }
//};
//
//class Teacher : public Person {
//private:
//    string _subject;
//
//public:
//    Teacher(string name, string surname, string gender, int age, string subject)
//        : Person(name, surname, gender, age) 
//    {
//        SetSubject(subject);
//    }
//
//    string GetSubject() {
//        return this->_subject;
//    }
//
//    void SetSubject(string subject) {
//        if (subject.length() > 3) {
//            this->_subject = subject;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void Show() {
//        Person::Show();
//        cout << "Subject: " << this->GetSubject() << endl;
//    }
//};
