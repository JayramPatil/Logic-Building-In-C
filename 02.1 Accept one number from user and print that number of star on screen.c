void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++ ;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d" ,&iValue);

    Display(iValue);

    return 0;
}
