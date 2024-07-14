#include <iostream>
using namespace std;
int main()
{

  // Square
  //  for (int i = 0; i < 4; i++)
  //  {
  //    for (int j = 0; j < 4; j++)
  //    {
  //      cout<<"* ";
  //    }
  //    cout<<endl;
  //  }

  // Hollow rectangle

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

  // int col,row;
  // cout<<"Enter Row : ";
  // cin>>row;
  // cout<<"Enter Column : ";
  // cin>>col;

  // for (int i = 0; i < row; i++)
  // {
  //   if (i==0||i==row-1)
  //   {
  //     for (int column = 0; column < col; column++)
  //     {
  //     cout<<"* ";
  //     }
  //   }
  //   else{
  //     cout<<"* ";
  //   for (int j = 0; j < col-2; j++)
  //   {
  //     cout<<"  ";
  //   }
  //   cout<<"*";
  //   }
  //   cout<<endl;

  // }

  // Half Pyramid

  // int n;
  // cin>>n;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i+1; j++)
  //   {
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }

  // Inverted Half Pyramid

  // int n;
  // cin>>n;
  // for (int i = n; i > 0; i--)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }

  // OR

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = n; j >i; j--)
  //   {
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }

  // Numeric Half Pyramid

  // int n ;
  // cin>>n;
  // for (int i = 1; i <=n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // Inverted Numeric Half Pyramid

  // int n ;
  // cin>>n;
  // for (int i = n; i >=1; i--)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // Full Pyramid

  // int n;
  // cin >> n;

  // for (int row = 1; row <= n; row++)
  // {
  //   for (int space = 1; space <= n - row; space++)
  //   {
  //     cout << " ";
  //   }
  //   for (int col = 1; col <= (row * 2) - 1; col++)
  //   {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  //Full Inverted Pyramid

  //  int n;
  // cin >> n;

  // for (int row = n; row >= 1; row--)
  // {
  //   for (int space = 1; space <= n - row; space++)
  //   {
  //     cout << " ";
  //   }
  //   for (int col = 1; col <= (row * 2) - 1; col++)
  //   {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }
  //if we use both full pyraid at same time it will create a diamond


  // Full Hollow Pyramid
/*
  int n;
  cin >> n;

  for (int row = 1; row <= n; row++)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= 1; col++)
    {
      cout << "*";
    }
    if (row>=2)
    {
    for (int space = 1; space <= (row*2)-3; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= 1; col++)
    {
      cout << "*";
    }
    }
    cout << endl;
  }
*/
  //Full Inverted Hollow Pyramid

  //  int n;
  // cin >> n;

  /* for (int row = n; row >= 1; row--)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= 1; col++)
    {
      cout << "*";
    }
    if (row>=2)
    {
    for (int space = 1; space <= (row*2)-3; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= 1; col++)
    {
      cout << "*";
    }
    }
    cout << endl;
  }
  */
  //if we use both full hollow pyraid at same time it will create a hollow diamond

// Flipped solid Diamond 

int n;
cin>>n;

for (int i = n; i >= 1; i--)
{
  for (int j = 1; j <= i; j++)
  {
    cout<<"*";
   
  }
   for (int k = 1; k <= (i*2)-3; k++)
  {
    cout<<" ";
    
  }
  for (int l = 1; l <=i; l++)
    {
    cout<<"*";

    }
  cout<<endl;
}




}
