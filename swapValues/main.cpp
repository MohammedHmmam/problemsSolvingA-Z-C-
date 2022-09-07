#include <iostream>

using namespace std;

//This Program to Swap values between two variables x,x
// move value of x to y variable, and value of y move to x variable


//do not forget to use reference parameters (&)
void swap(int &a, int &b);


int main()
{
    int x = 10 , y = 60;
    cout <<"Before Swap - x = " << x << " Y = " << y << "\n";
    swap(x , y);
    cout << " After Swap - X = " << x << " Y = " <<y;
}

void swap(int &a , int &b){

    int temp = a;
    a = b;
    b = temp;

}
