#include "utest.h"
#include "fibonacci.h"

/* Terms 1-10 of the Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55 */
UTEST(fibonacci, term_1)  { ASSERT_EQ(1,  fibonacci(1));  }
UTEST(fibonacci, term_2)  { ASSERT_EQ(1,  fibonacci(2));  }
UTEST(fibonacci, term_3)  { ASSERT_EQ(2,  fibonacci(3));  }
UTEST(fibonacci, term_4)  { ASSERT_EQ(3,  fibonacci(4));  }
UTEST(fibonacci, term_5)  { ASSERT_EQ(5,  fibonacci(5));  }
UTEST(fibonacci, term_6)  { ASSERT_EQ(8,  fibonacci(6));  }
UTEST(fibonacci, term_7)  { ASSERT_EQ(13, fibonacci(7));  }
UTEST(fibonacci, term_8)  { ASSERT_EQ(21, fibonacci(8));  }
UTEST(fibonacci, term_9)  { ASSERT_EQ(34, fibonacci(9));  }
UTEST(fibonacci, term_10) { ASSERT_EQ(55, fibonacci(10)); }

UTEST(golden_ratio, approx) { ASSERT_NEAR(1.618034, golden_ratio_approx(10), 0.000001); }

UTEST_MAIN();
