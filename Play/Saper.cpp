#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void gotoxy(int x, int y)
{
	COORD p = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

class Map {
private: 
     const int BORDER = 100; // граница поля
     const int EMPTY_CELL = 0; // пустая ячейка
     const int MINE = 10; // мина
     int size; // размер поля включая границы
	vector <vector<int> > map;
public:
	Map() {
		 size = 5;
	}
	
	void initMap() {		
		for(int i = 0; i < size; i++) {
				vector <int> temp;
			 for(int j = 0; j < size; j++) {
			 	if(i == 0 || j == 0 || i == size - 1 || j == size - 1) 
			 	   temp.push_back(BORDER);
			 	
			 	   temp.push_back(EMPTY_CELL);
			 }
			 map.push_back(temp);
		}
	}

	

	void show() {
		
		
		for(int i = 0; i < size; i++) {
			 for(int j = 0; j < size; j++) {
			 	
			 	if(map[j][i] == BORDER)
			 	   cout << "#";
			 	else if (map[j][i] == EMPTY_CELL)
			 	   cout << " ";
			 	else if (map[j][i] == MINE)
			 	   cout << "*";
			 	   
			 	else if (map[j][i] >= 1 && map[j][i] <= 8 )
			 	   cout << map[j][i];
			 	
			 	 //	cout << map[j][i] << " ";  
			 	
			 }
			 cout << endl;
		}
	}
	
	// Случайная расстановка мин
	void setRandMines(int numMines) {
		
	// Контроль количества мин которые можно установить на поле
		if(numMines >= (size - 2)*(size - 2)) {
			cout << "Too many mines" << endl;
		  return;
	}
		for(int i = 0; i < numMines; i++)
		{
			int x = 0; 
			int y = 0;
			// Поиск пустой ячейки, не занятой мниой
			do{
			 x = rand() % (size - 2) + 1;
			 y = rand() % (size - 2) + 1;
		} while(map[x][y] == MINE);
			
			map[x][y] = MINE;
		}		
	}
	
	
	// Расстановка чисел не игровом поле
	void setDigits() {
		int d = 0;
		for(int i = 1; i < size - 1; i++) {
			for(int j = 1; j < size - 1; j++) {
			 if(map[j][i] == MINE)
			 	continue;
			 if(map[j][i + 1] == MINE)
			    d++;
			if(map[j][i - 1] == MINE)
			    d++;
			if(map[j + 1][i + 1] == MINE)
			    d++;
			if(map[j + 1][i - 1] == MINE)
			    d++;
			if(map[j - 1][i + 1] == MINE)
			    d++;
			if(map[j - 1][i - 1] == MINE)
			    d++;
			if(map[j + 1][i] == MINE)
			    d++;
			if(map[j - 1][i] == MINE)
			    d++;  
			map[j][i] = d;
			d = 0;
			 
		  }
	  }
  }
	
	
};

class Game {
private:
	void showLogo() {
		gotoxy(40, 9);
		cout << "Saper" << endl;
		Sleep(2000);
		system("cls");
	}
public:	
	void run() {
		//showLogo();
		Map map;
		map.initMap();
		map.setRandMines(2);
		map.setDigits();
		map.show();
	}	
};

int main() {
	setlocale(LC_ALL, "Russian" );
	//srand(time(0));
	rand();
	Game game;
	game.run();
	
	
	
	
	
	
	
	
	return 0;
}

