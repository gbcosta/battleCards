#ifndef MENU_H
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#define MENU_H

class Menu {
private:
  sf::Sprite *quitSprite;
  sf::Sprite *newGameSprite;
  sf::Sprite *optionsSprite;
  sf::Texture *quitTexture;
  sf::Texture *newGameTexture;
  sf::Texture *optionsTexture;

  sf::Vector2f textureButtonSize{840, 475};
  sf::Vector2f textureTopLeftButton{0, 0};

  sf::Vector2f menuScale{0.2f, 0.2f};
  sf::Vector2f optionsButtonPosition{400, 200};
  sf::Vector2f newGameButtonPosition{400, 300};
  sf::Vector2f quitButtonPosition{400, 400};

public:
  Menu();
  void Draw(sf::RenderWindow &window);
};

#endif
