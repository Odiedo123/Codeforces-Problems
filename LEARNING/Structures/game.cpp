#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace sf;

int main() {
    // Create window
    RenderWindow window(VideoMode(800, 600), "Dodge the Falling Blocks!");
    window.setFramerateLimit(60);
    
    // Player (rectangle at bottom)
    RectangleShape player(Vector2f(50, 50));
    player.setFillColor(Color::Green);
    player.setPosition(375, 520);
    float playerSpeed = 5.0f;
    
    // Falling obstacles
    std::vector<RectangleShape> obstacles;
    Clock spawnClock;
    float spawnInterval = 1.0f; // Spawn every 1 second
    
    // Game variables
    int score = 0;
    bool gameOver = false;
    
    // Font and text for score
    Font font;
    if (!font.loadFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf")) {
        // Try alternate path for different systems
        font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf");
    }
    Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(24);
    scoreText.setFillColor(Color::White);
    scoreText.setPosition(10, 10);
    
    srand(time(0));
    
    // Main game loop
    while (window.isOpen()) {
        // Handle events
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
        
        if (!gameOver) {
            // Player movement
            if (Keyboard::isKeyPressed(Keyboard::Left) && player.getPosition().x > 0) {
                player.move(-playerSpeed, 0);
            }
            if (Keyboard::isKeyPressed(Keyboard::Right) && player.getPosition().x < 750) {
                player.move(playerSpeed, 0);
            }
            
            // Spawn new obstacles
            if (spawnClock.getElapsedTime().asSeconds() > spawnInterval) {
                RectangleShape obstacle(Vector2f(40, 40));
                obstacle.setFillColor(Color::Red);
                float randomX = rand() % 760; // Random x position
                obstacle.setPosition(randomX, -40);
                obstacles.push_back(obstacle);
                spawnClock.restart();
                score += 10;
            }
            
            // Update obstacles
            for (size_t i = 0; i < obstacles.size(); i++) {
                obstacles[i].move(0, 3); // Fall down
                
                // Check collision with player
                if (player.getGlobalBounds().intersects(obstacles[i].getGlobalBounds())) {
                    gameOver = true;
                }
                
                // Remove obstacles that fell off screen
                if (obstacles[i].getPosition().y > 600) {
                    obstacles.erase(obstacles.begin() + i);
                    i--;
                }
            }
            
            scoreText.setString("Score: " + std::to_string(score));
        } else {
            // Game over state
            scoreText.setString("GAME OVER! Final Score: " + std::to_string(score) + "\nPress ESC to quit");
            scoreText.setPosition(250, 250);
            
            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                window.close();
            }
        }
        
        // Render everything
        window.clear(Color::Black);
        window.draw(player);
        for (auto& obstacle : obstacles) {
            window.draw(obstacle);
        }
        window.draw(scoreText);
        window.display();
    }
    
    return 0;
}// g++ game.cpp -o game -lsfml-graphics -lsfml-window -lsfml-system./game