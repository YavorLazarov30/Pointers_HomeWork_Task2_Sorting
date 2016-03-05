
/*2. Given two arrays arranged in an ascending order: А[n]
and B[m]. Form an array C[n+m] consisting of elements of
the arrays А and В arranged in an ascending order.*/

#include <iostream>
#include <time.h>

using namespace std;

void init(int *p, int Size);
void print(int *p, int Size);
void sort(int arr[], int Size);
void swap(int *p, int *q);
void initThird(int *p, int *q, int *f, int Size);
void main() {
	//Step1: Initiallize sizes and declare three arrays:
	const int Size = 5;
	const int Sizeb = 3;
	const int Sizec = 8;
	int a[5];
	int b[3];
	int c[8];
	//Step 2: Declare and initiallize the pointers
	int *p, *q, *f;
	p = &a[0];
	q = p + 1;
	init(p, Size);
	cout << "First array: ";
	print(p, Size);
	cout << endl << "Sorted: ";
	sort(a, Size);
	print(p,Size);
	//Step 3: Initiallize, print and sort arrays:
	p = &b[0];
	q = p + 1;
	init(p, Sizeb);
	cout <<endl<< " Second array: ";
	print(p, Sizeb);
	cout << endl<<" Sorted: ";
	sort(b, Sizeb);

	print(p, Sizeb);
	p = &a[0];
	q = &b[0];
	f = &c[0];
	cout << endl << " Third array: ";
	initThird(p,q,f, Sizec);
	print(f, Sizec);
	sort(f, Sizec);
	cout << endl<<" Sorted: ";
	print(f,Sizec);
	system("pause>nul");
}
void init(int *p, int Size) {
	srand(time(NULL));
	for (int i = 0; i < Size; i++, p++) {
		*p = rand() % 100 + 1;
	}

}
void print(int *p, int Size) {
	
	for (int i = 0; i < Size; i++, p++) {
		cout << *p<< " ";
	}
}
void sort(int arr[], int Size) {
	for (int i = 0; i < Size; i++) {
		for (int j = Size - 1; j >= 0; j--) {
		if(arr[j-1]>arr[j]){
			swap(&arr[j-1],&arr[j]);
		}
		}
	}
	
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void initThird(int *p, int *q, int *f, int Sizec) {
	for (int i = 0; i < Sizec-3; i++,f++,p++) {
		
			*f = *p;
   }
	for (int i = Sizec - 3; i < Sizec; i++, f++,q++) {
		*f = *q;
	}
}
