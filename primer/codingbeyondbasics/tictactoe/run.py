"""
Option 1:

    - Model the state of the board
    - e.g 3x3 array of arrays with player tokens for each item
    - New moves are entered as (x,y) coords
    - New moves are valid if array locations is empty
    - ... how to compute the victory
    - Printing the board is basically printing the state
    - Maybe we also store who is the current player
    - Would we need to be able to undo a move?
    - We wouldn't be able to replay the game? Or save partial in a databse and continue
    ?
Option 2:
    - Model the state as the sequence of moves
    - Derive the layout of the board from the prior sequence of moves
    - Computing victory is comparably hard/easy
    - A little more work to print the board
    - Maybe a little more work to validate moves?
    - If we want to support replaying a game or undoing moves etc, this will be straightforward

Lets go with option 2:
    - State is a sequence of moves in Python list
    - Each move will be modeled as an integer between 0 and 8 inclusive
    - Validation: must be an in range that hasn't already been selected




add_moves(moves,m):
    - validate the move
    - append m to the moves
check_winner(moves): -> 0,1 or None
    - deinterleave player moves into those played by player 0 and player 1 e.g. [0,9,1,8,2] would become [0,1,2] and [9,8] 
    - Treat each player moves as sets 
    - Compare the player moves to victory conditions move sets, e.g {0,1,2} would be a horizontal victory
    - Subtracting played set from victory condition set results in an empty or non-empty set... if empty, that player has won
print_board(moves):
    - reformat 1x9 as 3x3 grTypeError: unhashable type: 'set'id, for printing
    - have default items of A to I, so that player can select which square to play 
    - for each move that has been made,overwrite the placeholder letter with X or O 
next_player(moves):
    - len(moves) %2

"""
PLAYER_SYMBOLS =('X', 'O')

VICTORY_CONDITIONS = {

        (0,1,2) , (3,4,5) , (6,7,8) ,   # horizontal
        (0,3,6) , (1,4,7) , (2,5,8) ,   # vertical 
        (0,4,8) , (2,4,6)               # diagonal 
}
def winner(moves):
    p0=moves[::2]
    p1=moves[1::2]
    for i,played in enumerate((set(moves[::2]), set(moves[1::2]))):
        for needed in VICTORY_CONDITIONS:
            if len(needed - played) == 0:
                return i


def add_move(moves, m):
    try:
        ord(m.lower()) - ord('a')
        assert 0 <= mi < 9
        assert mi not in moves
    except (AttributeError, TypeError, AssertionError):
        return false
    moves.append(mi)
    return True

def print_board(moves):
    board=list('abcdefghi')
    for i,m in moves:
        board[m]=PLAYER_SYMBOLS[i%2]
    print(moves)

if __name__=='__main__':
    assert winner([0,8,1,7,2]) == 0
    assert winner([0,2,1,5,3,8]) == 1
    assert winner([1]) is None
    moves=[0,1]
    assert add_moves(moves,'c')
    assert len(moves) == 3
    assert not add_move(moves,'c')
    assert not add_move(moves,'j')
    assert not add_move(moves,2)
    print_board([0,8,1,7,2])
    print("ok")















