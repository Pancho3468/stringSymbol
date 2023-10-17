
#include <iostream>
#include <string>

int main()
{
    std::string Animal = "giraffe";
    std::cout << Animal << "\n";
    std::cout << "In the word " << " " << Animal.length() << " Symbols" << "\n";
    std::cout << "First character of the line = " << Animal.front() << "\n";
    std::cout << "Last syllable of the line = " << Animal.back() << "\n";
    return 0;

}
