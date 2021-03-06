#ifndef UTILS_HPP
#define UTILS_HPP

#include "define.hpp"
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

MatrixXd OnehotEncoding(MatrixXd X);
double Sigmoid(double x);
double DRelu(double x);
MatrixXd Relu(MatrixXd S_1, MatrixXd &drelu_1);
MatrixXd Softmax(MatrixXd S_2);
double ComputeLoss(MatrixXd Y, MatrixXd Y_hat);
double ComputeCount(MatrixXd Y, MatrixXd Y_hat);
MatrixXd ForwardPass(MatrixXd X, MatrixXd w_1, MatrixXd w_2, MatrixXd &Z1, MatrixXd &drelu_1);

uint64_t FloatToUint64(double x);
MatrixXi64 FloatToUint64(MatrixXd X);
double Uint64ToFloat(uint64_t x);
MatrixXd Uint64ToFloat(MatrixXi64 X);

void Share(uint64_t X, uint64_t shares[]);
void Share(MatrixXi64 X, MatrixXi64 shares[]);

void ShareZp(vector<int> x , vector<int> shares[]);

uint64_t Rec(uint64_t X, uint64_t Y);
MatrixXi64 Rec(MatrixXi64 X, MatrixXi64 Y);
vector<int> RecZp(vector<int> c0 , vector<int> c1); 

void TripletGeneration( int X_row , int X_col, int Y_row , int Y_col, MatrixXi64 triplet_shares[]);
MatrixXi64 MatMult(int i, MatrixXi64 X_s, MatrixXi64 Y_s, MatrixXi64 E, MatrixXi64 F, MatrixXi64 C_s);

uint64_t Truncate(uint64_t x, int factor);
MatrixXi64 Truncate(MatrixXi64 X, int factor);

vector<int> GetBinaryVector(uint64_t a);
int unsharedPrivateCompare(uint64_t a, uint64_t b); // unshared comparison of two numbers in the ring
int PrivateCompare(uint64_t x, uint64_t r); // shared comparison of two numbers in the ring

int PrivateCompareDiff(uint64_t a, uint64_t b); // comparison based on diff (experimentation)

#endif