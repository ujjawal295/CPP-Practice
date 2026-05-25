#include <iostream>
#include <vector>
#include <algorithm> // for min()
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int max_area = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int height_of_container = min(height[i], height[j]);
            int width_of_container = j - i;
            
            cout<<height_of_container<<"|";
            cout<<width_of_container<<"   ";
            int area = height_of_container * width_of_container;

            max_area = max(max_area, area);
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = maxArea(height);
    cout << "Maximum water that can be stored is: " << result << endl;

    return 0;
}
