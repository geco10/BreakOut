#include <SFML/Graphics.hpp>
#include"Configs.h"
#include"Controller.h"
int main()
{
    globalConfigs.setScreen(sf::Vector2i(800, 600));
    globalConfigs.setGameScreen(sf::Vector2f(15, 10));
    Controller controller;
    // Create a window
    sf::RenderWindow window(sf::VideoMode(globalConfigs.getScreen<int>().x, globalConfigs.getScreen<int>().y), "SFML Window");
    // Main loop
    sf::View view = window.getDefaultView();
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
                    controller.movePlatform(sf::Vector2f(0.2, 0));
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left)
                    controller.movePlatform(sf::Vector2f(-0.2,0));
            }
            if (event.type == sf::Event::Resized) {
                view.setSize({
                   static_cast<float>(event.size.width),
                   static_cast<float>(event.size.height)
                });
                window.setView(view);
                globalConfigs.setScreen(sf::Vector2i(event.size.width, event.size.height));
                
            }
        }
        window.clear();
        window.draw(controller);
        window.display();
    }

    return 0;
}
