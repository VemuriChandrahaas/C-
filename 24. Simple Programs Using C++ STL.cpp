
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end());
    cout << "Sorted Vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    return 0;
}
Output:
Enter number of students: 3
Enter marks of 3 students:
50
60
70

Marks entered: 50 60 70 
Total Marks = 180
Average Marks = 60

Result: 
This program demonstrates the use of vectors in C++ to store and process student marks, successfully calculating and displaying the total and average marks.
