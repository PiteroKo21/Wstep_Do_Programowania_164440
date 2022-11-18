using System;
using System.Diagnostics.CodeAnalysis;

public class Program
{
    public static void Main()
    {
        int[,] tab = {{1,2,3,4,5 },
            {1,2,3,4,5},
            {5,4,3,2,1},
            {5,2,3,4,1},
            { 9,8,7,6,5}};

        for (int a = 0; a < 5; a++)
        {
            for (int b = 0; b < 5; b++)
            {
                Console.WriteLine(tab[a, b]);
            }

        }
        int suma = 0;
        suma = tab[0, 0] + tab[1, 1] + tab[2,2]+ tab[3, 3] + tab[4,4];
        Console.WriteLine("suma:" + suma);
    }
}
