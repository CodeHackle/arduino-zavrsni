#include <iostream>

int main(){
    float height, tb_radius, mid_radius, result;
    height = 1;
    tb_radius = 1;
    mid_radius = 0;
    

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

    if(mid_radius != 0)
        result = 3.14 * height / 12 * (2 * mid_radius * mid_radius + tb_radius * tb_radius );
    else
        result = 3.14 * tb_radius * tb_radius * height ;             
   
    std::cout << result << std::endl;

     return 0;
}
   

