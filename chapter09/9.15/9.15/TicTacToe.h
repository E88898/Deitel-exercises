#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:
	TicTacToe();
	enum Status { WIN, DRAW, CONTINUE };
	void makeMove();
	void printBoard();
	bool xoMove(int symbol);
	bool validMove(int row, int column);
	TicTacToe::Status  gameStatus() ;
	

private:
	
	int _board[3][3];
};

#endif
