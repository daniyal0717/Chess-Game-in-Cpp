#pragma once
#include <SFML/Graphics.hpp>
#include "board.h"
#include <array>

class Renderer {
public:
    static constexpr int TILE = 110;
    static constexpr int BOARD_SIZE = TILE * 8;
    static constexpr int STATUS_BAR_HEIGHT = 84;
    static constexpr int WINDOW_WIDTH = BOARD_SIZE;
    static constexpr int WINDOW_HEIGHT = BOARD_SIZE + STATUS_BAR_HEIGHT;

    Renderer(sf::RenderWindow& window);
    void loadTextures();
    void drawBoard();
    void drawPieces(board& b);
    void highlightSquare(int row, int col);
    void drawPromotionOverlay(bool whitePlayer);
    char getPromotionChoiceAt(int mouseX, int mouseY, bool whitePlayer) const;

private:
    sf::RenderWindow& window;
    sf::Texture textures[12];
    sf::Sprite  sprites[12];

    int getTextureIndex(char piece);
    std::array<sf::FloatRect, 4> getPromotionOptionRects() const;
};
