/*#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 

string superReducedString(string s) {
    string stack;

    for (auto elem : s) {
        if (stack.empty() || stack.back() != elem) {
            stack.push_back(elem);
        }
        else if (elem == stack.back()) {
            stack.pop_back();
        }
    }
    if (stack.empty()) {
        return "Empty String";
    }
    else {
        return stack;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}*/