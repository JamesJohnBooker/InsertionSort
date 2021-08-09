#include <iostream>
#include <vector>

using namespace std;

int doOneInsertion(vector<double>& v, int n) { //Performs one iteration of the insertion sort algorithm, starting at the n-th index position.
    int comparisons = 0; //comparisons stores and tracks the number of comparisons made between the numbers in the list during this iteration of the insertion sort.
    for (int i = n; i > 0; i--) { //If n = 0, then this is the first number to be sorted and so no comparisons are needed. Otherwise, the number in the n-th index position is sorted into place.
        comparisons++; //comparisons is iterated.
        if (v[i] > v[i - 1]) { //If the number we are currently sorting is larger than the one to its immediate left in the list, then their positions are swapped.
            int x = v[i - 1];
            v[i - 1] = v[i];
            v[i] = x;
        }
        else { //If the number we are currently sorting is smaller than or equal to the one to its immediate left in the list, then it has been sorted.
            break;
        }
    }
    return comparisons; //The number of comparisons made during this iteration of the insertion sort is returned to insertionSort.
}

int insertionSort(vector<double>& v) { //Performs insertion sort on a list of number to arrange them from highest to lowest, tracking the total number of comparisons made throughout the process.
    int comparisons = 0; //comparisons stores and tracks the number of comparisons made between the numbers in the list throughout the entire insertion sort process.
    for (int i = 0; i < v.size(); i++) {
        comparisons += doOneInsertion(v, i); //The i-th item in the list is organised by performing insertion sort and comparisons is increased by the number of comparisons required to sort it.
    }
    return comparisons; //Once the list is sorted the total number of comparisons is returned.
}

int main() {
    return 0;
}
