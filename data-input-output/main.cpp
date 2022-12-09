#include <iostream>
#include <string>

int main(){
    std::cout << "Learning how to use Data Input and Output" << std::endl;

    int age{21};
    std::cout << "Please enter your age: " << std::endl;
    
    std::cerr << "Error message: Something is Wrong" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    int data_age;
    std::string data_name;

    std::cout << "Please enter your name and age: " << std::endl;

    std::cin >> data_name;
    std::cin >> data_age;

    std::cout << "Welcome " << data_name << ", you are " << data_age << " years old." << std::endl;

    return 0;    
}