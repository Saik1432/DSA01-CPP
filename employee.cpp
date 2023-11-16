#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(const std::string& n, int d, double s)
        : name(n), id(d), salary(s) {}
    const std::string& getName() const {
        return name;
    }

    void setName(const std::string& n) {
        name = n;
    }
    int getID() const {
        return id;
    }

    void setID(int d) {
        id = d;
    }
    double getSalary() const {
        return salary;
    }

    void setSalary(double s) {
        salary = s;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(const std::string& n, int d, double s, const std::string& dept, double b)
        : Employee(n, d, s), department(dept), bonus(b) {}

    const std::string& getDepartment() const {
        return department;
    }

    void setDepartment(const std::string& dept) {
        department = dept;
    }
    double getBonus() const {
        return bonus;
    }

    void setBonus(double b) {
        bonus = b;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(const std::string& n, int d, double s, const std::string& sp, int h)
        : Employee(n, d, s), specialty(sp), hours(h) {}
    const std::string& getSpecialty() const {
        return specialty;
    }

    void setSpecialty(const std::string& sp) {
        specialty = sp;
    }
    int getHours() const {
        return hours;
    }

    void setHours(int h) {
        hours = h;
    }
};

int main() {
    Manager manager("John", 101, 75000.0, "HR", 5000.0);
    Engineer engineer("Alice", 102, 80000.0, "Software", 40);

    std::cout << "Manager Name: " << manager.getName() << std::endl;
    std::cout << "Manager ID: " << manager.getID() << std::endl;
    std::cout << "Manager Salary: " << manager.getSalary() << std::endl;
    std::cout << "Manager Department: " << manager.getDepartment() << std::endl;
    std::cout << "Manager Bonus: " << manager.getBonus() << std::endl;

    std::cout << "Engineer Name: " << engineer.getName() << std::endl;
    std::cout << "Engineer ID: " << engineer.getID() << std::endl;
    std::cout << "Engineer Salary: " << engineer.getSalary() << std::endl;
    std::cout << "Engineer Specialty: " << engineer.getSpecialty() << std::endl;
    std::cout << "Engineer Hours: " << engineer.getHours() << " hours" << std::endl;

    return 0;
}

