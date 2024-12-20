#include <windows.h>
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	system("cls");
	while(1)
	{
		if(GetAsyncKeyState('W'))
		{
			y--;
		}
		if(GetAsyncKeyState('A'))
		{
			x--;
		}
		if (GetAsyncKeyState('S'))
		{
			y++;
		}
		if (GetAsyncKeyState('D'))
		{
			x++;
		}
		if (GetAsyncKeyState(VK_ESCAPE))//ESCÉLÅ[Ç≈èIóπ
		{ 
			break;
		}

		system("cls");
		COORD position = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
		printf("Å_(^_^)Å^");
	}
	return 0;
}