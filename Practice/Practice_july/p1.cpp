#include <iostream>
using namespace std;
int main()
{
 
// char ch = 97;
// cout << ch<<endl;

// int n;
// cout<<"Enter a number :" <<endl;
// if (cin>>n)
// {
//   cout<<"Hello"<<endl;
// }

//Square
// for (int i = 0; i < 4; i++)
// {
//   for (int j = 0; j < 4; j++)
//   {
//     cout<<"* ";
//   }
//   cout<<endl;
// }

//Hollow rectangle

// for (int i = 0; i < 3; i++)
// {

//   for (int j = 0; j < 5; j++)
//   {
//     if (i==1)
//     {
//       cout<<"*       *";
//       break;
//     }
    
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// New way

int col,row;
cout<<"Enter Row : ";
cin>>row;
cout<<"Enter Column : ";
cin>>col;


for (int i = 0; i < row; i++)
{
  if (i==0||i==row-1)
  {
    for (int column = 0; column < col; column++)
    {
    cout<<"* ";
    }
  }
  else{
    cout<<"* ";
  for (int j = 0; j < col-2; j++)
  {
    cout<<"  ";
  }
  cout<<"*";
  }
  cout<<endl;
  
}


//Half Pyramid

 
}