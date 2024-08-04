//
// Created by Alex Balta on 03.07.2024.
//

#pragma once

#include "Linker.hpp"
#include <cmath>

#define BREAKPOINT if (!ok) return

class Sorter {
  private:
    Linker *m_link;
    int m_size;
    bool ok;

    void Quicksort(int, int, int);
    int Naive_partition(int, int);
    int Middle_partition(int, int);
    int Fast_partition(int, int);
    int Median_partition(int, int);
    int Median_of_medians(int, int);
    int Median_of_5(int);
    int Qselect(int, int, int);
    void Mergesort(int, int, Item *[]);
    void merge(int, int, int, Item *[]);
    void rotate(int, int, int);
    void reverse(int, int);
    void RadixLSD(int);
    void RadixMSDLauncher(int);
    void RadixMSD(int, int, int, int, int, int, int);
    void Reheapify_max(int, int);
    void Reheapify_sift(int);
    void Reheapify_min(int, int);
    void Reheapify_tern(int, int);
    void LocalInsertSort(int, int);
    int Dichotomy(Item *, int, int);
    int Dichotomy(Item, int, int);
    void Weavesort(int, int, Item *[]);
    void weave(int, int, int, Item *[]);
    void Bitonic_sort(int, int);
    void Bitonic_merge(int, int);
    void OddEven_sort(int, int);
    void OddEven_merge(int, int, int);
    void Sift();
    void Trinkle();
    void SemiTrinkle();
    void Slowmerge(int, int);
    void Stooge(int, int);
    void Scramble(int, int);
    bool shear_line(int, int, int);
    bool shear_col(int, int, int);

  public:
    /**
     * @brief The main constructor
     * @param linker an linker to color the rects
     */
    explicit Sorter(Linker *linker);

    void stop();

    void Bubble_upwards();
    void Bubble_downwards();
    void Bubble_shaker();
    void Comb();
    void Quick_naive();
    void Quick_middle();
    void Quick_optimized();
    void Quick_median();
    void Mergesort_standard();
    void Mergesort_pack();
    void Mergesort_weave();
    void RadixLSD2();
    void RadixLSD4();
    void RadixLSD8();
    void RadixMSD2();
    void RadixMSD4();
    void RadixMSD8();
    void Counting();
    void Insertion();
    void Gnomesort();
    void BinInsertion();
    void Shell();
    void Heapsort_max();
    void Heapsort_sift();
    void Heapsort_min();
    void Heapsort_tern();
    void Selection_max();
    void Selection_min();
    void Selection_dbl();
    void Sampler();
    void Bucket();
    void Bitonic();
    void OddEven();
    void BitonicPara();
    void OddEvenPara();
    void Cycle();
    void CycleOpt();
    void Pancake();
    void SmoothSort();
    void Slowsort();
    void Stoogesort();
    void Bogosort();
    void LessBogosort();
    void Randsort();
    void ShearSort();
};

