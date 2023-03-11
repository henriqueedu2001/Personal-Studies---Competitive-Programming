#include <bits/stdc++.h>

using namespace std;

/**
 * searches a element in a given vector
*/
long long int linear_search(vector<long long int> list, long long int element) {
    // iterates over the vector in order
    for(int i = 0; i < list.size(); i++){
        if(list[i] == element)
            return i;
    }

    // element not found
    return -1;
}