#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// ���������� ����� � �������
	int n;
	cin >> n;
	
	int mass[n];
	// ���������� �������
	for(int i = 0; i < n; i++) {
		cout << i + 1 << "-�� �������: ";
		cin >> mass[i];
	}
	
	// ����� ���������� �������
	cout << "�������� ������ : ";
	for(int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
	
	
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < n - i; j++ ) {
			if(mass[j] < mass[j + 1]) {
				// ����� �������
				int temp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = temp;
			}
			
		}
	}
	
	// ��������������� ������
	cout << "��������������� ������ : ";
	for(int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	cout << endl << endl;
	
	
	
	
	
	return 0;
}
