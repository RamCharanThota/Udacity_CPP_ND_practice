#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void normalize_P_weights(vector<float> &p_weights){
     float sum =0;
     for (float weights:p_weights){
         sum = sum+weights;
     }

     for(float &weights:p_weights){
         weights=weights/sum;
     }


}

void cumulative_weights(vector<float>&p_weights){
    float particle_cumulative_weight=0;
    for (float &weights:p_weights){
        weights=weights+particle_cumulative_weight;
        particle_cumulative_weight=weights;

    }
}

void print_particle_weights(vector<float> weight_particles){

    for (float we:weight_particles){
        cout<<we<<endl;
    }

}



vector<string>low_variance_sampler(vector<string> particles,vector<float>particle_w){

    vector<string> resampled_particles{};
    srand((unsigned) time(0));

    float randomNumber = ((float)(rand()/RAND_MAX ))*0.1;
    int i=1;
    float weight_threshold= particle_w[1];

    for (int p=1; p<11;p++){
        float u =randomNumber+(p-1)*(0.1);
        while(u>weight_threshold) {
            i=i+1;
            weight_threshold=weight_threshold+particle_w[i];
        }
        resampled_particles.push_back(particles[i]);

    }



    return resampled_particles;
}

int main(){
    vector<string> particle_name ={"p1","p2","p3","p4","p5","p6","p7","p8","p9","p10"};
    vector<float>particle_weight={20,40,50,1000,20,50,70,10,9,60};
    normalize_P_weights(particle_weight);// weights are normalize to 1
    cumulative_weights(particle_weight);// vector of particle cumulative weights
    
    vector<string> resam_particles=low_variance_sampler(particle_name,particle_weight);// resampling the particles 
    // using low variance sampler method

    for (string res_parti:resam_particles){ // printing the resampled particles
        cout<<res_parti<<endl;
    }

    

    

}