#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int choice, rows;

    cout << "Now you are the trainer please Enter the number corresponding to the shape you want to draw:-\n";
    cout << "1. Right Triangle\n";
    cout << "2. pattern of numbers in a pyramid shape\n";
    cout << "3. Hollow Square\n";
    cout << "4. Diamond\n";
    cout << "5. right triangle using numbers\n";
    cout << "6. pattern of a pyramid\n";
    cout << "7. Alphabet Triangle\n";
    cout << "8. hollow diamond\n";
    cout << "9. hollow square using numbers\n";
    cout << "10.half pyramid using alphabets\n";
    cout<<"please enter your choice trainer :-";
    cin >> choice;

    if (choice == 1) 
    {
        cout << "Enter the number of rows for the right triangle: ";
        cin >> rows;
        for (int i = 1; i <= rows; i++) 
        {
            for (int j = 1; j <= i; j++) 
            {
                cout << "* ";
            }
            cout << "\n";
        }
    }
    else if (choice == 2) 
    {
        cout << "Enter the number of rows for the pyramid: ";
        cin >> rows;
        for (int i = 1; i <= rows; i++) 
        {
            for (int j = 1; j <= rows - i; j++) 
            {
                cout << "  ";
            }
            for (int k = 1; k <= i; k++) 
            {
                cout << k << " ";
            }
            for (int l = i - 1; l >= 1; l--)
            {
                cout << l << " ";
            }
            cout << "\n";
        }
    }
    else if (choice == 3)
    {
        cout << "Enter the number of rows for the hollow square: ";
        cin >> rows;
        for (int i = 1; i <= rows; i++)
        {
            if (i == 1 || i == rows) 
            {
                for (int j = 1; j <= rows; j++) 
                {
                    cout << "* ";
                }
            }
            else 
            {
                for (int j = 1; j <= rows; j++)
                {
                    if (j == 1 || j == rows) 
                    {
                        cout << "* ";
                    }
                    else 
                    {
                        cout << "  ";
                    }
                }
            }
            cout << "\n";
        }
    }
    else if (choice == 4) 
    {
        cout << "Enter the number of rows for the diamond: ";
        cin >> rows;
        for (int i = 1; i <= rows; i++) 
        {
            for (int j = 1; j <= rows - i; j++) 
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        for (int i = rows - 1; i >= 1; i--)
        {
            for (int j = 1; j <= rows - i; j++) 
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) 
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else if (choice == 5)
    {
        cout<<"Enter the number of rows for the right triangle: ";
        cin>>rows;
        for(int i=1;i<=rows;i++) 
        {
            for(int j=1;j<=i;j++) 
            {
                cout<<j<<" ";
            }
            cout<<"\n";
        }
    }
    else if (choice == 6)
    {
        cout<<"Enter the number of rows for the pyramid: ";
        cin>>rows;
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows - i; j++) 
            {
                cout << " ";
            }
            int asterisksCount = 2 * i - 1;
            for (int k = 1; k <= asterisksCount; k++) 
            {
                cout << "*";
            }
            cout <<"\n";
        }
    }
    else if (choice == 7) 
    {
        cout << "Enter the number of rows for the right triangle: ";
        cin >> rows;
        char alphabet = 'A';
        for (int i = 1; i <= rows; i++) 
        {
            for (int j = 1; j <= i; j++)
            {
                cout << alphabet;
                alphabet++;
            }
            cout << "\n";
        }
    }
    else if (choice == 8) 
        {
            cout << "Enter the number of rows (odd number): ";
            cin >> rows;
            if (rows % 2 == 0) 
            {
                cout << "Please enter an odd number.\n";
                return 1;
            }
            for (int i = 0; i < rows; i++) 
            {
                for (int j = 0; j < rows; j++) 
                {
                    if (i + j == rows / 2 || j - i == rows / 2 || i - j == rows / 2 || i + j == (rows / 2) * 3)
                    {
                        cout << "*";
                    }
                    else 
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }
        else if (choice == 9)
        {
            cout << "Enter the number of rows: ";
            cin >> rows;
            for (int i = 1; i <= rows; i++) 
            {
                for (int j = 1; j <= rows; j++)
                {
                    if (i == 1 || i == rows || j == 1 || j == rows)
                        cout << j << " ";
                    else
                        cout << "  ";
                }
                cout << "\n";
            }
        }
        else if (choice == 10)
        {
            char alphabet = 'A';
            cout << "Enter the number of rows for the half pyramid: ";
            cin >> rows;
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout<<alphabet;
                    alphabet++;
                    if (alphabet > 'Z')// if alphabet are reached to the "Z" then start again form "A":
                        alphabet = 'A';
                }
                cout << "\n";
            }
        }
        else 
        {
            cout << "Invalid choice.\n";
        }
    return 0;
}