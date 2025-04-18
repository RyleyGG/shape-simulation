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

void draw_circle() {}


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