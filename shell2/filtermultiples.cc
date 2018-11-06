#include "helpers.hh"

int main(int argc, char** argv) {
    assert(argc >= 2);
    int p = strtol(argv[1], nullptr, 10);
    assert(p > 1);

    int value;
    while (scanf("%d", &value) == 1) {
        if (value % p != 0) {
            printf("%d\n", value);
        }
    }
}
