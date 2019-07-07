int Solution::isPower(int A) {
    if(1 == A)
        return 1;
    for(int i=2;i*i<=A;i++)
    {
        int c = log(A)/log(i);
        if(pow(i,c) == A)
            return 1;
    }
    return 0;
}
