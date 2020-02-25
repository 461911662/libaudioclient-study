#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

using T = float;

int main()
{
    std::pair<T, bool> mLastVolume(1.f, false);
    // 获取pair的值
    cout << "mLastVolume: " << std::get<0>(mLastVolume) << " ," << std::get<1>(mLastVolume) << endl;

    // pair排序
    std::vector<std::pair<T, bool>> mLastVolume2 = {{1.f, false},
                                       {10.f, false},
                                       {3.f, true},
                                       {10.f, true},
                                       {3.f, false},
                                      };
    std::sort(mLastVolume2.begin(), mLastVolume2.end());
    for(auto a: mLastVolume2){
        cout << "mLastVolume: " << a.first << " ," << a.second << endl;
    }
    return 0;
}
