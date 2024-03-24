#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function template to find the minimum of two values
template <typename T>
T min(T a, T b)
{
    return a < b ? a : b;
}

// Function template to print two values
template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    cout << "a: " << a << " b: " << b << endl;
}

// Structure representing a person
struct person
{
    string name;
    int age;

    // Overloaded less than operator to compare persons based on age
    bool operator<(const person &p) const
    {
        return this->age < p.age;
    }
};

// Overloaded output stream operator to print person object
std::ostream &operator<<(std::ostream &out, const person &p)
{
    out << "name: " << p.name << " age: " << p.age;
    return out;
}

// Function template to swap two values
template <typename T>
void my_swap(T &a, T &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Uncomment the following code to test the functions and overloaded operators

    // person p1 = {"zhangsan", 20};
    // person p2 = {"lisi", 30};
    // person p3 = std::min(p1, p2);
    // cout << std::min<int>(1, 2) << endl;
    // cout << std::min(2.3, 1.4) << endl;
    // cout << std::min('a', 'b') << endl;
    // cout << std::min("hello", "world") << endl;
    // func<int, int>(1, 2.3);
    // func(2, 1);
    // func('a', 2);
    // func("hello", 2);
    // func(p1, p2);
    int a = 10;
    int b = 20;
    my_swap(a, b);
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}
