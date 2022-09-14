#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y;
	char board[3][3] = { ' ' };

	cout << " ================= Tic - Tac - Toe 게임에 오신걸 환영 합니다. ====================== " << endl;


	for (int k = 0; k < 9; k++)
	{
		cout << " 선택 하시고 싶은 x 와 y 의 좌표를 입력 해주세요 : ";
		cin >> x, cin >> y;

		if (k % 2 == 0)
		{
			board[x][y] = 'X';
		}
		else
			board[x][y] = 'O';

		cout << "---|---|---" << endl;
		cout << " " << board[0][0] << " |" << " " << board[0][1] << " |" << " " << board[0][2] << endl;
		cout << "---|---|---" << endl;
		cout << " " << board[1][0] << " |" << " " << board[1][1] << " |" << " " << board[1][2] << endl;
		cout << "---|---|---" << endl;
		cout << " " << board[2][0] << " |" << " " << board[2][1] << " |" << " " << board[2][2] << endl;


	}
	return 0;
}