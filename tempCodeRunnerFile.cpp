int n = 0;
    while(x != 0){
        n *= 10;
        n += x%10;
        x /= 10;
    }
    return n;