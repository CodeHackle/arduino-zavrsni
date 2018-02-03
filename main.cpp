#include <iostream>

int main(){
    float height, tb_radius, mid_radius, result, x;
    height = 20;
    tb_radius = 1;
    mid_radius = 0;
    x = rand () % height
    if(mid_radius != 0){
        /*result = 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius );*/
        result = ( 3.14 * x / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius ) ) / ( 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius ))) * 100 ;
                       } 
    else{
        /*result = 3.14 * tb_radius * tb_radius * height ;  */
        result = ( ( 3.14 * tb_radius * tb_radius * x ) / ( 3.14 * tb_radius * tb_radius * height ) ) * 100;         
        }
    std::cout << x << std::endl;    
    std::cout << result << std::endl;


     return 0;
}
   

/*
    
        if(nesto == nesto){
            bla bla
        }else{
            bla bla
        }

        Ako je samo jedna linija onda ne treba {}

        if(nesto == nesto)
            bla bla
        else
            bla bla

        kad imas nesto kao
        
        if(){

        }

        nikad ne stavljaj prvu { u drugu liniju npr.

        if()
        {
            
        }
*/