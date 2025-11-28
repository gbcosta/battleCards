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
  sf::Sprite *cursorSprite;
  sf::Texture *quitTexture;
  sf::Texture *newGameTexture;
  sf::Texture *optionsTexture;
  sf::Texture *cursorTexture;
  sf::Vector2f textureSize{840, 475};
  sf::Vector2f textureInitialPosition{0, 0};
  sf::Vector2f optionsSpritePosition{400, 200};
  sf::Vector2f newGameSpritePosition{400, 300};
  sf::Vector2f quitSpritePosition{400, 400};
  sf::Vector2f cursorSpritePosition{550, 200};

  sf::Vector2f cursorScale{0.075f, 0.075f};
  sf::Vector2f buttonScale{0.2f, 0.2f};
  sf::Vector2f menuScale{1.0f, 1.0f};

  void initButton(sf::Texture *&texture, sf::Sprite *&sprite,
                  sf::Vector2f scale, sf::Vector2f spritePosition);

public:
  Menu();
  void Draw(sf::RenderWindow &window);
};

#endif
