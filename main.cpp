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
bool promising(const std::vector<T>& path, std::size_t permLength) {
    return true;
}

template <typename T>
void genPerms(std::vector<T>& path, std::size_t permLength) {
    if (path.size() == permLength) {
        print(path);
        return;
    }
    if (!promising(path, permLength))
        return;
    for (size_t i = permLength; i < path.size(); ++i) {
        std::swap(path[permLength], path[i]);
        genPerms(path, permLength + 1);
        std::swap(path[permLength], path[i]);
    }
}

int main() {
    //std::vector<char> v{'a', 'b', 'c', 'd'};
    std::vector<std::size_t> v{0, 1, 2, 3};
    genPerms(v, 0);
    return 0;
}
