#include <iostream>

int main()
{
    float height, tb_radius, mid_radius, result;
    height = 1;
    tb_radius = 1;
    mid_radius = 1;
    result = 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius );
    std::cout << result << std::endl;

     return 0;
}
   

