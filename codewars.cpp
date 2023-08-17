#include <igloo/igloo_alt.h>
using namespace igloo;

bool is_square(int n) {
    return true;
}

Describe(is_square_function)
        {
                It(should_work_for_basic_tests)
                {
                    Assert::That(is_square(-1), Equals(false));
                    Assert::That(is_square(0), Equals(true));
                    Assert::That(is_square(3), Equals(false));
                    Assert::That(is_square(4), Equals(true));
                    Assert::That(is_square(25), Equals(true));
                    Assert::That(is_square(26), Equals(false));
                }
        };

int main(int argc, char *argv[]) {
    return TestRunner::RunAllTests(argc, argv);
}
