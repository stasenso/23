#include <vector>
#include <iostream>

using namespace std;

void findArrangements(vector<int> used, vector<int> current, int k, int l) {
  if (current.size() == l) {
    for(int x : current) {
      cout << x << " "; 
    }
    cout << endl; 
    return;
  }
  
for(int i = 0; i < k; i++) {
  if (find(used.begin(), used.end(), i) == used.end()) { 
    vector<int> new_used = used;
    new_used.push_back(i);

    if (current.empty() || i > current.back()) {
      vector<int> new_current = current;
      new_current.push_back(i);

      findArrangements(new_used, new_current, k, l);
      new_current.pop_back(); 
    }
    
   
  }
}
}

int main() {
  int k = 5, l = 2;
  vector<int> used;
  vector<int> current;  
  findArrangements(used, current, k, l);
  for (const auto& cell : current) {
        for (int cell : current) {
            cout << cell << " ";
        }
        cout << endl;
    }
}
