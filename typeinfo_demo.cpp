#include <iostream>
#include <typeinfo>

class Base {
    virtual void dummy() {} // Make the class polymorphic
};

class Derived : public Base {};

template<typename T>
class Container {
    T value;
public:
    Container(T val) : value(val) {}
    void showType() {
        std::cout << "Container holds type: " << typeid(T).name() << std::endl;
    }
};

int main() {
    // Basic type information
    int n = 42;
    std::cout << "Type of n: " << typeid(n).name() << std::endl;
    
    // Class type information
    Base* b1 = new Base();
    Base* b2 = new Derived();
    
    std::cout << "\nDynamic type identification:" << std::endl;
    std::cout << "b1 is: " << typeid(*b1).name() << std::endl;
    std::cout << "b2 is: " << typeid(*b2).name() << std::endl;
    
    // Type comparison
    std::cout << "\nType comparison:" << std::endl;
    std::cout << "Are b1 and b2 same type? " 
              << (typeid(*b1) == typeid(*b2) ? "Yes" : "No") << std::endl;
    
    // Template type information
    Container<int> intContainer(42);
    Container<std::string> strContainer("Hello");
    
    std::cout << "\nTemplate type information:" << std::endl;
    intContainer.showType();
    strContainer.showType();
    
    // Cleanup
    delete b1;
    delete b2;
    
    return 0;
}
