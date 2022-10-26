#include <iostream>
using namespace std;
#include <iomanip>

int main() {

  double det = 0;
  double inverse[2][2] = {};
  double ajoint[2][2] = {};
  int temp;

  int matrix[3][3] = {{1, 0}, 
                      {2, 3}};

  det = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);

  cout << det << endl;

  
  ajoint[0][0] = matrix[1][1];
  ajoint[1][1] = matrix[0][0];
  ajoint[0][1] = matrix[0][1] * -1;
  ajoint[1][0] = matrix[1][0] * -1;

  

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      inverse[i][j] = ajoint[i][j] / det;
    }
  }

  int row, col;
  for (row = 0; row < 2; row++) {
    for (col = 0; col < 2; col++)
      cout << setw(6) << inverse[row][col] << " ";
    cout << endl;
  }
  return 0;
}
