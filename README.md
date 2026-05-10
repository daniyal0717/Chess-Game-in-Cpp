# Chess Game in C++

A semester project for Object Oriented Programming that implements a two-player chess game in C++.  
The project began as a console-based chess engine and was later extended with an SFML graphical user interface.

## Project Overview

This project was developed to demonstrate Object Oriented Programming concepts through a complete chess application.  
It supports the standard chessboard setup, legal move validation, turn-based gameplay, check/checkmate handling, special pawn rules, and a graphical interface for easier interaction.

## Group Members 
| [Daniyal Khalid](https://github.com/daniyal0717) | 
| [Muhammad Hassan](https://github.com/muhammadhassanoffi-cs) | 
| [Umar Khan](https://github.com/aouomarkhan4-glitch) |

## Main Features

- 8x8 chessboard with standard starting position
- Separate classes for all six chess pieces
- Legal move validation for Pawn, Rook, Knight, Bishop, Queen, and King
- Turn-based two-player gameplay
- Piece capturing
- Check detection
- Checkmate detection
- Stalemate detection
- Pawn promotion
- En passant
- SFML-based graphical board and piece rendering
- Mouse-based piece selection and movement
- Clickable promotion choices in the GUI

## OOP Concepts Used

### Encapsulation

The project stores data and behavior inside dedicated classes instead of using global logic.  
For example, the `board` class manages board state, move execution, and special-rule tracking such as en passant and promotion state.

### Inheritance

The player module demonstrates inheritance through the `playerinfo` base class and the `info` derived class.

### Polymorphism

The `playerinfo` class uses virtual functions such as `setinfo()`, `display()`, and `getid()`, which are implemented in the derived `info` class.

### Composition

The `board` class is composed of helper objects such as:

- `Pawn`
- `Rook`
- `Knight`
- `Bishop`
- `Queen`
- `King`
- `pieces`

The `game` class is also composed of:

- `board`
- player objects
- `sf::RenderWindow`
- `Renderer`

### Abstraction

Each class focuses on one responsibility:

- piece classes handle piece movement rules
- `pieces` handles check/checkmate/stalemate logic
- `board` manages game state and move processing
- `Renderer` handles drawing
- `game` handles event flow and GUI control

## Project Structure

- `main.cpp`  
  Starts the application by creating a `game` object and calling `run()`.

- `game.hpp` / `game.cpp`  
  Control the main game flow, SFML window, mouse clicks, player turns, promotion state, and endgame behavior.

- `renderer.h` / `renderer.cpp`  
  Draw the board, chess pieces, selected square highlight, status bar, and promotion overlay.

- `board.h` / `board.cpp`  
  Store the chessboard state, initialize pieces, validate moves, apply moves, and handle check/checkmate/promotion logic.

- `pieces.h` / `pieces.cpp`  
  Provide higher-level rule checking such as `isincheck`, `checkmate`, `checklegal`, `haslegalmove`, and `stalemate`.

- `Pawn`, `Rook`, `Knight`, `Bishop`, `Queen`, `King`  
  Each class handles the legal movement rules for its own chess piece.

- `playerinfo.hpp` / `playerinfo.cpp`  
  Manage player information using abstract and derived classes.

## GUI Extension

The GUI is implemented using SFML.

It adds:

- graphical board rendering
- piece textures
- mouse input instead of typed move coordinates
- status messages in the window
- clickable promotion options

The important design choice is that the GUI does not replace the chess logic.  
Instead, it acts as a presentation layer on top of the existing object-oriented game engine.

## Technologies Used

- C++
- SFML
- Visual Studio

## Build Requirements

To build and run the project with GUI support, the following are needed:

- Visual Studio with C++ development tools
- SFML installed on the system
- SFML include directory added to project settings
- SFML library directory added to linker settings
- SFML DLL files available in the output folder

Example linked libraries:

- `sfml-graphics-d.lib`
- `sfml-window-d.lib`
- `sfml-system-d.lib`

## How to Run

1. Open the project solution in Visual Studio.
2. Make sure SFML paths are configured correctly.
3. Build the project in `Debug x64` or `Release x64`.
4. Run the program.
5. Click once to select a piece and click again to choose the destination square.

## Screenshots

<img width="875" height="992" alt="Screenshot 2026-05-10 221741" src="https://github.com/user-attachments/assets/b42f00e3-0fb1-454b-ae6e-cc0e7e157c86" />


## Future Improvements

- Castling
- Better check notification in GUI
- Move history panel
- Restart game button
- Player name display inside the GUI
- Sound effects and animations

## Academic Note

This project was created as a semester project for OOP and is mainly focused on demonstrating class design, modularity, and object-oriented thinking through a complete chess application.
