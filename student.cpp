#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int grade;
    public:
        // Constructor
        Student() : name("Unknown"), age(0), grade(0) {}
        Student(string n, int a, int g){
            name = n;
            age = a > 0 ? a : 0;
            grade = (g > 0 && g <= 100) ? g : 0;
        }
        // Setter
        void setName(string n) { name = n; }
        void setAge(int a){ age = a > 0 ? a : 0; }
        void setGrade(int g){ grade = (g > 0 && g <= 100) ? g : 0;}

        // Getter
        string getName(){ return name; }
        int getAge(){ return age; }
        int getGrade(){ return grade; }
        
        // Display Students Infos
        void display(){
            cout << "Name: " << name <<
            ", Age: " << age << 
            ", Grade: " << grade << endl;
        }

};

int main(){

    Student stu1;
    Student stu2("Mehdi", 23, 87);
    Student stu3;
    Student stu4;
    Student stu5("solmaz", 0, 0);

    stu3.setName("Alice");
    stu3.setAge(24);
    stu3.setGrade(95);

    stu4.setName("Alita");
    stu4.setAge(0);
    stu4.setGrade(0);

    cout << "Student 1:\n";
    stu1.display();
    cout << "Student 2:\n";
    stu2.display();
    cout << "Student 3:\n";
    stu3.display();
    cout << "Student 4:\n";
    stu4.display();
    cout << "Student 5:\n";
    stu5.display();

    return 0;
}
