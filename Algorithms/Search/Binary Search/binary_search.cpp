#include <bits/stdc++.h>

using namespace std;

/**
 * searches a element in a given vector
 * returns the index of the element, if it exists, or -1, otherwise
*/
int binary_search(vector<int> list, int element, int left, int right) {
    int middle = (left + right)/2;
    
    if (left > right){
        // element not found
        return -1;
    } else {
        // element is on the left or on the right of the middle
        if(element > list[middle])
            return binary_search(list, element, middle + 1, right);
        else if(element < list[middle])
            return binary_search(list, element, left, middle - 1);
    }

    // element found; index = middle
    return middle;
}

int find(vector<int> list, int element) {
    return binary_search(list, element, 0, list.size() - 1);
}