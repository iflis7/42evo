//Ex00::
int main(int argc, char **argv)
{
    if (argc != 1)
        return (0);
    else
    {
        ft_putstr(argv[0]);
        write(1, "\n", 1);
    }
    return (0);
}

//Ex01::
int main(int argc, char **argv)
{
    int count;

    count = 1;
    while (count < argc)
    {
        ft_putstr(argv[count]);
        write(1, "\n", 1);
        count++;
    }
    return (0);    
}

//Ex02::
int main(int argc, char **argv)
{
    int count;

    count = argc - 1;
    while (count > 0)
    {
        ft_putstr(argv[count]);
        write(1, "\n", 1);
        count--;
    }
    return (0);    
}