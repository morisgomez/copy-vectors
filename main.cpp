#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> days = {4, 3, 5, 6};
    vector<int> days2 = days; //copies vector values into days2 vector.
    cout << days2[0] << endl;

    vector<int> hours = {1, 2, 3, 4};
    vector<int> hours2 = {5, 6, 7, 8, 9, 10};
    hours = hours2; //we copy a larger vector into a smaller one. notice how the vector size adjusts.
    cout << hours[5]; //vector self-created new elements.
    return 0;
}
