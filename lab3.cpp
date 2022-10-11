#include <iostream>
using namespace std;

int values;
bool want;
int *DynamicArray;
int *newArr;
void create_array()
{
   DynamicArray = new int[values];
   for (int i = 0; i < values; i++) {
       cout << "Enter Value: ";
       cin >> DynamicArray[i];
   }

   cout << "do u want print the array ? if yes press 1 if no press 0 :";
   cin>> want ;

   if (want == 1) {
       for (int i = 0 ; i < values; i++) {
           cout << DynamicArray[i] <<endl;
       }
   }

}
void resize()
{
   int newvalue;
   cout << "Enter new size :"<<endl;
   cin >> newvalue;
    
    
   newArr = new int[newvalue];
   for (int i = 0; i < newvalue; i++) {
       cout << "Enter Value: ";
       cin >> newArr[i];
   }
    cout << "do u want print the array ? if yes press 1 if no press 0 :";
    cin>> want ;
   if (want == 1) {
       for (int i = 0 ; i < values ; i++) {
           cout <<DynamicArray[i]<<" ";
       }
       
       for (int j = 0 ; j < newvalue; j++) {
           cout <<newArr[j]<<" ";

       }
   }
     
}

int main()

{
   cout <<"How many integer you want ?"<<endl;
   cin >> values;
   create_array();
   resize();
}
