#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
    std::ifstream file("DayOneData.txt");
    std::string line;

    int highestCalories = 0;
    int currentCalories = 0;
    std::vector<int> calorieList;
    
    while(std::getline(file, line)){
        if(line.empty()){
            calorieList.push_back(currentCalories);
            // if(currentCalories > highestCalories){
            //     highestCalories = currentCalories;
            // }
            currentCalories = 0;
        }
        else{
            currentCalories += std::stoi(line);

        }
    }
    std::sort(calorieList.begin(), calorieList.end());
int total = std::accumulate(calorieList.end()-3, calorieList.end(), 0);
std::cout<<total<<std::endl;
return 0;
}

