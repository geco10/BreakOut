#include <SFML/Graphics.hpp>
#include"Platform.h"
#include"Configs.h"
#include"LevelManager.h"
int main()
{
    globalConfigs.setScreen(sf::Vector2i(800, 600));
    // Create a window
    sf::RenderWindow window(sf::VideoMode(globalConfigs.getScreen<int>().x, globalConfigs.getScreen<int>().y), "SFML Window");
    Platform platform(globalConfigs.getScreen<float>());
    // Main loop
   
    LevelManager manage;
    manage.switchLevel(1);
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
        window.draw(manage);
        // Display the window contents
        window.display();
    }

    return 0;
}
