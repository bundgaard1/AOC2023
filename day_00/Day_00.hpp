#pragma once
#include "../IDay.h"
#include "../utils.h"

class Day_xx : public IDay {
   public:
    Day_xx() = default;

    Day_xx(IDay::runType r) {
        
        switch (r) {
            case runType::example:
                inputFile.open("day_xx/example.txt");
                break;

            case runType::input:
                inputFile.open("day_xx/input.txt");
                break;
        }
    };

    int part1solution() override {
        string line;
     
        while (getline(inputFile, line)) {
         
        }
       

        return -1;
    }

    int part2solution() override {
      
        // Copy part 1 Here --

        return -1;
    }
};