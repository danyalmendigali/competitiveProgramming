#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "������ ����� �������� ����?(Yes/No)" << endl;
	string s;
	cin >> s;
	if(s == "Yes") {
		cout << "������� ����� �������!" << endl;
		Sleep(4000);
		cout << "������ � �������� ������� ����!" << endl;
		Sleep(2000);
		cout << "������ �� ���������� ����� ����� �� 1 �� 100 � � ������ ����  ����� ������ ��� ������" << endl << "����� ������� � �������. � ��� ���� 7 ������� ���� �� �� ��������� �� � �������  � "  << endl  << "���� �������� � �������� " << endl;
		Sleep(2000);
		cout << "�� ������ �������?(Yes/No)" << endl;
		string f;
		cin >> f;
		if(f == "No") {
			cout << "�� ������ ������ ������� ��� �����. � ��� ���� 7 �������. � ��� ���� �������� ���� ����� ������ ��� ������ �����." << endl;
			Sleep(2000);
			cout << "������ ����������! " << endl;
			Sleep(2000);			
			int a = 1 + rand() % 100;
		    cout << "��������� ����� �����:" << endl;;
		    for(int i = 0; i <= 7; i++) {
		    	cout << "���� " << i << " �������: ";
		    	int b;
		    	cin >> b;
		    	if(b == a) {
		    		cout << "�� ������� �����!" << endl;
		    		cout << "�� ������� �������!" << endl;
		    		return false;
				}
				if(b > a) {
					cout << "���� ����� ������ �����" << endl;;
				} 
				if(b < a) {
					cout << "���� ����� ������ �����" << endl;;
				}
				if(i == 7) {
					cout << "�� ���������" << endl;;
				}
			}			
		}
		
		if(f == "Yes") {
			cout << "����� ���������� � ����!" << endl;;
			Sleep(2000);			
			int a = 1 + rand() % 100;
		    cout << "��������� ����� �����:" << endl;;
		    for(int i = 0; i <= 7; i++) {
		    	cout << "���� " << i << " �������: ";
		    	int b;
		    	cin >> b;
		    	if(b == a) {
		    		cout << "�� ������� �����!" << endl;
		    		cout << "�� ������� �������!" << endl;
		    		return false;
				}
				if(b > a) {
					cout << "���� ����� ������ �����" << endl;;
				} 
				if(b < a) {
					cout << "���� ����� ������ �����" << endl;;
				}
				if(i == 7) {
					cout << "�� ���������" << endl;;
				}
			}
		}
		
	}
	if(s == "No") {
		cout << "�������� �� �������������!" << endl;;
		return false;
	}
	
	
	
	
	
	return 0;
}
