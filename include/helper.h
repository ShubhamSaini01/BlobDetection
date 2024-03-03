#pragma once
#include<iostream>
#include <bits/stdc++.h>
using std::vector;
namespace helper{
    vector<vector<int>>  conv2d(vector<vector<int>> src,vector<vector<int>> kernel){
        vector<vector<int>> dst=src;
        const int dx = kernel.size() / 2;
        const int dy = kernel.size() / 2;
        for (size_t i = 0; i < src.size(); i++){
            for (size_t j = 0; j < src.size(); j++){
                int tmp=0;
                for (size_t k = 0; k < kernel.size(); k++){
                    for (size_t l = 0; l < kernel.size(); l++){
                        int x = j - dx + l;
                        int y = i - dy + k;
                        if (x >= 0 && x < src.cols && y >= 0 && y < src.rows)
                            tmp += src[y, x] * kernel[k, l];
                    }
                }
                dst[i, j] = tmp;
            }
        }
        return dst;
    }
    void mulMat(int mat1[][C1], int mat2[][C2])
    {
        int rslt[R1][C2];
    
        cout << "Multiplication of given two matrices is:\n";
    
        for (int i = 0; i < R1; i++) {
            for (int j = 0; j < C2; j++) {
                rslt[i][j] = 0;
    
                for (int k = 0; k < R2; k++) {
                    rslt[i][j] += mat1[i][k] * mat2[k][j];
                }
    
                cout << rslt[i][j] << "\t";
            }
    
            cout << endl;
        } 

};