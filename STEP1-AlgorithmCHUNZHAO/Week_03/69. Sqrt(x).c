//-------------------------------------------------------------------------
//----------------------------------------------------------------------------
// 1. 不讲武德之暴力遍历 O(n^0.5) O(1)
//  阅后即焚，这方法免提
//  注意i,x+1转换为long,否则将溢出----2.5日
int mySqrt(int x){
    for (long i=0; i<=(long)x+1; i++)
        if (i * i > x)  return (int)i-1;
    return 666;
}



//-------------------------------------------------------------------------
// 2. 二分查找 O(logn) O(1)
//  有界有序有index
int mySqrt(int x){
    if (0 == x || 1 == x)   return x;
    long left = 1, right = x;
    long mid = 1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (mid * mid <= x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return (int)right;
}



//----------------------------------------------------------------------------
// 3. 牛顿迭代法
//  **待推导证明**2.6日
int mySqrt(int x){
    long r = x;
    while (r * r > x) 
        r = (r + x/r) / 2;
    return r;
}