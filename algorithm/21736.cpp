/*
#include <iostream>
using namespace std;

int NextPosition(char maze[600][600], int Ni, int Mj);
int N, M;
int visited[600][600] = { 0, };

int TOF(char maze[600][600], int Ni, int Mj)
{
	if (Ni < 0 || Ni >= N || Mj < 0 || Mj >= M || maze[Ni][Mj] == 'X')
		return 0;
	else
	{
		if ((maze[Ni][Mj] == 'O' || maze[Ni][Mj] == 'I') && visited[Ni][Mj] == 0)
		{
			visited[Ni][Mj] = 1;
			return 1;
		}

		else if (maze[Ni][Mj] == 'P' && visited[Ni][Mj] == 0) {
			visited[Ni][Mj] = 1;
			return 1;
		}
		else
			return 0;
	}

}

int NextPosition(char maze[600][600], int Ni, int Mj) {
	static int count = 0, tof;
	tof = TOF(maze, Ni, Mj);
	if (tof == 0)
		return 0;
	if (tof && maze[Ni][Mj] == 'P')
		count++;

	NextPosition(maze, Ni - 1, Mj);
	NextPosition(maze, Ni, Mj - 1);
	NextPosition(maze, Ni, Mj + 1);
	NextPosition(maze, Ni + 1, Mj);

	return count;
}

int main()
{
	int Ni = -1, Mj = -1, result;
	char maze[600][600];
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'I') {
				Ni = i;
				Mj = j;
			}
		}
	}
	if (Ni == -1 && Mj == -1)
	{
		cout << "TT";
	}
	else
	 {
		result = NextPosition(maze, Ni, Mj);
		
		if (result)
			cout << result;
		else
			cout << "TT";
	}
	
}
*/

