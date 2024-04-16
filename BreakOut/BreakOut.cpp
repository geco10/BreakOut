#include <SFML/Graphics.hpp>
#include"Platform.h"
#include"Global.h"
int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(glob::screenSize.x, glob::screenSize.y), "SFML Window");
    Platform platform;
    // Main loop
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
                    platform.move(sf::Vector2f(5, 0));
            }
        }

        // Clear the window
        window.clear();
        window.draw(platform);
       

        // Display the window contents
        window.display();
    }

    return 0;
}
