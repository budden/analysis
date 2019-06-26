#include "test1p.h"

void test_path_sensitiv_with_errors() {
	int *x = (int*) malloc(1);
	free_mem_by_pts_simple(x,0); 
	free_mem_by_pts_simple(x,0); // нет двойного освобождения и clang это понимает
	free_mem_by_pts_simple(x,1); // первое освобождение (не двойное)
	std::cout << *x; // clang понял, что память освобождена и выдал предупреждение
}

int main() {
	test_path_sensitiv_with_errors();
};
