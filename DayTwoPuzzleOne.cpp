#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
    std::ifstream file("DayTwoData.txt");
    std::string line;

    int currentWins = 0;
    int totalWins;

    while(std::getline(file,line)){
        char c1 = line.at(0);
        char c2 = line.at(2);

        if (c1 == 'A' && c2 == 'X') {
            currentWins = currentWins + 3;
        }
        if(c1 =='A' && c2 == 'Y'){
            currentWins = currentWins + 1;
        }
        if(c1 == 'A' && c2 == 'Z'){
            currentWins = currentWins + 2;
        }

        if(c1 == 'B' && c2 == 'X'){
            currentWins = currentWins + 1;
        }
        if(c1 == 'B' && c2 == 'Y'){
            currentWins = currentWins + 2;
        }
        if(c1 == 'B' && c2 == 'Z'){
            currentWins = currentWins + 3;
        }

        if(c1 == 'C' && c2 == 'X'){
            currentWins = currentWins + 2;
        }
        if(c1 == 'C' && c2 == 'Y'){
            currentWins = currentWins + 3;
        }
        if(c1 == 'C' && c2 == 'Z'){
            currentWins = currentWins + 1;
        }


       if(c2 == 'X'){
        currentWins = currentWins + 0;
       }
       if(c2 == 'Y'){
        currentWins = currentWins + 3;
       }
       if(c2 == 'Z'){
        currentWins = currentWins + 6;
       }

    }
    std::cout<<currentWins<<std::endl;
    return 0;
}