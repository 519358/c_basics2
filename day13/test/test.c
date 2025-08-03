#include <criterion/criterion.h>
#include "mathlib.h"
#include <limits.h>  

Test(math, add_basic) {
    cr_expect_eq(adder(2, 3), 5);
}

Test(math, divide_normal) {
    cr_assert_eq(average(), 5);
}

Test(math, divide_by_zero) {
    cr_assert_eq(average(), INT_MAX);
}