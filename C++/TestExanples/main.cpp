#include "TestClasses.h"

using namespace std;

void fibonacci(int n);
void swap(int *x, int *y);
void testClasses();


int main()
{
    cout << "Hello world!" << endl;

    cout << endl << "Calling fibonacci(10)" << endl << endl;
    fibonacci(10);

    int* x = (int*)malloc(sizeof(int));
    int* y = (int*)malloc(sizeof(int));

    *x = 10;
    *y = 5;

    cout << endl << "Calling Swap on x: " << *x << " y: " << *y << endl << endl;
    swap(x,y);
    cout << "After Swap x: " << *x << " y: " << *y << endl << endl;

    cout << "Testing Classes" << endl << endl;
    testClasses();

    return 0;
}

void fibonacci(int n){

    int minusOne = 1;
    int minusTwo = 0;

    for(int i = 0; i < n; i++){
        int cur = minusOne + minusTwo;
        minusTwo = minusOne;
        minusOne = cur;
        cout << "Fib Number " << i + 1 << ": " << cur << endl;
    }

}

void swap(int *x, int *y){

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

}

void testClasses(){

    Parent * p = new Parent();
    Parent * d = new Derived();

    cout << "Calling virtFunc and nonVirtFunc from Parent object p." << endl;
    p->virtFunc();
    p->nonVirtFunc();

    cout << "Calling virtFunc and nonVirtFunc from Derived object d." << endl;
    d->virtFunc();
    d->nonVirtFunc();

}
