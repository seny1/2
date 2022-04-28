#pragma once

#include <iostream>
#include <ctime>
using namespace std;

void add_1(int* arr, int size);
void deduct_1(int* arr, int size);
int sum(int* arr, int size);
void invert(int* arr, int size);
void sort_increasing(int* arr, int size);
void sort_decreasing(int* arr, int size);
void(*Option_of_arr(int* arr, int size))(int* arr, int size);