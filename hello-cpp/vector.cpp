#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        std::vector<int> lotteryNumVec(10);
        int lotteryNumArray[5] = {4, 13, 30 ,14 ,50};
        lotteryNumVec.insert(lotteryNumVec.begin(), lotteryNumArray, lotteryNumArray+3);
        cout << lotteryNumVec.at(2) <<endl;

        return 0;
}
