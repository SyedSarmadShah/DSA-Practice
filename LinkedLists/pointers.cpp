#include<iostream>
#include<string>
using namespace std; 
int main()
{
   
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

     int* ptr = new int[n];
     for(int i=0;i<n;i++)
     {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>ptr[i];
     }

     cout<<"The elements are: "<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<ptr[i]<<endl; 

}

   delete[] ptr;
}