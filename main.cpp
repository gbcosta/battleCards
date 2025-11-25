#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main() {
  sf::RenderWindow window(sf::VideoMode({960, 720}), "My window");

  sf::Texture texture;
  if (!texture.loadFromFile("../assets/options.png", false,
                            sf::IntRect({0, 0}, {840, 475}))) {
    std::cout << "error" << std::endl;
  }
  sf::Sprite sprite(texture);

  sprite.setOrigin({840 / 2.0f, 475 / 2.0f});
  sprite.setScale({0.2f, 0.2f});
  float x = window.getSize().x;
  sprite.setPosition({x / 2.0f, 360});
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }
    window.clear();
    window.draw(sprite);
    window.display();
  }
}
