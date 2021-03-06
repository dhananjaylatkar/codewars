int solution(int number) 
{
    if (number <= 0) return 0;
    int res = 0;
    for (int i = 1; i < number; i++){
        if(!(i % 3) && !(i % 5)){
            res += i;
        }
        else if(!(i % 3)){
            res += i;
        }
        else if (!(i % 5)){
            res += i;
        }
    }
    return res;
}