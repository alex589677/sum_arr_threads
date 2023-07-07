#pragma once

int g_s1 = 0;
int g_s2 = 0;
int g_s3 = 0;
int g_s4 = 0;

const int N = 20;		// total length array 'arr[]'

int arr[N];

void addArray1(int start, int finish) {
	// Присвоение значений новому массиву
	int i1 = 0;
	int temp_arr1[5];
	for (int k = start; k <= finish; k++) {
		temp_arr1[i1] = arr[k];
		i1++;
	}
	// Подсчет суммы в новом массиве
	for (int j = 0; j <= 4; j++) {
		g_s1 += temp_arr1[j];
	}
}

void addArray2(int start, int finish) {
	// Присвоение значений новому массиву
	int i2 = 0;
	int temp_arr2[5];
	for (int k = start; k <= finish; k++) {
		temp_arr2[i2] = arr[k];
		i2++;
	}
	// Подсчет суммы в новом массиве
	for (int j = 0; j <= 4; j++) {
		g_s2 += temp_arr2[j];
	}
}

void addArray3(int start, int finish) {
	// Присвоение значений новому массиву
	int i3 = 0;
	int temp_arr3[5];
	for (int k = start; k <= finish; k++) {
		temp_arr3[i3] = arr[k];
		i3++;
	}
	// Подсчет суммы в новом массиве
	for (int j = 0; j <= 4; j++) {
		g_s3 += temp_arr3[j];
	}
}

void addArray4(int start, int finish) {
	// Присвоение значений новому массиву
	int i4 = 0;
	int temp_arr4[5];
	for (int k = start; k <= finish; k++) {
		temp_arr4[i4] = arr[k];
		i4++;
	}
	// Подсчет суммы в новом массиве
	for (int j = 0; j <= 4; j++) {
		g_s4 += temp_arr4[j];
	}
}