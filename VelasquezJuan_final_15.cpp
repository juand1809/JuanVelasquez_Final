#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ofstream outfile;
    double m = 7294.29;
    double q = 2.0;
    double c = q/m;
    double delta_t = 0.1;
    double t_init = 0.0;
    double t_max = 10.0;
    double x_init = 1.0;
    double y_init = 0.0;
    double vx_init = 0.0;
    double vy_init = 1.0;
    int N = t_max/delta_t;
    double Ex[N+1];
    double Ey[N+1];
    
    for (int i = 0; i < N+1; i++){
        if(i > 30 && i < 70){
            Ey[i] = 3.0;
        }
        else{
            Ey[i] = 0.0;
        }
    }
    
    outfile.open("datos.dat");
    double t = t_init;
    double x = x_init;
    double y = y_init;
    double vx = vx_init;
    double vy = vy_init;
    while (t < t_max){
        for(int i = 1; i < N; i++){
            outfile << t << " " << x << " " << y << endl;
            x = x + 0.5*(i*delta_t)*vx;
            y = y + 0.5*(i*delta_t)*(c*Ey[i]);
            vy = vy + (i*delta_t)*(i*delta_t)*(c*Ey[i]);
            x = x + 0.5*(i*delta_t)*vx;
            y = y + 0.5*(i*delta_t)*(c*Ey[i]);
            t = t + delta_t;
        }
        
    }

    outfile.close();    
    
    return 0;
}