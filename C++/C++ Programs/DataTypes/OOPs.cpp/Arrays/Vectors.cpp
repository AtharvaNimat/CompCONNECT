// #include <iostream>
// #include <vector>

// int main() {
//     // Create a vector of integers
//     std::vector<int> numbers;

//     // Add elements to the vector
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);

//     // Display the elements
//     std::cout << "Vector elements: ";
//     for (int num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Remove the last element
//     numbers.pop_back();

//     // Display the elements after removal
//     std::cout << "After pop_back, vector elements: ";
//     for (int num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Access element at index 0
//     std::cout << "First element: " << numbers[0] << std::endl;

//     // Get the size of the vector
//     std::cout << "Vector size: " << numbers.size() << std::endl;

//     return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    std::vector<int> v(5);
    int i;
    for(i = 0; i<v; i++){
        cin>>v[i];
    }
    for(i = 0; i<v; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(i = 0; i<v; i++){
        cin>>v[i]<<" ";
    }
    cout<<endl;
}

