#include <iostream>
using namespace std;

int main()
{
	int angka;

	cout << "Masukkan banyak angka : "; cin >> angka;

	int arr[angka];
	int max = -99999;
	int min = 99999;
	
	for(int i = 0; i <angka; i++){
		cout << "Angka ke-" << i + 1 << " : "; cin >> arr[i];
	}
	cout << endl << endl;

	cout << "__Hasil__\n";
	cout << "Deret 		: ";
	for(int j = 0; j <angka; j++){
		cout << arr[j] << " ";
	}
	cout << endl;
	cout << "Maksimum 	: ";
	for(int k = 0; k <angka; k++){
		if(arr[k] > max){
			max = arr[k];
		}
		if(arr[k] < min){
			min = arr[k];
		}
	}
	cout << max << endl;
	cout << "Minimum 	: " << min << endl;
	cout << "Rata-rata 	: ";
	float total = 0;
	float rata;
	for(int l = 0; l < angka; l++){
		total += arr[l];
	}
	rata = (total/angka) * 1.0;
	cout << rata << endl;

	int selisih,max2 = -99999, selisih1;
	
	cout << "Selisih Max	: ";
	for(int m = 0; m < angka- 1; m++){
		selisih = arr[m] - arr [m+1];
		if(selisih < 0){
			selisih * (-1);
		}
		if(selisih > max2){
			max2= selisih;
		}
	}
	cout << max2<< endl;
	system("pause");
	return 0;
}