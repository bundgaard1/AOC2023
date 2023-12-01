#include "../IDay.h"
#include "../utils.h"

class Day_01 : public IDay {
   public:
    Day_01() = default;

    Day_01(IDay::runType r) {
        switch (r) {
            case runType::example:
                inputFile.open("day_01/example2.txt");
                break;

            case runType::input:
                inputFile.open("day_01/input.txt");
                break;
        }
    };

    int part1solution() override {
        string line;

        int sum = 0;

        while (getline(inputFile, line)) {
            vector<int> curr;
            for (size_t i = 0; i < line.size(); i++) {
                char c = line[i];
                if (isdigit(c)) {
                    curr.push_back(c - '0');
                }
            }
            cout << curr.size();

            sum += curr[0] * 10 + curr[curr.size() - 1];
        }

        return sum;
    }

    int part2solution() override {
        vector<pair<int, string>> digits{{100, "zero"}, {3, "one"}, {3, "two"},   {5, "three"}, {4, "four"},
                                         {4, "five"}, {3, "six"}, {5, "seven"}, {5, "eight"}, {4, "nine"}};

        string line;

        int sum = 0;

        while (getline(inputFile, line)) {
            vector<int> curr;
            for (size_t i = 0; i < line.size(); i++) {
                char c = line[i];
                if (isdigit(c)) {
                    curr.push_back(c - '0');
                } else {
                    for (int j = 1; j <= 10; j++)
                    {
                        if(digits[j].first + i > line.size()){
                            continue;
                        } else {
                            string sub = line.substr(i,digits[j].first);
                            if(sub == digits[j].second){
                                curr.push_back(j);
                            }
                        }
                    }
                    
                }
            }

            // print_vector(curr);

            sum += curr[0] * 10 + curr[curr.size() - 1];
        }

        return sum;
    }
};