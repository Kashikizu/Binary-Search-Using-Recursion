/*
 * @author Kashikizu
 * File Creation Date: 20/04/2024 (dd/mm/yyyy)
 * Update Date: 20/04/2024
 */

#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


void binarySearch(vector<int> A, int k, int hi, int lo){

    int mid = (lo + hi) / 2;
    if(lo > hi){
        cout << k << " is not present" << endl;
    }
    else if(A[mid] == k){
        cout << k << " is present" << endl;
    }
    else if(A[mid] > k){
        binarySearch(A, k, mid - 1, lo);
    }
    else if(A[mid] < k){
        binarySearch(A, k, hi, mid + 1);
    }

}

int main(){
    int input;
    cout << "Enter the number of elements you want to add:" << endl;
    cin >> input;
    cout << input << " number of inputs were selected" << endl;
    cout << endl;
    vector<int> elems;
    int elem;
    for (int i = 0; i < input; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> elem;
        elems.push_back(elem);
    }
    cout << "List of elements:" << endl;
    printVect(elems);
    sort(elems.begin(), elems.end());
    int k, n = elems.size();
    cout << "Enter number of searches:" << endl;
    cin >> input;
    for(int i = 0; i < input; i++){
        cout << "Enter search no. " << i + 1 << ": ";
        cin >> k;
        binarySearch(elems, k, n-1, 0);
    }
    cout << endl;
    cout << "Search ended. Hoping to run for you again! (^ - ^)/" << endl;
}
