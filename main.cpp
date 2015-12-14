//
//  Lab X
//
//  Created by Edgar Esparza on 7/13/15.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int low = 50;
const int high = 90;

const int MAX_SIZE = 40;

void fillArray(int * p, int howMany);
void printArray(const char * m, ostream & out, const int * p, int howMany);
int largeArray(const int data[], int howMany);
int largePointer ( const int * data, int howMany);

int main()
{
    int info[MAX_SIZE];
    
    int used;
    cout << "How many elements in the array? ";
    cin >> used;
    while ( used <= 0 || used > MAX_SIZE )
    {
        cout << "You must enter a number between 1 and " << MAX_SIZE << endl;
        cout << "How many elements in the array?";
        cin >> used;
    }
    fillArray(info, used);
    printArray("Array of data", cout, info, used);
    cout << "The largest element using subscripts is " << largeArray(info,used) << endl;
    cout << "The largest element using pointers is " << largePointer(info,used) << endl;
    
    return EXIT_SUCCESS;
}

void fillArray(int * p, int howMany)
{
    int range = high - low + 1;
    srand(time(0));
    for ( int i = 0; i < howMany; i++ )
    {
        p[i] = rand() % range + low;
    }
}

void printArray(const char * m, ostream & out, const int * p, int howMany)
{
    out << m << endl;
    for ( int i = 0; i < howMany; i++ )
    {
        out << p[i] << endl;
    }
}

int largeArray(const int data[], int howMany)
{
    int largest = 0;
    
    for ( int i = 0; i < howMany; i++ )
    {
        if ( data[i] > largest )
        {
            largest = data[i];
        }
    }
    return largest;
}

int largePointer ( const int * data, int howMany)
{
    int largest = 0;
    
    for ( int i = 0; i < howMany; i++ )
    {
        if ( data[i] > largest )
        {
            largest = data[i];
        }
    }
    return largest;
}