#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
public:
    Student() {}

    void set_age(int aage) { age = aage; }
    void set_standard(int sstandard) { standard = sstandard; }
    void set_first_name(string ffirst_name) { first_name = ffirst_name; }
    void set_last_name(string llast_name) { last_name = llast_name; }
    string to_string(){
        string st_info = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        return st_info;
    }

    int get_age() const { return age; }
    int get_standard() const { return standard; }
    string get_first_name() const { return first_name; }
    string get_last_name() const { return last_name; }

private:
    int age;
    string first_name;
    string last_name;
    int standard;
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
