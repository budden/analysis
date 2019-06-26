#include "test1p.h"

void test_free(void *p) {
	free(p);
}

void free_mem_by_pts_simple(int*x, int m) {
	if (m != 0) {
		test_free(x);}}

