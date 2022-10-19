/*#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 

string appendAndDelete(string s, string t, int k) {
    string answer;
    int sizeS = s.size(); int sizeT = t.size();
    if (sizeS + sizeT <= k) {
        return "Yes";
    }
    int size = sizeS < sizeT ? sizeS : sizeT;
    int diff = -1;
    for (int i = 0; i < size; i++) {
        if (s[i] != t[i]) {
            diff = i;
            break;
        }
    }

    if (diff == -1) {
        if (abs(sizeS - sizeT) % 2 == k % 2) {
            answer = "Yes";
        }
        else {
            answer = "No";
        }
    }
    else {
        if ((sizeS - diff) + (sizeT - diff) == k) {
            answer = "Yes";
        }
        else {
            answer = "No";
        }
    }

    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

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
}*/