//---------------------------------------------------------------------------
// 1. 不讲武德之暴力遍历
//  阅后即焚，此法免谈
bool isPerfectSquare(int num){
    for (long i=1; i<=num; i++)
        if (i * i > num)
            if ((i-1) * (i-1) < num)    return false;
            else    return true;
    return 666;
}



// 后续可用动态规划和位运算求解，暂搁置