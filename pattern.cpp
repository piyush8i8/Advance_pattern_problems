// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=6; i++)
//     {
//         for(int j=0; j<=6; j++)
//         {
//             cout<<i;
//         }

//         cout<<"\n";
//     }
//     return 0;
// }

// output

// 1111111
// 2222222
// 3333333
// 4444444
// 5555555
// 6666666


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i=i+1)
//     {
//         for(int j=1; j<=5; j=j+1)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// output
// 12345
// 12345
// 12345


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i=i+1)
//     {
//         for(int j=5; j>=1; j=j-1)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// output
// 54321
// 54321
// 54321
// 54321
// 54321


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i=i+1)
//     {
//         for(int j=1; j<=5; j=j+1)
//         {
//             cout<<j*j<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// output

// 1 4 9 16 25 
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25



// #include <iostream>
// using namespace std;
// int main()
// {
//     for(char i='a'; i<='e'; i=i+1)
//     {
//         for(char j='a'; j<='e'; j=j+1)
//         {
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// output
// a a a a a 
// b b b b b
// c c c c c
// d d d d d
// e e e e e


// #include <iostream>
// using namespace std;
// int main()
// {int b=1;
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=5; j++)
//         {    
          
        
               
//         cout<<b<<" ";
//             b++;
//         }
        
//         cout<<"\n";

//     }

//     return 0;
// }

// output_iterator_tag
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25



// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {    
          
        
               
//         cout<<"*";
            
//         }
        
//         cout<<"\n";

//     }

//     return 0;
// }

// *
// **
// ***
// ****
// *****



// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// 1
// 12
// 123
// 1234
// 12345

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {    
//         cout<<i;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output
// 1
// 22
// 333
// 4444
// 55555




// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=i; j>=1; j--)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// 1
// 21
// 321
// 4321
// 54321


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(char i='a'; i<='e'; i++)
//     {
//         for(char j='a'; j<=i; j++)
//         {    
//         cout<<i;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output
// a
// bb
// ccc
// dddd
// eeeee


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=5; i>=1; i--)
//     {
//         for(int j=1; j<=i; j++)
//         {    
//         cout<<"*";
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output

// *****
// ****
// ***
// **
// *




// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=5; i>=1; i--)
//     {
//         for(int j=1; j<=i; j++)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output

// 12345
// 1234
// 123
// 12
// 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=5; i>=1; i--)
//     {
//         for(int j=5; j>=i; j--)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output
// 5
// 54
// 543
// 5432
// 54321

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int l=1; l<=(5-i); l++)
//         {    
//         cout<<" ";
            
//         }

//         for(int j=1; j<=i; j++)
//         {    
//         cout<<"*";
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output

//     *
//    **
//   ***
//  ****
// *****

//#include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int l=1; l<=(5-i); l++)
//         {    
//         cout<<" ";
            
//         }

//         for(int j=1; j<=i; j++)
//         {    
//         cout<<i;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output
//   1
//    22
//   333
//  4444
// 55555


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int l=1; l<=(5-i); l++)
//         {    
//         cout<<" ";
            
//         }

//         for(int j=1; j<=i; j++)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output
//     1
//    12
//   123
//  1234
// 12345


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=0; i<=5; i++)
//     {
//         for(char l=1; l<=(5-i); l++)
//         {    
//         cout<<" ";
            
//         }

//         for(char j='A'; j<=i+'A'; j++)
//         {    
//         cout<<j;
            
//         }
//         cout<<"\n";
// }
// return 0;
// }

// output

//    A
//     AB
//    ABC
//   ABCD
//  ABCDE
//ABCDEF