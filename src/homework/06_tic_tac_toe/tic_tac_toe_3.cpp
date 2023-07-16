#include "tic_tac_toe_3.h"
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if ((pegs[i] == pegs[i+3]) && (pegs[i+3] == pegs[i+6]) && (pegs[i] != " "))
        {
            return true;
        }
    }

    return false;
}

/*
class function check_row_win
@@ -20,7 +31,18 @@ Win by row if
6,7,8 are equal
*/

bool TicTacToe3::check_row_win()
{
    for (int i = 0; i < 9; i+=3)
    {
        if ((pegs[i] == pegs[i+1]) && (pegs[i+1] == pegs[i+2]) && (pegs[i] != " "))
        {
            return true;
        }
    }

    return false;
}

/*
class function check_diagonal_win
@@ -30,3 +52,17 @@ Win diagonally
6 7 8
*/

bool TicTacToe3::check_diagonal_win()
{
    if ((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]) && (pegs[0] != " "))
    {
        return true;
    }
    else if ((pegs[6] == pegs[4]) && (pegs[4] == pegs[2]) && (pegs[6] != " "))
    {
        return true;
    }

    return false;
}
 21 changes: 20 additions & 1 deletion21  
src/homework/06_tic_tac_toe/tic_tac_toe_3.h
@@ -1 +1,20 @@
//h
//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H


class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3(): TicTacToe(3){};

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

};

#endif