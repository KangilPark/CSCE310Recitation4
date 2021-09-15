#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <vector>
using namespace std;

void heapsort(vector<int> &a, int count);
void heapify(vector<int> &a, int count);
void siftDown(vector<int> &a, int start, int end);

#endif