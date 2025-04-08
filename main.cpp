#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
    if(age%2==0)
    {
        cout<<"Your age is an even number. "<<endl;
    }
    else
    {
        cout<<"Your age is an odd number. "<<endl;
    }
    const int arraylength=3;
    int ages[arraylength];
    
    ages[0]=age;
    ages[1]=age+1;
    ages[2]=age+2;
    
    for(int i=0; i<=arraylength; i++)
    {
        cout<<"After"<<i<<" years, you will be: "<<ages[i]<<" years old."<<endl;
    }
    return 0;
    
}
