/*#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string* ptr = new string[5];
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
}*/

    #include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;   // You type: 23 [Enter]
    cout << "Enter your name: ";
    getline(cin, name);  // <-- Problem here!

    cout << "Your name is " << name << endl;
}
