int divide(long long int dividend,long long int divisor){
    if(dividend/divisor>pow(2,31)-1){
        return(pow(2,31)-1);
    }
    else{
        return(dividend/divisor);
    }
    }
