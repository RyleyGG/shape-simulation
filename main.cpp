#include <iostream>
#include <cmath>


constexpr float pi = 3.14159265f;

class ParamObj {
    float rot_speed = 1.0f; // angle to rotate every frame

    [[nodiscard]] float get_rot_speed() const {
        return this->rot_speed;
    }
};
constexpr auto param_obj = ParamObj();

void draw_circle() {
    system("cls");
    std::cout << std::endl; // buffer top of shape
    const int radius = 10;
    const int diameter = radius * 2;

    // mapping each point of the circle
    // distance from center of circle to given point is x^2 + y^2
    for (int y = 0; y <= diameter; y++) {
        std::cout << "     "; // buffer left-side of shape
        for (int x = 0; x <= diameter; x++) {
            int dx = x - radius;
            int dy = y - radius;
            float distance = std::sqrt(dx * dx + dy * dy);

            // For a continuous circle, distance == circle for the edge
            // Since output characters are discrete, we approximate this with an upper threshold
            if (std::abs(distance - radius) < 0.5) {
                std::cout << "%";
            }
            else {
                std::cout << " ";
            }
        }

        // After each line, print newline to begin next portion of circle
        std::cout << std::endl;
    }
}


void draw_square() {}


void draw_sphere() {}


void draw_cube() {}


void draw_tiered_discs() {}


int main() {
    float angle = 0.0f;
    int user_choice;
    std::cout << "Select shape to model:" << std::endl
    << "1. Circle" << std::endl
    << "2. Square" << std::endl
    << "3. Sphere" << std::endl
    << "4. Cube" << std::endl
    << "5. Tiered Discs" << std::endl;
    std::cin >> user_choice;

    switch (user_choice) {
        case 1:
            draw_circle();
            break;
        case 2:
            draw_square();
            break;
        case 3:
            draw_sphere();
            break;
        case 4:
            draw_cube();
            break;
        case 5:
            draw_tiered_discs();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }

    system("pause");
    return 0;
}