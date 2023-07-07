// author A.C.Gadiatulin group CPLUS-1006 Block Introduce to multithreads
#include <iostream>
#include <iomanip>
#include <vector>
#include <thread>
#include <time.h>
#include "Heandler.h"

const int M = 4;		// for parths divide 'arr[]'
const int D = N / M;	// count elements in temp array

void printArr(int arr[]);

int main() {
	srand(time(NULL));
	
	// создается массив на 20 элементов
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 20;
	}

	printArr(arr);

	int sum_counter = 0;
	for (int k = 0; k < N; k++) {
		sum_counter += arr[k];
	}
	std::cout << "Summa without thread in array = " << sum_counter << std::endl;

	// Threads
	std::thread t1(addArray1, 0, 4);
	std::thread t2(addArray2, 5, 9);
	std::thread t3(addArray3, 10, 14);
	std::thread t4(addArray4, 15, 19);

	if (t1.joinable()) t1.join();
	if (t2.joinable()) t2.join();
	if (t3.joinable()) t3.join();
	if (t4.joinable()) t4.join();

	std::cout << g_s1 << std::endl;
	std::cout << g_s2 << std::endl;
	std::cout << g_s3 << std::endl;
	std::cout << g_s4 << std::endl;

	std::cout << "Summa with threads = " << (g_s1 + g_s2 + g_s3 + g_s4) << std::endl;

	system("pause");

	return 0;
}

void printArr(int arr[]) {
	for (int j = 0; j < N; j++) {
		std::cout << arr[j] << " ";
	}
	std::cout << std::endl;
}
