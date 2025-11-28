#include "menu.h"

Menu::Menu() {
  const bool srgb = false;

  optionsTexture = new sf::Texture(
      "../assets/options.png", srgb,
      sf::IntRect(sf::Rect(textureInitialPosition, textureSize)));
  newGameTexture = new sf::Texture(
      "../assets/newGame.png", srgb,
      sf::IntRect(sf::Rect(textureInitialPosition, textureSize)));
  quitTexture = new sf::Texture(
      "../assets/quit.png", srgb,
      sf::IntRect(sf::Rect(textureInitialPosition, textureSize)));
  cursorTexture = new sf::Texture(
      "../assets/cursor.png", srgb,
      sf::IntRect(sf::Rect(textureInitialPosition, {550, 800})));

  initButton(optionsTexture, optionsSprite, buttonScale, optionsSpritePosition);
  initButton(newGameTexture, newGameSprite, buttonScale, newGameSpritePosition);
  initButton(quitTexture, quitSprite, buttonScale, quitSpritePosition);
  initButton(cursorTexture, cursorSprite, cursorScale, cursorSpritePosition);
}

void Menu::initButton(sf::Texture *&texture, sf::Sprite *&sprite,
                      sf::Vector2f scale, sf::Vector2f spritePosition) {
  sprite = new sf::Sprite(*texture);

  sprite->setScale({scale.x * menuScale.x, scale.y * menuScale.y});

  sprite->setPosition(
      {spritePosition.x - sprite->getGlobalBounds().size.x / 2,
       spritePosition.y - sprite->getGlobalBounds().size.y / 2});
}

void Menu::Draw(sf::RenderWindow &window) {
  window.draw(*newGameSprite);
  window.draw(*optionsSprite);
  window.draw(*quitSprite);
  window.draw(*cursorSprite);
}
