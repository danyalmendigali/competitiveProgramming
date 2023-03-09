#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD p = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

class Game {
public:	
	Game(){ 
	}
	
	void showField() {		
		 for(int i = 0; i < 15; i++) {
		 	cout << "#" << endl;		 		 	
		 }		 
		  for(int i = 0; i < 20; i++) {
		 	cout << "#"; 		 	
		 }			 
		 for(int i = 0; i < 15; i++) {
		 	gotoxy(19, i);
		 	cout << "#";		 		 	
		 }		 		  
	}
	
	int run() {
		showField();
		
		int ch = 0;
		int i = 0;
		
		int x = 5, y = 5;
		
		while (true) {
			
			while(!_kbhit()) {
				gotoxy(x, y);
				cout << i % 10;
				i++;
			} 
			
			ch = _getch();
			
			if(ch == 224) {
				ch = _getch();
				gotoxy(20, 20);
				cout << ch;
			}
			
			
			switch(ch) {
			    case 77: // вправо
			      x++;
			     break;
			    case 80: // вниз
			      y++;
			     break;
				case 75: // влево
			      x--;
			     break;	
				case 72: // вверх
			      y--;
			     break;				 					
			}
						
		}
		
		return 0;
	}
};

int main() {
	Game game;
	game.run();
	_getch();

	
	return 0;
}
