#include <iostream>
#include <string>
using namespace std;
int main() {
    string myArray[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B17"};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 0; i < arraySize; i++){
        if (myArray[i][0]=='B'){
            cout << myArray[i] <<endl;
            
        }
    }
    return 0;
}
