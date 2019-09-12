#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    int i;
    int j;
    vector<int> v(5);
    v = {6, 1, 3, 2, 1};


    // print the unsorted v
    print(v);

    // sort v
    maxSort(v);

    // print the sorted v
    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for (int i = list.size() - 1; i >= 0; i--) {
        int current_max = 0;
        for (int j = 0; j <= i; j++) {
            if (list[j] > list[current_max]) {
                current_max = j;
            }
        }
        swap(list[i], list[current_max]);
    }
}

// swap function
void swap(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

// print function
void print(const vector<int>& list){
    int i;
    for (i = 0; i < list.size(); i++) {
        cout << list.at(i) << " ";
    }
    cout << endl;
}