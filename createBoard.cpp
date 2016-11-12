#include "createBoard.h"

Board::Board()
{
}

Board::Board(int x, int y)
{
  boardsize.x = x;
  boardsize.y = y;
}

Board::~Board()
{
}

int Board::calculateNumMines()
{
  return 0.1*boardsize.x*boardsize.y;
}

// This function will place mines and hints based on the user's first click
void Board::createBoard(int firstX, int firstY)
{
  int mines = calculateNumMines();

  board = new int*[boardsize.y];
  for (int i = 0; i < boardsize.y; i++)
  {
    board[i] = new int[boardsize.x];
    for (int j = 0; j < boardsize.x; j++)
    {
      // if random number matches random number for mine?
        // then mark as mine (-1)
        // add i*j to list of mines
        // decrement mine count 
    }
  }

  // loop over list of mines
  // generate numbers based on mine locations
  
  // return board
}