#include <vector>
#include <iostream>

using namespace std;
std::vector< int > arr;

int main()
{
    bool want;
    int element, values;
    cout << "Enter the size of array :";
    cin>>element;
    
    for (int i = 0 ; i < element; i++) {
        cout << "Enter array "<<i<<" : ";
        cin >> values;
        arr.push_back(values);
    }
    
    for (int  i = 0; i < element; i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;
    cout << "Want to resize ?: 0 OR 1 :"<<endl;
    cin >> want;
    if (want == 1) {
        int newelemnt;
        int newvalues;
        cout << "Enter the size of array :"<<endl;
        cin >> newelemnt;
        for (int i = 0 ; i < element; i++) {
            cout << "Enter value : ";
            cin>> newvalues;
            arr.push_back(newvalues);
        }
        
        for (int j = 0 ; j < newelemnt + element; j++) {
            cout << "New array :" << arr[j] << endl;
        }
    }
    
    
    return 0;
    
}
