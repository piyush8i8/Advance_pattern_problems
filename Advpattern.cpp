//Advance pattern Questions

// #include<iostream>
// using namespace std;
// int main()
// {
//        for(int i=1;i<=5;i++ )
//        {
//         for(int j=1;j<=(5-i);j++)
//         {
//             cout<<" ";
//         }
//          for(int k=1;k<=i;k++)
//         {
//             cout<<"*";
//         }
//          for(int l=1;l<=(i-1);l++)
//         {
//             cout<<"*";
//         }

        
//         cout<<"\n";
//        }

//     return 0;
// }


// // output
//     *
//    ***
//   *****
//  *******
// *********




// #include<iostream>
// using namespace std;
// int main()
// {
//        for(int i=1;i<=5;i++ )
//        {
//         for(int j=1;j<=(5-i);j++)
//         {
//             cout<<" ";
//         }
//          for(int k=1;k<=i;k++)
//         {
//             cout<<k;
//         }
//          for(int l=(i-1);l>=1;l--)
//         {
//             cout<<l;
//         }

        
//         cout<<"\n";
//        }

//     return 0;
// }


// 0utput

//     1
//    121
//   12321
//  1234321
// 123454321


// #include<iostream>
// using namespace std;
// int main()
// {
//          int n;
//         cout<<"Enter the value of row";
//         cin>>n;



//        for(int i=n;i>=1;i-- )
//        {
//         for(int j=1;j<=(n-i);j++ )
//        {
//         cout<<" ";
//        }

//        for(int k=((2*i)-1);k>=1;k-- )
//        {
//         cout<<"*";
//        }


        
//         cout<<"\n";
//        }

//     return 0;
// }


// output
// *********
//  *******
//   *****
//    ***
//     *



// #include<iostream>
// using namespace std;
// int main()
// {
//          int n;
//         cout<<"Enter the value of row";
//         cin>>n;



//        for(int i=n;i>=1;i-- )
//        {
//         for(int j=1;j<=i;j++ )
//        {
//         cout<<"*";
//        }

//         for(int k=1;k<=(8-(2*i));k++ )
//        {
//         cout<<" ";
//        }

//  for(int l=1;l<=i;l++ )
//        {
//         cout<<"*";
//        }
     


        
//         cout<<"\n";
//        }


       

//        for(int i=1;i<=n;i++ )
//        {
//         for(int j=1;j<=i;j++ )
//        {
//         cout<<"*";
//        }

//         for(int k=1;k<=(8-(2*i));k++ )
//        {
//         cout<<" ";
//        }

//  for(int l=1;l<=i;l++ )
//        {
//         cout<<"*";
//        }
     


        
//         cout<<"\n";
//        }


//     return 0;
// }


// //output


// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********





// #include<iostream>
// using namespace std;
// int main()
// {
//          int n;
//         cout<<"Enter the value of row";
//         cin>>n;



//        for(int i=1;i<=n;i++ )
//        {
//         for(int j=1;j<=i;j++ )
//        {
//         cout<<"*";
//        }

//         for(int k=1;k<=((2*n)-(2*i));k++ )
//        {
//         cout<<" ";
//        }

//  for(int l=1;l<=i;l++ )
//        {
//         cout<<"*";
//        }
     


        
//         cout<<"\n";
//        }


//        for(int i=(n-1);i>=1;i-- )
//        {
//         for(int j=i;j>=1;j-- )
//        {
//         cout<<"*";
//        }

//         for(int k=1;k<=((2*n)-(2*i));k++ )
//        {
//         cout<<" ";
//        }

//  for(int l=i;l>=1;l-- )
//        {
//         cout<<"*";
//        }
     


        
//         cout<<"\n";
//        }

       


//     return 0;
// }


// output

// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *





// #include<iostream>
// using namespace std;
// int main()
// {
//          int n;
//         cout<<"Enter the value of row";
//         cin>>n;



//        for(int i=1;i<=n;i++ )
//        {
//         for(int j=(n-i);j>=1;j-- )
//        {
//         cout<<" ";
//        }

//         for(int k=1;k<=i;k++ )
//        {
//         cout<<"*"<<" ";
//        }


        
//         cout<<"\n";
//        }




//        for(int i=(n-1);i>=1;i-- )
//        {
//         for(int j=1;j<=(n-i);j++ )
//        {
//         cout<<" ";
//        }

//         for(int k=1;k<=i;k++ )
//        {
//         cout<<"*"<<" ";
//        }


        
//         cout<<"\n";
//        }



       


//     return 0;
// }

// //    *
// //   * *
// //  * * *
// // * * * *
// // * * * *
// //  * * *
// //   * *
// //    * 


//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *