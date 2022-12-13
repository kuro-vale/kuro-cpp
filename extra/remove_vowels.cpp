#include <string>
#include <regex>

using namespace std;

string disemvowel(const string &str) {
    regex regexp("[aeiou]", regex_constants::icase);
    return regex_replace(str, regexp, "");
}
