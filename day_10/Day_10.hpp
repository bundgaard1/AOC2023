#pragma once
#include "../IDay.h"
#include "../utils.h"

class Day_10 : public IDay {
   public:
    Day_10() = default;

    Day_10(IDay::runType r) {
        
        switch (r) {
            case runType::example:
                inputFile.open("day_10/example.txt");
                break;

            case runType::input:
                inputFile.open("day_10/input.txt");
                break;
        }
    };

    int part1solution() override {
        string line;

        vector<char> tiles;
     
        while (getline(inputFile, line)) {
            tiles.push_back(tiles);
        }
        for_each(tiles.begin(), tiles.end(), [])
       

        return -1;
    }

    int part2solution() override {
      
        // Copy part 1 Here --

        return -1;
    }
};