#include <iostream>
#include <vector>

template <typename T>
void print(std::vector<T>& path) {
    for (auto e: path) {
        std::cout << "'" << e << "', ";
    }
    std::cout << "\n";
}

template <typename T>
void genPerms(std::vector<T>& path, size_t permLength) {
    if (path.size() == permLength) {
        print(path);
        return;
    }
    for (size_t i = permLength; i < path.size(); ++i) {
        std::swap(path[permLength], path[i]);
        genPerms(path, permLength + 1);
        std::swap(path[permLength], path[i]);
    }
}

int main() {
    //std::vector<char> v{'a', 'b', 'c', 'd'};
    std::vector<int> v{0, 1, 2, 3};
    genPerms(v, 0);   
    return 0;
}

