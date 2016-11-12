#include <cstdlib>

class Board
{
  public:
    Board();
    Board(int x, int y);
    ~Board();
    void createBoard(int firstX, int firstY);
    int** board;

  private:
    struct size
    {
      int x;
      int y;
    } boardsize;
    
    int calculateNumMines();

};