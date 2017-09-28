#include <iostream>
#include <string>
#include <vector>
#include "absl/strings/str_join.h"

int main()
{
    using namespace std;

    vector<string> v = {"foo","bar","baz"};
    string s = absl::StrJoin(v, "-");

    cout << "Hello Abseil" << endl;
    cout << "Joined string: " << s << endl;

    return(0);
}
