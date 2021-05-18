#include <iostream>

int sum(int *list, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += list[i];
	}
	return sum;
}

int product(int *list, int size)
{
	int i, product = 0;
	for (i = 0; i < size; i++) {
		product = list[i] *product;
	}
	return product;
}

void reverse (int *inorder, int *reverse, int size)
{
    int i;
    int j = 0;
    for (i = size; i != 0; --i){
        reverse[j] = inorder [i];
        j++;
    }
}

int main ()
{
    int size =10;
    int arr[10];
    int reverse[10];
    int sum, prod =0;
    cout << "Enter 10 integers to be summed and producted";
    for (int i =0; i<size; i++){
        cin>> arr[i];
    }
    sum = sum(&arr, size);
    prod = prod(&arr, size);
    cout << "Sum = " <<sum << endl;
    cout << "Product =" <<prod << endl;
    cout << "Reverse order =";
    reverse (&arr, &reverse, size);
        for (int i =0; i<size; i++){
        cout<< reverse[i] << " ";
    }
    
}