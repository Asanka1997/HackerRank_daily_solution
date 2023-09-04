#include <iostream>
#include <vector>

using namespace std;

//solution for the function code is here...
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    vector<int>resultsVect(queries.size());
    int size = a.size();
    while (k) {
        a.insert(a.begin(), a[size-1]);
        a.pop_back();
        k--;
    }
    for (int i = 0; i < queries.size(); i++) {
        int index = queries[i];
        resultsVect[i] = a[index];
    }

    return resultsVect;

}

int main() {
    //Please try to edit the below input and get your solutions... 

    vector<int> ar = { 12,23,45,2,3,4,5,1,9,0,9 };
    int k=3;
    vector<int> queries = { 1,2,8 };

    vector<int>res = circularArrayRotation(ar, k, queries);
    for (int i=0; i< res.size();i++) {
        cout << res[i]<<" ";
    }
    return 0;

}