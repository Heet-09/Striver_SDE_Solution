class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
       vector<int> a;

    // Find zeros and store their coordinates and sum of surrounding elements
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                a.push_back(i);
                a.push_back(j);
                int sum = 0;
                if (i > 0)
                    sum += matrix[i - 1][j];
                if (i < matrix.size() - 1)
                    sum += matrix[i + 1][j];
                if (j > 0)
                    sum += matrix[i][j - 1];
                if (j < matrix[i].size() - 1)
                    sum += matrix[i][j + 1];
                a.push_back(sum);
            }
        }
    }

    // Update matrix with zeros and their surrounding sum
    int k = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (k < a.size() && a[k] == i && a[k + 1] == j) {
                matrix[i][j] = a[k + 2];
                if (i > 0)
                    matrix[i - 1][j] = 0;
                if (i < matrix.size() - 1)
                    matrix[i + 1][j] = 0;
                if (j > 0)
                    matrix[i][j - 1] = 0;
                if (j < matrix[i].size() - 1)
                    matrix[i][j + 1] = 0;
                k += 3;
            }
        }
    }

    }
};