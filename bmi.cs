using System;

class Progrm
{
    static void BMI(double weight, double height)
    {
        double calculate;
        calculate = weight/(height*height);
        double rounded = Math.Round(calculate, 2);
        Console.WriteLine("You bmi is " + rounded);
    }
    
    static void Main()
    {
        double weight, height;
        Console.WriteLine("Type your weight: ");
        weight = Convert.ToSingle(Console.ReadLine());
        Console.WriteLine("Type your height: ");
        height = Convert.ToSingle(Console.ReadLine());
        BMI(weight, height);
    }
}
