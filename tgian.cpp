#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<pair<int, int>, int> time_counts; // Sử dụng map để lưu trữ số lần xuất hiện của mỗi thời gian

    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        time_counts[{h, m}]++; // Tăng số lần xuất hiện của thời gian (h, m)
    }

    int max_count = 0; // Biến lưu trữ số lần trùng nhau nhiều nhất

    for (auto const& [time, count] : time_counts) {
        if (count > max_count) {
            max_count = count;
        }
    }

    cout << max_count << endl;

    return 0;
}