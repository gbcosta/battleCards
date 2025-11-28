#include "./src/menu.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main() {
  Menu menu;
  sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}),
                          "My window", sf::Style::Titlebar);
  sf::RectangleShape bg({2000.0f, 2000.0f});
  window.setVerticalSyncEnabled(true);
  while (window.isOpen()) {
    window.setSize({WINDOW_WIDTH, WINDOW_HEIGHT});
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }
    window.clear(sf::Color::Black);
    window.draw(bg);
    menu.Draw(window);
    window.display();
  }
}
