/*#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 
 // 아래 함수가 구현부
int queensAttack(int n, int k, int r, int c, vector<vector<int>> obstacles) {
    if (n == 1) {
        return 0;
    }
    vector<int> max(8);
    for (int i = 0; i < 8; i++) {
        max[i] = n;
    }
    vector<int> attack(8);
    attack[0] = n - c;
    attack[4] = c - 1;
    attack[2] = n - r;
    attack[6] = r - 1;
    attack[1] = (n - r < n - c ? n - r : n - c);
    attack[3] = (n - r < c - 1 ? n - r : c - 1);
    attack[7] = (r - 1 < n - c ? r - 1 : n - c);
    attack[5] = (r - 1 < c - 1 ? r - 1 : c - 1);

    for (int i = 0; i < k; i++) {
        if (r == obstacles[i][0]) {
            if (c > obstacles[i][1] && c - obstacles[i][1] < max[4]) { // left
                max[4] = c - obstacles[i][1];
            }
            else if (c < obstacles[i][1] && obstacles[i][1] - c < max[0]) { // right
                max[0] = obstacles[i][1] - c;
            }
        }
        else if (c == obstacles[i][1]) {
            if (r > obstacles[i][0] && r - obstacles[i][0] < max[6]) { // down
                max[6] = r - obstacles[i][0];
            }
            else if (r < obstacles[i][0] && obstacles[i][0] - r < max[2]) { // up
                max[2] = obstacles[i][0] - r;
            }
        }
        else if (r - c == obstacles[i][0] - obstacles[i][1]) {
            if (r > obstacles[i][0] && c - obstacles[i][1] < max[5]) { // down left
                max[5] = c - obstacles[i][1];
            }
            else if (r < obstacles[i][0] && obstacles[i][1] - c < max[1]) { // up right
                max[1] = obstacles[i][1] - c;
            }
        }
        else if (r + c == obstacles[i][0] + obstacles[i][1]) {
            if (r > obstacles[i][0] && obstacles[i][1] - c < max[7]) { // down right
                max[7] = obstacles[i][1] - c;
            }
            else if (r < obstacles[i][0] && c - obstacles[i][1] < max[3]) { // up left
                max[3] = c - obstacles[i][1];
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        if (max[i] != n) {
            attack[i] = max[i] - 1;
        }
    }
    int sol = 0;
    for (int i = 0; i < 8; i++) {
        sol += attack[i];
    }

    return sol;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);

    vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

    int r_q = stoi(second_multiple_input[0]);

    int c_q = stoi(second_multiple_input[1]);

    vector<vector<int>> obstacles(k);

    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        string obstacles_row_temp_temp;
        getline(cin, obstacles_row_temp_temp);

        vector<string> obstacles_row_temp = split(rtrim(obstacles_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int obstacles_row_item = stoi(obstacles_row_temp[j]);

            obstacles[i][j] = obstacles_row_item;
        }
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string& str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}*/