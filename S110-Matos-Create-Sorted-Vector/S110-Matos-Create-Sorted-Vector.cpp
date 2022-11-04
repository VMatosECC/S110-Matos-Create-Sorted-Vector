// S110-Matos-Create-Sorted-Vector.cpp 
// Author:  V. Matos
// Goal:    Create a vector with data supplied from the keyboard
//          The vector must be sorted after each insertion.

#include <iostream>
#include <vector>
using namespace std;

// Prototypes ---------------------------------------------------
void showVector(vector<int> v, string msg = "");
void insertDataInOrder(vector<int>& v, int data);

int main()
{
    vector<int> v;
    int data;
    do
    {
        cout << "Enter a positive number [-1 to end]: ";
        cin >> data;
        if (data == -1) break;
        insertDataInOrder(v, data);
        showVector(v);
    } while (true);

}


// User-defined methods -------------------------------------------
void showVector(vector<int> v, string msg)
{
    cout << msg << endl;
    for (int num : v) cout << num << ", ";
    cout << endl;
}

// ---------------------------------------------------------------
void insertDataInOrder(vector<int>& v, int data)
{
    v.push_back(data);

    int i = v.size() - 2;               // first cell to the left side

    while ((i >= 0) && (v[i] > data))   // finding the 'right' place for data
    {
        //exchange cells
        v[i + 1] = v[i];
        v[i] = data;
        i--;
    }
}