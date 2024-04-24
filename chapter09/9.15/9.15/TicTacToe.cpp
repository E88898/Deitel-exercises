#include "TicTacToe.h"
#include <iostream>
#include <iomanip>

TicTacToe::TicTacToe()
{
	for (int row = 0; row < 3; ++row) {
		for (int column = 0; column < 3; ++column) {
			_board[row][column] = ' ';
		}
	}
}
void TicTacToe::printBoard() 
{
	std::cout << "   0   1   2\n\n";
	for (int row = 0; row < 3; ++row) {
		std::cout << row;
		for (int column = 0; column < 3; ++column) {
			std::cout << std::setw(3) << static_cast<char> (_board[row][column]);
	
			if (column != 2) {
				std::cout << " |";
			}
	
		}
	
		if (row != 2) {
			std::cout << "\n ____|____|____"
				      << "\n     |    |    \n";
		}
	
	}
	
	 std::cout << "\n\n";
}
bool TicTacToe::validMove(int row, int column) 
{
	return row >= 0 && row < 3 && column >= 0 && column < 3 && _board[row][column] == ' ';
}

bool TicTacToe::xoMove(int symbol)
{
	int x, y;
	do {
		std::cout << "Player " << static_cast<char> (symbol)
			      << " enter move: ";
		std::cin >> x >> y;
		std::cout << std::endl;
	} while (!validMove(x,y));
	_board[x][y] = symbol;
	printBoard();
	Status xoStatus = gameStatus();
	if (xoStatus == WIN) {
		std::cout << "Player " << static_cast<char>(symbol)
			<< " wins!\n";
		return true;
	} else if (xoStatus == DRAW) {
		std::cout << "Game is a draw.\n";
		return true;
	} else {
		return false;
	}
}

TicTacToe::Status TicTacToe::gameStatus() 
{

	if (_board[0][0] != ' ' && _board[0][0] == _board[1][1] && _board[0][0] == _board[2][2]) {
		return WIN;
	}
	else if (_board[2][0] != ' ' && _board[2][0] == _board[1][1] && _board[2][0] == _board[0][2]) {
		return WIN;
	}
	for (int idx = 0; idx < 3; ++idx) {
		if (_board[idx][0] != ' ' && _board[idx][0] == _board[idx][1] && _board[idx][0] == _board[idx][2]) {
			return WIN;
		}
	}
	for (int idx = 0; idx < 3; ++idx) {
		if (_board[0][idx] != ' ' && _board[0][idx] == _board[1][idx] && _board[0][idx] == _board[2][idx]) {
			return WIN;
		}
	}
	
	
	for (int row = 0; row < 3; ++row) {
		for (int column = 0; column < 3; ++column) {
			if (_board[row][column] == ' ') {
				return CONTINUE;
			}
		}
	}	
	return DRAW;

}

void TicTacToe::makeMove() 
{
	printBoard();
	while (true) {
		if (xoMove('X')) {
			break;
		} else if (xoMove('O')) {
			break;
		}
	}
}
