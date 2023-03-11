#include <bits/stdc++.h>

using namespace std;

/**
 * searches a element in a given vector
 * returns the index of the element, if it exists, or -1, otherwise
*/
int linear_search(vector<int> list, int element) {
    // iterates over the vector in order
    for(int i = 0; i < list.size(); i++){
        if(list[i] == element)
            return i;
    }

    // element not found
    return -1;
}