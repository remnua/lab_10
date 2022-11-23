#include <iostream>
using namespace std;

//int main() {
//	int arr[4][3];
//	int m = 4;
//	int n = 3;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	int count = 0;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] % 2 == 0) {
//				count++;
//			}
//		}
//		cout << endl;
//		cout << "Count even numbers: " << count;
//		count = 0;
//	}
//}

//int main() {
//	int arr[6][4];
//	int m = 6;
//	int n = 4;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[j][i] % 2 == 0) {
//				count++;
//			}
//		}
//		cout << endl;
//		cout << "Count even numbers: " << count;
//		count = 0;
//	}
//}


//int main() {
//	int arr[5][7];
//	int m = 5;
//	int n = 7;
//	int sum = 0;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			sum += arr[i][j];
//		}
//		cout << endl;
//		cout << "Sum of elements: " << sum;
//		sum = 0;
//	}
//}


//int main() {
//	int arr[4][6];
//	int m = 4;
//	int n = 6;
//	int sum = 0;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			sum += arr[j][i];
//		}
//		cout << endl;
//		cout << "Sum of elements: " << sum;
//		sum = 0;
//	}
//}


//int main() {
//	int arr[3][4];
//	int m = 3;
//	int n = 4;
//	int max = INT_MIN;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	int a;
//	int b;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				a = i;
//				b = j;
//			}
//		}
//	}
//	cout << "arr[" << a << "][" << b << "] is max and = " << max;
//}


//int main() {
//	int arr[4][7];
//	int m = 4;
//	int n = 7;
//	int min = INT_MAX;
//	srand(time(0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 999;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//	int a;
//	int b;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] < min) {
//				min = arr[i][j];
//				a = i;
//				b = j;
//			}
//		}
//	}
//	cout << "arr[" << a << "][" << b << "] is min and = " << min;
//}


int main() {
	int arr[3][3];
	int m = 3;
	int n = 3;
	int sum = 0;
	srand(time(0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 999;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}
	int sum1 = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) sum += arr[i][j];
			if (i + j == n - 1) sum1 += arr[i][j];
			}
		}
	cout << "Sum of  first diagonal numbers: " << sum << endl;
	cout << "Sum of  second diagonal numbers: " << sum1 << endl;
	cout << "Sum of both diagonals numbers: " << sum + sum1;
}

