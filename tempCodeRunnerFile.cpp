#include<iostream>
using namespace std;
int main()
{
         int n;
        cout<<"Enter the value of row";
        cin>>n;



       for(int i=1;i<=n;i++ )
       {
        for(int j=1;j<=i;j++ )
       {
        cout<<"*";
       }

        for(int k=1;k<=(8-(2*i));k++ )
       {
        cout<<" ";
       }

 for(int l=1;l<=i;l++ )
       {
        cout<<"*";
       }
     


        
        cout<<"\n";
       }


       for(int i=(n-1);i>=1;i-- )
       {
        for(int j=i;j>=1;j-- )
       {
        cout<<"*";
       }

        for(int k=1;k<=(8-(2*i));k++ )
       {
        cout<<" ";
       }

 for(int l=i;l>=1;l-- )
       {
        cout<<"*";
       }
     


        
        cout<<"\n";
       }

       


    return 0;
}

