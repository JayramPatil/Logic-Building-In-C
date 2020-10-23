void Display(int iNo)
{
    // Write Updater
    while( iNo > 0  )
    {
        printf(" * ");
        iNo--;
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
