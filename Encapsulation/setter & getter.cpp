#include <iostream>
using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setId(int id) {
        stu_id = id;
    }

    void setName(string name) {
        stu_name = name;
    }

    void setAge(int age) {
        stu_age = age;
    }

    void setCourse(string course) {
        stu_course = course;
    }

    void setCity(string city) {
        stu_city = city;
    }

    void setEmail(string email) {
        stu_email = email;
    }

    void setCollege(string college) {
        stu_college = college;
    }

    int getId() {
        return stu_id;
    }

    string getName() {
        return stu_name;
    }

    int getAge() {
        return stu_age;
    }

    string getCourse() {
        return stu_course;
    }

    string getCity() {
        return stu_city;
    }

    string getEmail() {
        return stu_email;
    }

    string getCollege() {
        return stu_college;
    }

    void display() {
        cout << "\nStudent ID: " << getId();
        cout << "\nName: " << getName();
        cout << "\nAge: " << getAge();
        cout << "\nCourse: " << getCourse();
        cout << "\nCity: " << getCity();
        cout << "\nEmail: " << getEmail();
        cout << "\nCollege: " << getCollege();
        cout << "\n-----------------------------\n";
    }
};

int main() {
    Student s[5];

    for (int i = 0; i < 5; i++) {
        int id, age;
        string name, course, city, email, college;

        cout << "\nEnter details for Student " << i + 1 << endl;

        cout << "ID: ";
        cin >> id;
        s[i].setId(id);

        cin.ignore();

        cout << "Name: ";
        getline(cin, name);
        s[i].setName(name);

        cout << "Age: ";
        cin >> age;
        s[i].setAge(age);

        cin.ignore();

        cout << "Course: ";
        getline(cin, course);
        s[i].setCourse(course);

        cout << "City: ";
        getline(cin, city);
        s[i].setCity(city);

        cout << "Email: ";
        getline(cin, email);
        s[i].setEmail(email);

        cout << "College: ";
        getline(cin, college);
        s[i].setCollege(college);
    }

    cout << "\n\n--- Student Records ---\n";
    for (int i = 0; i < 5; i++) {
        s[i].display();
    }

    return 0;
}