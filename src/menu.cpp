#include "menu.h"

Menu::Menu() {
  const bool srgb = false;

  optionsTexture = new sf::Texture(
      "../assets/options.png", srgb,
      sf::IntRect(sf::Rect(textureTopLeftButton, textureButtonSize)));
  newGameTexture = new sf::Texture(
      "../assets/newGame.png", srgb,
      sf::IntRect(sf::Rect(textureTopLeftButton, textureButtonSize)));
  quitTexture = new sf::Texture(
      "../assets/quit.png", srgb,
      sf::IntRect(sf::Rect(textureTopLeftButton, textureButtonSize)));

  optionsSprite = new sf::Sprite(*optionsTexture);
  newGameSprite = new sf::Sprite(*newGameTexture);
  quitSprite = new sf::Sprite(*quitTexture);

  optionsSprite->setScale(menuScale);
  quitSprite->setScale(menuScale);
  newGameSprite->setScale(menuScale);

  optionsSprite->setPosition(optionsButtonPosition);

  newGameSprite->setPosition(newGameButtonPosition);

  quitSprite->setPosition(quitButtonPosition);
}

void Menu::Draw(sf::RenderWindow &window) {
  window.draw(*newGameSprite);
  window.draw(*optionsSprite);
  window.draw(*quitSprite);
}
