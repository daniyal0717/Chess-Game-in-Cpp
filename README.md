# Chess Game in C++

A console-based two-player Chess Game built in C++ as part of the **Object Oriented Programming Lab Semester Project** at FAST-NUCES, Faisalabad-Chiniot Campus (Spring 2026).

---

## Project Overview

This project implements a fully functional two-player chess game in the terminal, demonstrating core OOP principles including inheritance, polymorphism, encapsulation, and composition.

---

## Features

- **8×8 Chessboard** displayed in the console using text/symbols
- **All 6 Chess Pieces** — Pawn, Rook, Knight, Bishop, Queen, King — each implemented as a class
- **Valid Move Enforcement** — illegal moves are rejected
- **Turn-based System** — White moves first, then Black alternates
- **Check & Checkmate Detection** — game ends when the King is captured or checkmate is reached
- *(Optional)* Stalemate / draw condition detection

---

## OOP Concepts Demonstrated

| Concept | How It's Applied |
|---|---|
| **Encapsulation** | Each class uses protected data members, allowing derived piece classes to access inherited attributes directly |
| **Inheritance** | `Pawn`, `Rook`, `Knight`, `Bishop`, `Queen`, `King` all inherit from a base `Piece` class |
| **Polymorphism** | `isValidMove()` is a `virtual` function overridden by each piece class |
| **Composition** | The `Board` class contains and manages `Piece` objects |

---

## Project Structure

```
chess-game/
├── src/
│   ├── main.cpp
│   ├── Board.h / Board.cpp
│   ├── Piece.h / Piece.cpp
│   ├── Pawn.h / Pawn.cpp
│   ├── Rook.h / Rook.cpp
│   ├── Knight.h / Knight.cpp
│   ├── Bishop.h / Bishop.cpp
│   ├── Queen.h / Queen.cpp
│   └── King.h / King.cpp
├── report/
│   └── project_report.pdf
├── .gitignore
└── README.md
```

---

## How to Build & Run

### Prerequisites
- Visual Studio 2019 or later (recommended)
- Or any C++17-compatible compiler (g++, clang++)

### Using Visual Studio
1. Clone the repository
2. Open the `.sln` file in Visual Studio
3. Build the solution (`Ctrl+Shift+B`)
4. Run (`Ctrl+F5`)

### Using g++ (terminal)
```bash
g++ src/*.cpp -o chess -std=c++17
./chess
```

---

## How to Play

1. The board is displayed after each move
2. Enter moves in the format: `row col` for source, then `row col` for destination  
   *(e.g., `6 4` → `4 4` to move a pawn forward two squares)*
3. White always goes first
4. The game ends on checkmate or King capture

---

## Group Members

| Name | GitHub |
|---|---|
| Member 1 | [@username](https://github.com/username) |
| Member 2 | [@username](https://github.com/username) |
| Member 3 | [@username](https://github.com/username) |

---

## Deliverables

- [x] Source Code
- [ ] Project Report (2–3 pages)
- [ ] Demo / Viva

---

## Course Info

**Course:** Object Oriented Programming Lab  
**Campus:** FAST-NUCES
**Semester:** Spring 2026
