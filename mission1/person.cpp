#include <iostream>
#include <string>
using namespace std;
class Person {
    private:
        string name;
        int age;
    public:
        Person(const string& personName, int personAge) {
            name=personName;
            age=personAge;
        }
        void display() const {
            cout<<"name:"<<name<<" age:"<<age<<endl;
        }
};

int main() {
    Person p1("张三",4);
    Person p2("mike",41);
    p1.display();
    p2.display();
    return 0; 
}