#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    int target=4;

    //using STL function
    //first occurence of target
    auto first=lower_bound(arr.begin(),arr.end(),target);

    //Last occurence of target
    auto last=upper_bound(arr.begin(),arr.end(),target);
    if (first == arr.end() || *first != target) {
        cout << "Element is not found." << endl;
    } else {
        // Calculate total occurrences
        int totalOccurrences =  last-first; // Correct formula
        cout << "Total Occurrences of element " << target << " is: " << totalOccurrences << endl;
    }

    return 0;
}

