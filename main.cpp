#include <iostream>
#include <vector>

template <typename T>
void genPerms(std::vector<T>& path, size_t permLength) {
    if (path.size() == permLength) {
        return;
    }
    //if (!promising(path, permLength)) {
    //    return;
    //}
    for (size_t i = permLength; i < path.size(); ++i) {

    }
}

int main() {
    std::string s = "abc";
    std::vector<char> v(s.begin(), s.end());
    genPerms(v, 2);   
    return 0;
}

