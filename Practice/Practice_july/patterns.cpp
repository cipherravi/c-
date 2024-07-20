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

  // Full Inverted Pyramid

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
  // if we use both full pyraid at same time it will create a diamond

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
  // Full Inverted Hollow Pyramid

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
  // if we use both full hollow pyraid at same time it will create a hollow diamond

  // Flipped solid Diamond
  /*
  int n;
  cin>>n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <n-i; j++)
    {
      cout<<"*";

    }
     for (int k = 0; k < 2*i+1; k++)
    {
      cout<<" ";

    }
    for (int j = 0; j <n-i; j++)
    {
      cout<<"*";

    }

    cout<<endl;
  }

  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j <=n-i; j++)
    {
      cout<<"*";

    }
     for (int k = 0; k < 2*i-1; k++)
    {
      cout<<" ";

    }
    for (int j = 0; j <=n-i; j++)
    {
      cout<<"*";

    }

    cout<<endl;
  }
  */

  // Fancy pattern
  /*
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
      for (int col = 0; col <= row; col++)
      {
        cout << row + 1;
        if (col != row)
        {
          cout << "*";
        }
      }
      cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
      for (int col = 0; col < n-row; col++)
      {
        cout << n-row;
        if (col != n-row-1)
        {
          cout << "*";
        }
      }
      cout << endl;
    }
    */

  // Alphabetical palindrome pyramid
  /*
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
      for (int col = 0; col <= row; col++)
      {
        int ans = col + 1;
        char ch = ans + 'A' - 1;
        cout << ch;
        // cout<<col+1;
      }
      for (int col = row; col > 0; col--)
      {
        int ans = col ;
        char ch = ans + 'A' - 1;
        cout << ch;
        // cout<<col;
      }

      cout << endl;
    }
    */
  /*
    ////  Numeric Full Pyramid
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
      //spaces
      for (int space = 0; space < n-row-1; space++)
      {
        cout<<" ";
      }
      //left number triangle
      // int start=row+1;
      for (int col = 0; col < row+1; col++)
      {
        cout<< row+col+1<<"";
        // cout<< start<<"";
        // start++;/

      }
      //right reverse number trianle
      for (int right = 2*row; right > row; right--)
      {
        cout<<right;
      }

      cout<<endl;
    }
    */

  ////Numeric Hollw Pyramid
  /*
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
      // spaces
      for (int space = 0; space < n - row - 1; space++)
      {
        cout << " ";
      }
      if (row == n - 1)
      {
        // last row
        for (int last = 1; last < n; last++)
        {
          cout << last << " ";
        }
      }

      if (row != n - 1)
      {
        // left 1
        for (int col = 1; col <= 1; col++)
        {
          cout << col;
        }
        // mid spaces
        for (int midspace = 0; midspace < row * 2 - 1; midspace++)
        {
          cout << " ";
        }
      }

      if (row >= 1)
      {
        // right counting
        for (int right = row + 1; right <= row + 1; right++)
        {
          cout << right;
        }
      }

      cout << endl;
    }
    */

  ////End
}
