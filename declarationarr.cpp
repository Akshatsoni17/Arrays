#include<iostream>
using namespace std;
main()
{
    int test[6] = {9,4,6,8,0,12};
    int i,check;
    bool x = 0;
    int smst;
    cout<<"Enter the element to check in array: "<<endl;
    cin>>check;
    for(i=0;i<6;i++)
    {
        if(check==test[i])
        {
            cout<<"It exists in this array"<<endl;
            x=1;
            cout<<"It is indexed at: "<<i<<endl;
        }
    }
       if(x==0)
    {
         cout<<"It does not exist in this array";
    }
    smst = test[0];
    for(i=1;i<6;i++)
    {
        if(smst>test[i])
        {
            smst = test[i];
           cout<<"The smallest element is: "<<smst<<endl;
        }
        if(smst<test[i])
        {
            smst = test[i];
           cout<<"The smallest element is: "<<smst<<endl;
        }
        
    }
    cout<<"The largest element is: "<<smst<<endl;
}
