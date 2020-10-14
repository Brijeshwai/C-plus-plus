#include <iostream>
#include <sstream>

using namespace std;

class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
        Student()
        {
        age;
        first_name;
        last_name;
        standard;
        }
    void set_age(int Age)
    {
    age=Age;
    }
    void set_first_name(string First_name)
    {
    first_name=First_name;
    }
    void set_last_name(string Last_name)
    {
    last_name=Last_name;
    }
    void set_standard(int Standard)
    {
    standard=Standard;
    }

    int get_age() {return age;}
    string get_first_name() {return first_name;}
    string get_last_name() {return last_name;}
    int get_standard() {return standard;}

    string to_string()
    {
        stringstream SS;
        char c=',';
        SS<<age<<c<<first_name<<c<<last_name<<c<<standard;
        return SS.str();
    }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
