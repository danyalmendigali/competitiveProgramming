#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD p = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

class Map {
private: 
     const int EMPTY_CELL = 0; // пустая ячейка
     const int MINE = 10; // мина
     int size; // размер поля включая границы
     const int BORDER = 100; // граница поля
	 vector <vector<int> > map;
	vector <vector<int> > mask;	 		
public: 
	Map() {
		 size = 10;
	}
	
	int  openCell(int x, int y) {
		mask[y][x] = 1;
	 	
		if(map[x][y] == MINE) {
			return 0;
		}
		
		}
	
	bool isBorder(int x, int y) {
		
		if(x < 0 || x >= size)
		  return false;
		  
		if(y < 0 || y >= size)
		  return false;
		
	   if(map[x][y] == BORDER) {
	   	 	return true;
	     }
	     return false; 
   }
	
	void initMap() {		
		for(int i = 0; i < size; i++) {
				vector <int> temp;
			 for(int j = 0; j < size; j++) {
			 	if(i == 0 || j == 0 || i == size - 1 || j == size - 1) 
			 	   temp.push_back(BORDER);
                 else
			 	   temp.push_back(EMPTY_CELL);
			 }
			 map.push_back(temp);
		}
	}
	
	
	
	void initMask() {		
		for(int i = 0; i < size; i++) {
				vector <int> temp;
			 for(int j = 0; j < size; j++) {
			 	if(i == 0 || j == 0 || i == size - 1 || j == size - 1) 
			 	   temp.push_back(BORDER);
                 else
			 	   temp.push_back(EMPTY_CELL);
			 }
			 mask.push_back(temp);
		}
	}	

	

	void show() {
		gotoxy(0, 0);
		 		
		for(int i = 0; i < size; i++) {
			 for(int j = 0; j < size; j++) {
			 	
			 	if(mask[i][j] == EMPTY_CELL) {
			 		cout << ".";
			 		continue;
				 }
			 	
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

class Keyboard {
private :
	int ch = 0;	
public:	
	Keyboard() {	
		ch = 0;
	}
	
	void waitKey() {
	  ch = _getch();	
     }
	  
     int getKey() {
       return ch;	
	 }
};

class Cursor {
private:
	int x = 1;
	int y = 1;
		
	int tx = 1;
	int ty = 1;
public:
	void save() {
	 tx = x;
	 ty = y;				
	} 
	
	void undo() {
	 x = tx;
	 y = ty;				
	}
	
	void incX() {
		x++;
	}
	
	void decX() {
		x--;
	}
	
	void incY() {
		y++;
	}
	
	void decY() {
		y--;
	}
	
	int getX() {
		return x;
	}
	
	int getY() {
		return y;
	}
	
	void move() {
		gotoxy(x, y);
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
		map.initMask();
		map.setRandMines(9);
		map.setDigits();
		map.show();
		
		Keyboard kb;	
		Cursor cs;
		
		cs.move();
		
		bool exit = false;
			
		while(!exit) {
			kb.waitKey();
			cs.save();
				
			switch(kb.getKey()) {
				case 77: cs.incX(); break; // вправо
				case 80: cs.incY(); break; // вниз
				case 75: cs.decX(); break; // влево
				case 72: cs.decY(); break; // вверх
				case 13:
				  if (map.openCell(cs.getX(), cs.getY()) == 0){
				map.show();
				
				gotoxy(40, 9);
			    cout << "Game over";
			    Sleep(2000);
			    
			      exit = true;
		 	    }
		 	    map.show();
				break; // вверх					
			}
			
			
			if(map.isBorder(cs.getX(), cs.getY())) {
				cs.undo();
			}
			cs.move(); 	 

			
		}
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

