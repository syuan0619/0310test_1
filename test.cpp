#include <iostream>
using namespace std;
void swap_value(int, int);
void swap_address(int *a, int *b);
void swap_reference(int &a, int &b);
int main()
{
    /*int i{100};//i=100
    int i2=1;
    cout <<i<<endl;
    cout <<i2<<endl;
    cout <<&i<<endl;
    cout <<&i2<<endl;
    */
    /*
    int i{100};
    int &i2=i;//address嚙諛同
    cout <<i<<endl;
    cout <<i2<<endl;
    cout <<&i<<endl;
    cout <<&i2<<endl;
    return 0;
    */
    int x = 200, y = 300;
    cout << "Before swapping..." << endl;
    cout << "x= " << x << " y= " << y << endl;
    swap_value(x, y);
    cout << "After swapping..." << endl;
    cout << "x= " << x << " y= " << y;
    // using call by value

    cout << "Before swapping..." << endl;
    cout << "x= " << x << " y= " << y << endl;
    swap_reference(x, y);
    cout << "After swapping..." << endl;
    cout << "x= " << x << " y= " << y;
    // using call by reference

    cout << "Before swapping..." << endl;
    cout << "x= " << x << " y= " << y << endl;
    swap_address(&x, &y); // 嚙瘢嚙編嚙褕塚蕭嚙踝蕭嚙踝蕭嚙踝蕭address
    cout << "After swapping..." << endl;
    cout << "x= " << x << " y= " << y;
    // using call by address
}
void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_address(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}