/* A magic square is a square matrix with distinct positive integers ranging from 1 to n ^ 2, where the sum of any row, column, or diagonal of length n is always equal to the same number, known as the "magic constant."

You are given a square matrix of size n x n, where the integers fall within the range 1 to n ^ 2. Your task is to convert this matrix into a magic square while minimizing the cost.The cost of converting one digit to another within the range 1 to n ^ 2 is given as the absolute difference between the two digits.

Here's how you can achieve this:

1. Determine the magic constant :

The magic constant for an n x n magic square is(n * (n ^ 2 + 1)) / 2.
2. Generate all possible magic squares :

Create a list of all possible magic squares of size n x n with distinct integers from 1 to n ^ 2.
For n = 3, there are 8 possible magic squares.
3. Calculate the cost for each possible magic square :

For each possible magic square, calculate the cost by comparing it to the given matrix.To do this, find the absolute difference between the corresponding elements of the two matrices and sum these differences.
4. Choose the magic square with the minimum cost :

Select the magic square from the list with the lowest cost.
5. Print the minimum cost :

Print the cost of converting the given matrix into the selected magic square.
This process ensures that you convert the given matrix into a magic square with distinct integers from 1 to n ^ 2 while minimizing the cost of converting the digits.
*/

//This is a sample solution in CPP #HackerRank https://www.hackerrank.com/challenges/magic-square-forming/problem

// In this code we are considerring n=3, so the possiblites will be 8. Because of the 2^3=8

//main.cpp

#include <iostream>
#include <vector>

using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    vector<int>result = {};
    int minimum_cost{ 100000 };

    vector<vector<int>> s1 = { {8,3,4},
                            {1,5,9},
                            {6,7,2} };

    vector<vector<int>> s2 = { {6,7,2},
                            {1,5,9},
                            {8,3,4} };

    vector<vector<int>> s3 = { {4,3,8},
                            {9,5,1},
                            {2,7,6} };

    vector<vector<int>> s4 = { {2,7,6},
                            {9,5,1},
                            {4,3,8} };

    vector<vector<int>> s5 = { {4,9,2},
                            {3,5,7},
                            {8,1,6} };

    vector<vector<int>> s6 = { {8,1,6},
                            {3,5,7},
                            {4,9,2} };

    vector<vector<int>> s7 = { {6,1,8},
                            {7,5,3},
                            {2,9,4} };

    vector<vector<int>> s8 = { {2,9,4},
                            {7,5,3},
                            {6,1,8} };

    vector<vector<vector<int>>> all_S = { s1,s2,s3,s4,s5,s6,s7,s8 };

    for (int i = 0; i < 8; i++) {
        vector<vector<int>> temp_s = all_S[i];
        vector<int>temp_result = {};
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int diff = abs((s[j][k]) - (temp_s[j][k]));
                temp_result.push_back(diff);
            }
        }

        int sum{ 0 };
        for (int i = 0; i < temp_result.size(); i++) {
            sum += temp_result[i];
        }
        result.push_back(sum);
    }

    for (int i = 0; i < result.size(); i++) {
        if (minimum_cost > result[i]) {
            minimum_cost = result[i];
        }
    }
    return minimum_cost;

}


int main() {
    /*Change the below vector as requred ans you can get the cost*/
    vector<vector<int>> s = { {8,3,2},
                            {1,5,9},
                            {6,7,4} };

    int result = formingMagicSquare(s);
    cout << "Cost to change as a Magic Square : " << result << endl;


    return 0;

}
