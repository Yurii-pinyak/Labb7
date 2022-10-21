#include"Sort.h"
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Countingsort(int* arr, int k, int size) {
	int* carr = new int[k];
	for (int i = 0; i < k; i++) {
		carr[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		carr[arr[i] - 1]++;
	}

	for (int i= 0,j = 0; j < k;) {
		if (carr[j] != 0) {
			arr[i] = j + 1;
			carr[j]--;
			i++;
		}
		else {
			j++;
		}
	}
	delete carr;
	

}