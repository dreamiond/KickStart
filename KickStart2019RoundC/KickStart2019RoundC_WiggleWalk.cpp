//Round C 2019 - Kick Start 2019£ºWiggle Walk(6pts, 12pts)
/*
Problem
Banny has just bought a new programmable robot. Eager to test his coding skills, he has placed the robot in a grid of squares with R rows (numbered 1 to R from north to south) and C columns (numbered 1 to C from west to east). The square in row r and column c is denoted (r, c).

Initially the robot starts in the square (SR, SC). Banny will give the robot N instructions. Each instruction is one of N, S, E or W, instructing the robot to move one square north, south, east or west respectively.

If the robot moves into a square that it has been in before, the robot will continue moving in the same direction until it reaches a square that it has not been in before. Banny will never give the robot an instruction that will cause it to move out of the grid.

Can you help Banny determine which square the robot will finish in, after following the N instructions?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing the five integers N, R, C, SR and SC, the number of instructions, the number of rows, the number of columns, the robot's starting row and starting column, respectively.

Then, another line follows containing a single string of N characters; the i-th of these characters is the i-th instruction Banny gives the robot (one of N, S, E or W, as described above).

Output
For each test case, output one line containing Case #x: r c, where x is the test case number (starting from 1), r is the row the robot finishes in and c is the column the robot finishes in.

Limits
Memory limit: 1GB.
1 ¡Ü T ¡Ü 100.
1 ¡Ü R ¡Ü 5 ¡Á 104.
1 ¡Ü C ¡Ü 5 ¡Á 104.
1 ¡Ü SR ¡Ü R.
1 ¡Ü SC ¡Ü C.
The instructions will not cause the robot to move out of the grid.

Test set 1 (Visible)
Time limit: 20 seconds.
1 ¡Ü N ¡Ü 100.

Test set 2 (Hidden)
Time limit: 60 seconds.
1 ¡Ü N ¡Ü 5 ¡Á 104.

Sample

Input

Output

3
5 3 6 2 3
EEWNS
4 3 3 1 1
SESE
11 5 8 3 4
NEESSWWNESE


Case #1: 3 2
Case #2: 3 3
Case #3: 3 7


Sample Case #1 corresponds to the top-left diagram, Sample Case #2 corresponds to the top-right diagram and Sample Case #3 corresponds to the lower diagram. In each diagram, the yellow square is the square the robot starts in, while the green square is the square the robot finishes in.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_set>
//#include <math.h>
//
//using namespace std;
//
//void go(vector<vector<bool>> &square, char instruction,vector<int> &pos) {
//	if (instruction == 'N') {
//		while (square[pos[0] - 1][pos[1]] == true) --pos[0];
//		--pos[0];
//		square[pos[0]][pos[1]] = true;
//	}
//	else if (instruction == 'S') {
//		while (square[pos[0] + 1][pos[1]] == true) ++pos[0];
//		++pos[0];
//		square[pos[0]][pos[1]] = true;
//	}
//	else if (instruction == 'E') {
//		while (square[pos[0]][pos[1]+1] == true) ++pos[1];
//		++pos[1];
//		square[pos[0]][pos[1]] = true;
//	}
//	else {
//		while (square[pos[0]][pos[1]-1] == true) --pos[1];
//		--pos[1];
//		square[pos[0]][pos[1]] = true;
//	}
//}
//
//int main() {
//	int t = 0, n = 0, r = 0, c = 0, sr = 0, sc = 0;
//	cin >> t;
//	int count = 1;
//	while (count<=t) {
//		cin >> n >> r >> c >> sr >> sc;
//		vector<vector<bool>> square(r, vector<bool>(c, false));
//		square[sr - 1][sc - 1] = true;
//		char instruction = ' ';
//		vector<int> pos{ sr - 1,sc - 1 };
//		while (n--) {
//			cin >> instruction;
//			go(square, instruction, pos);
//		}
//		cout << "Case #" << count << ": " << pos[0] + 1 << " " << pos[1] + 1 << endl;
//		++count;
//	}
//	return 0;
//}