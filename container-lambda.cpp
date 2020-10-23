#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::function<std::string(const std::string&)>> vecFilters;

    vecFilters.emplace_back([](const std::string& x) { 
        return x + " Amazing"; 
    });
    vecFilters.emplace_back([](const std::string& x) { 
        return x + " Modern"; 
    });
    vecFilters.emplace_back([](const std::string& x) { 
        return x + " C++"; 
    });
    vecFilters.emplace_back([](const std::string& x) { 
        return x + " World!"; 
    });

    const std::string str = "Hello";
    auto temp = str;

    for (auto &entryFunc : vecFilters)  
        temp = entryFunc(temp);

    std::cout << temp;
}