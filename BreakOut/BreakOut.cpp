#include <SFML/Graphics.hpp>
#include"Platform.h"
#include"Block.h"
int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    Platform platform(sf::Vector2f(800,600));
    // Main loop
    Block a(sf::Vector2f(5, 5));
    Block b(sf::Vector2f(100, 8));
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Right)
                    platform.move(sf::Vector2f(7, 0));
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left)
                    platform.move(sf::Vector2f(-7, 0));
            }
        }

        // Clear the window
        window.clear();
        window.draw(platform);
        window.draw(a);
        window.draw(b);
        // Display the window contents
        window.display();
    }

    return 0;
}
