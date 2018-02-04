#include <iostream>

int main(){
    int option = 0;
    float height, tb_radius, mid_radius, result, x = 0;
    /*height = 1;
    tb_radius = 1;
    mid_radius = 0;
    x = 0.5;*/
    do {
        std::cout << " Meni:" << std::endl;
        std::cout << "1. Parametri bacve " << std::endl;
        std::cout << "2. Popunjenost bacve " << std::endl;
        std::cin >> option;
            switch(option){
                case 1:
                    std::cout << "Parametri bacve:"<< std::endl; 
                    std::cout << "Visina:"<< height << std::endl;
                    std::cin >> height; 
                    std::cout << "Gorni/Donji radius:"<< tb_radius << std::endl;
                    std::cin >> tb_radius;
                    std::cout << "Sredisnji radius:"<< mid_radius << std::endl;
                    std::cin >> mid_radius;
                    break;
                case 2:    

                    if(mid_radius != 0){
        /*result = 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius );*/
                        result = ( 3.14 * x / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius ) ) / ( 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius )) * 100 ;
                    }else{
        /*result = 3.14 * tb_radius * tb_radius * height ;  */
                        result = ( ( 3.14 * tb_radius * tb_radius * x ) / ( 3.14 * tb_radius * tb_radius * height ) ) * 100;         
                         }
    
                 std::cout << x << std::endl;    
                 std::cout << result << "%" << std::endl;    

                 return 0;
            }
        }while(true);

}