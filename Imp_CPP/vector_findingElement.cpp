#include <iostream>

#include <vector>

#include <algorithm>

int main() {

std::vector<int> numbers = {10, 20, 30, 40, 50};

// Find the element 30 in the vector

auto it = std::find(numbers.begin(), numbers.end(), 30);

// Check if the element was found

if (it != numbers.end()) {

std::cout << "Element found at index: " << std::distance(numbers.begin(), it) << std::endl;

} else {

std::cout << "Element not found." << std::endl;}

return 0;

}