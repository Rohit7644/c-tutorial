#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;

COORD c;

bool gameover;
int width=20;
int height=20;
int x, y;
int x_tail[20],y_tail[20];
int fruitX, fruitY, score,length_of_snake=1;
enum eDirection{STOP=0, LEFT, RIGHT, UP, DOWN
};
eDirection dir;
void start_page();
void setup()
{
	gameover= false;
	dir =STOP;
	x = width/2;
	y =height /2;
	fruitX =rand()%width;
	fruitY =rand()% height;
	score =0 ;
}
void draw()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , c);
	for (int i =0 ; i<width+2 ;i++ )
	{
		cout<<"#";
	}
	cout<<endl;
	for ( int i=0 ;i< height ;i++)
	{
		for(int j=0 ;j< width; j++)
		{
			if(j==0)
			{
				cout<<"#";
			}
			
			if (i==y && j==x)
			{
				cout<<"O";
			}
			else if (i ==fruitY && j==fruitX)
			{
				cout<<"*";
			}
			else
			{
				bool print_space= true;
				for(int k=0 ;k<length_of_snake-1;k++)
				{
				if(i==y_tail[k]&& j==x_tail[k])
				{
					cout<<"o";
					print_space=false;
				}
			
				}
				if(print_space){
					cout<<" ";
				}	
			
			
			}
			if(j==width-1)
			{
				cout<<"#";
			}
		}
		cout<<endl;
	}
	for (int i =0 ; i<width+2 ;i++ )
	{
		cout<<"#";
	}
	cout << endl;
	cout << "Score:" << score << endl<<"length_of_snake:"<<length_of_snake<<endl;
	
}

void input()
{
	if(_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameover = true;
			break;		
		}
	}
}

void collider()
{
//	if(x>height||y>width||x<0||y<0)
//	{
//		gameover =true;
//		cout<<endl<<y<<endl<<fruitY;
//	}
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;	
	for(int i=0; i<length_of_snake-1;i++)
	{
		if(x==x_tail[i]&&y==y_tail[i])
		{
			gameover =true;
		}
	}
	if(x==fruitX && y==fruitY)
	{
		fruitX =rand() % width;
		fruitY = rand()% height;
		score+=10;
		length_of_snake++;
	}
}
int prev_head_x,prev_head_y, temp_tail_pos_X,temp_tail_pos_Y;
void change_snake_tail_pos()
{
	for(int i=0;i<length_of_snake-1;i++){
		temp_tail_pos_X = x_tail[i];
		x_tail[i] = prev_head_x;
		prev_head_x =temp_tail_pos_X;
		temp_tail_pos_Y = y_tail[i];
		y_tail[i] = prev_head_y;
		prev_head_y =temp_tail_pos_Y;
	}
}

void logic()
{
	prev_head_x = x;
	prev_head_y = y;
	change_snake_tail_pos();
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
}

int main()
{
	setup();
	while(!gameover)
	{
		draw();
		input();
		logic();
		collider();
		
//		Sleep(100);		
	}
    return 0;
}

void start_page()
{
	     
}
