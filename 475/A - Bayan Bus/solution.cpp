#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k;
    if (!(cin >> k)) return 0;
 
    // Bus template grid (6 lines)
    vector<string> bus = {
        "+------------------------+",
        "|#.#.#.#.#.#.#.#.#.#.#.|D|)",
        "|#.#.#.#.#.#.#.#.#.#.#.|.|",
        "|#.......................|",
        "|#.#.#.#.#.#.#.#.#.#.#.|.|)",
        "+------------------------+"
    };
 
    // List of seat coordinates in order of filling
    vector<pair<int, int>> seat_order;
 
    // Column 0 has 4 seats
    seat_order.push_back({1, 1}); // Row 0
    seat_order.push_back({2, 1}); // Row 1
    seat_order.push_back({3, 1}); // Row 2
    seat_order.push_back({4, 1}); // Row 3
 
    // Columns 1 to 10 have 3 seats each
    for (int col = 1; col <= 10; ++col) {
        int char_idx = 1 + col * 2; // Column index in the template string
        seat_order.push_back({1, char_idx}); // Row 0
        seat_order.push_back({2, char_idx}); // Row 1
        seat_order.push_back({4, char_idx}); // Row 3
    }
 
    // Fill the first k seats with 'O'
    for (int i = 0; i < k && i < seat_order.size(); ++i) {
        int r = seat_order[i].first;
        int c = seat_order[i].second;
        bus[r][c] = 'O';
    }
 
    // Print the grid
    for (const string& line : bus) {
        cout << line << "
";
    }
 
    return 0;
}