#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y;
	char board[3][3] = { ' ' };

	cout << " ================= Tic - Tac - Toe ���ӿ� ���Ű� ȯ�� �մϴ�. ====================== " << endl;


	for (int k = 0; k < 9; k++)
	{
		cout << " ���� �Ͻð� ���� x �� y �� ��ǥ�� �Է� ���ּ��� : ";
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