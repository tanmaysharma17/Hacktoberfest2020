//Binary Search

#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start,end,mid;
    start=0;
    end=n-1;

    while(start <= end){
        mid = (start+end) /2;
        if(input[mid]==val)
            return mid;
        else 
            if(val < input[mid])
           	end = mid-1;
        else
            start=mid+1;
    }
    return -1;

}

int main()
{	int size;
	cin >> size;
	//Initializing dynamic array
 	int *input = new int[size];
	
 	//Taking the input for array
	for(int i = 0; i < size; ++i) {
		cin >> input[i];
	}
	
 	//How many elements are to be searched?
	int t;
	cin >> t;

	while (t--)
	{	//Enter the element
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) +1 << endl;
	}

	delete [] input;
	return 0;
}
