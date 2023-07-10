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
//    string _success;
//    float _ave;
//
//public:
//    Student(string name, string surname, string gender, int age, float ave)
//        : Person(name, surname, gender, age)
//    {
//        SetAve(ave);
//        SetSuccess(ave);
//    }
//
//    string GetSuccess() {
//        return this->_success;
//    }
//
//    float GetAve() {
//        return this->_ave;
//    }
//
//    void SetAve(float ave) {
//        if (ave > 0 && ave <= 100) {
//            this->_ave = ave;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void SetSuccess(float ave) {
//        if (ave > 90 && ave <= 100) {
//            this->_success = "Excellent!";
//        }
//        else if (ave > 70 && ave <= 90) {
//            this->_success = "Good!";
//        }
//        else if (ave > 50 && ave <= 70) {
//            this->_success = "Weak but you passed!";
//        }
//        else {
//            this->_success = "You failed!:(";
//        }
//    }
//
//    void Show() {
//        cout << "Student Info:" << endl;
//        Person::Show();
//        cout << "Total Average: " << this->GetAve() << endl
//            << "Your Success: " << this->GetSuccess() << endl;
//    }
//};
//
//class University : public Student {
//private:
//    string _uni;
//
//public:
//    University(string name, string surname, string gender, int age, float ave, string uni)
//        : Student(name, surname, gender, age, ave)
//    {
//        SetUniversity(uni);
//    }
//
//    string GetUniversity() {
//        return this->_uni;
//    }
//
//    void SetUniversity(string uni) {
//        if (uni.length() > 2) {
//            this->_uni = uni;
//            return;
//        }
//        assert(!"Wrong data!");
//    }
//
//    void Show() {
//        Student::Show();
//        cout << "University: " << this->GetUniversity() << endl;
//    }
//};