#include <iostream>
#include <vector>
using namespace std;

void wavePrintCol(vector<vector<int>> &v) {
  int n = v.size();
  int m = v[0].size();

  for (int i = 0; i < m; i++) {
    if ((i & 1) == 0) {
      for (int j = 0; j < n; j++) {
        cout << v[j][i] << " ";
      }
      cout << endl;
    } else {
      for (int j = n - 1; j >= 0; j--) {
        cout << v[j][i] << " ";
      }
      cout << endl;
    }
  }
}

void wavePrintRow(vector<vector<int>> &v){

  int n = v.size();
  int m = v[0].size();

  for(int i = 0; i < n; i++){
    if((i&1) == 0){
      for(int j = 0; j < m; j++){
        cout << v[i][j] << " ";
      }
      cout<<endl;
    }else{
      for(int j = m-1; j >= 0; j--){
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }
    
  }
  
}

int main() {
  vector<vector<int>> v = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12}
  };

  // wavePrintCol(v);
  wavePrintRow(v);

  return 0;
}