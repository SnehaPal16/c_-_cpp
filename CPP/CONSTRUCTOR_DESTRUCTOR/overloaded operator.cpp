#include <iostream>
using namespace std;
#include <string>

class Employee {
public:
    Employee(const string& name, double salary): 
		name(name), salary(salary) {}

    bool operator<(const Employee& other) const {
        return salary < other.salary;
    }
    std::string getName() const {
        return name;
    }
    double getSalary() const {
        return salary;
    }

private:
    string name;
    double salary;
};

int main() {
    Employee employee1("Shivansh", 50000);
    Employee employee2("Sneha", 60000);

    if (employee1 < employee2) {
        cout << employee1.getName() << " earns less than " << employee2.getName() << endl;
    } else {
        cout << employee1.getName() << " earns more than or equal to " << employee2.getName() << endl;
    }

    return 0;
}

