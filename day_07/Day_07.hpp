#pragma once
#include "../IDay.h"
#include "../utils.h"

class Day_07 : public IDay {
   public:
    Day_07() = default;

    Day_07(IDay::runType r) {
        
        switch (r) {
            case runType::example:
                inputFile.open("day_07/example.txt");
                break;

            case runType::input:
                inputFile.open("day_07/input.txt");
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