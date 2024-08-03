# Tic-Tac-Toe
### Tic-Tac-Toe Game in C++

## Overview

This is a simple console-based Tic-Tac-Toe game implemented in C++. The game allows two players to take turns playing on a 3x3 grid until one player wins or the game ends in a draw.

## Features

- Play against another human player.
- Alternates turns between players 'X' and 'O'.
- Detects win conditions for rows, columns, and diagonals.
- Detects a draw condition when the board is full and there is no winner.
- Validates player input to ensure moves are within the bounds of the board and not on an already occupied cell.

## Requirements

To compile and run this program, you need:
- A C++ compiler (e.g., `g++`)

## Compilation

To compile the program, use the following command:

```bash
g++ -o tic_tac_toe main.cpp
```

This will generate an executable file named `main`.

## Running the Game

After compilation, you can run the game with:

```bash
./tic_tac_toe
```

Follow the prompts to enter your moves. The board will be displayed after each move, and the game will announce the winner or a draw when the game ends.

## How to Play

1. Player 'X' starts the game by entering the row and column numbers where they want to place their mark.
2. Player 'O' takes their turn similarly.
3. The game continues until a player wins or the board is full, resulting in a draw.
4. The game will display who won or if it ended in a draw and then terminate.

## Code Overview

- **TicTacToe Class**: Manages the game state, player moves, and checks for win/draw conditions.
  - `printBoard()`: Prints the current state of the game board.
  - `playerMove()`: Handles player input and updates the board.
  - `switchPlayer()`: Switches between players 'X' and 'O'.
  - `checkWin()`: Checks for any win conditions.
  - `checkDraw()`: Checks if the game is a draw.
  
- **main() Function**: Initializes the game and starts the play loop.

## Contributing

Feel free to fork the repository, make changes, and submit a pull request. Contributions to improve the game are welcome!

## Contact

For any questions or feedback, please contact [gaurityagi7524@gmail.com](mailto:gaurityagi7524@gmail.com).

Let's  Play the game.

Made with 🤍💖!! 
