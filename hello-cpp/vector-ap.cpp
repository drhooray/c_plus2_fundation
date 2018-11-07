#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        std::vector<int> lotteryNumVec(10);
        int lotteryNumArray[5] = { 4, 13, 30, 14, 50};
        lotteryNumVec.insert(lotteryNumVec.begin(), lotteryNumArray, lotteryNumArray+3);
        lotteryNumVec.insert(lotteryNumVec.begin()+5, 44);

        cout << lotteryNumVec.at(5) <<endl;

        lotteryNumVec.push_back(64);
        cout << "Final value : "<< lotteryNumVec.back() <<endl;

        lotteryNumVec.pop_back();

        return 0;
}
