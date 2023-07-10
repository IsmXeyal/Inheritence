#pragma once

class Person {
private:
    string _name;
    string _surname;
    string _gender;
    int _age;

public:
    Person(string name, string surname, string gender, int age) {
        SetName(name);
        SetSurname(surname);
        SetGender(gender);
        SetAge(age);
    }

    string GetName() {
        return this->_name;
    }

    string GetSurname() {
        return this->_surname;
    }

    string GetGender() {
        return this->_gender;
    }

    int GetAge() {
        return this->_age;
    }

    void SetName(string name) {
        if (name.length() > 3) {
            this->_name = name;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetSurname(string surname) {
        if (surname.length() > 3) {
            this->_surname = surname;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetGender(string gender) {
        if (gender == "Male" || gender == "Female") {
            this->_gender = gender;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetAge(int age) {
        if (age > 18) {
            this->_age = age;
            return;
        }
        assert(!"Wrong data!");
    }

    void Show() {
        cout << "Name: " << this->GetName() << endl
            << "Surname: " << this->GetSurname() << endl
            << "Gender: " << this->GetGender() << endl
            << "Age: " << this->GetAge() << endl;
    }
};

class Employee {
private:
    string _company;
    double _salary;

public:
    Employee(string company, double salary) {
        SetCompany(company);
        SetSalary(salary);
    }

    string GetCompany() {
        return this->_company;
    }

    double GetSalary() {
        return this->_salary;
    }

    void SetCompany(string company) {
        if (company.length() > 3) {
            this->_company = company;
            return;
        }
        assert(!"Wrong data!");
    }
    
    void SetSalary(double salary) {
        if (salary > 0) {
            this->_salary = salary;
            return;
        }
        assert(!"Wrong data!");
    }

    void Show() {
        cout << "Company: " << this->GetCompany() << endl;
        cout << "Salary: " << this->GetSalary() << endl;
    }
};

class Student : public Person, public Employee {
private:
    string _university;

public:
    Student(string name, string surname, string gender, int age, string company, double salary, string university)
        : Person(name, surname, gender, age), Employee(company, salary) 
    {
        SetUni(university);
    }

    string GetUni() {
        return this->_university;
    }

    void SetUni(string university) {
        if (university.length() > 3) {
            this->_university = university;
            return;
        }
        assert(!"Wrong data!");
    }

    void Show() {
        Person::Show();
        Employee::Show();
        cout << "University: " << this->GetUni() << endl;
    }
};