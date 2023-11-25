#pragma once
#include "utils.h"


class IDay {
   public:
    enum runType {
        example,
        input,
    };

    IDay() {}
    ~IDay() {
        inputFile.close();
    }

    void part1() {
        solutionSetup(); 

        int answer = part1solution();
        cout << "Part 1: " << answer << endl;
    }

    void part2() {
        solutionSetup();
        
        int answer = part2solution();
        cout << "Part 2: " << answer << endl;
    }

   protected:
    virtual int part1solution() = 0;
    virtual int part2solution() = 0;

    void solutionSetup() {
        inputFile.clear();
        inputFile.seekg(0);
    }

    ifstream inputFile;
};