#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        } /*[4,1,4] [3,3,3] [2,5,2] [1,7,1] [0,9,0]*/
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        } /*[0,9,0] [1,7,1] [2,5,2] [3,3,3] [4,1,4]*/
        for (int j = 0; j < 2 * n - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }
}
void print11(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << "" << endl;
    }
}
void print12(int n)
{
    int space = (2 * (n - 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "" << endl;
        space = space - 2;
    }
}
void print13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";

            num++;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char alpha = 'A'; alpha <= 'A' + i; alpha++)
        {

            cout << alpha << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char alpha = 'A'; alpha <= 'A' + (n - i - 1); alpha++)
        {

            cout << alpha << " ";
        }
        cout << endl;
    }
}
void print16(int n)
{
    char alpha = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << alpha << " ";
        }
        cout << endl;
        alpha = alpha + 1;
    }
}
void print17(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char alpha = 'A';

        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << alpha;
            if (j < breakpoint)
            {
                alpha++;
            }
            else
            {
                alpha--;
            }
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alpha = 'A' + n - 1 - i;
        for (int j = n - i; j <= n; j++)
        {

            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
}
void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
}
void print20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 2 * n + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {

        if (i == 1 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
}
void print22(int n)
{
    for(int i=0;i<2*n-1;i++)
{
    for(int j=0;j<2*n-1;j++)
    {

    
    int up,down,left,right;
    up=i;
    down= j;
    left=(2*n-1)-1-i;
    right=(2*n-1)-1-j;
    cout<<n-min(min(up,down),min(left,right));
    }
    cout<<endl;


}
}
int main()
{
    int n;
    cin >> n;
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    print7(n);
    print8(n);
    print10(n);
    print11(n);
    print12(n);
    print13(n);
    print14(n);
    print15(n);
    print16(n);
    print17(n);
    print18(n);
    print19(n);
    print20(n);
    print21(n);
    print22(n);

}
