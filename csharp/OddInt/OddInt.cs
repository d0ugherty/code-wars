namespace OddInt;

public class Kata
{
    static void Main(string[] args)
    {
        List<int> integers = new List<int>();

        foreach (var arg in args)
        {
            if (int.TryParse(arg, out int number))
            {
                integers.Add(number);
            }
        }
        int[] intArray = integers.ToArray();;
        Console.WriteLine(find_it(intArray));
    }
    
    // Solution
    public static int find_it(int[] seq)
    {
        Dictionary<int, int> intDict = new Dictionary<int, int>();
            
        foreach (int integer in seq)
        {
            intDict.TryAdd(integer, 0);
            intDict[integer]++;
        }

        foreach (KeyValuePair<int, int> item in intDict)
        {
            if (item.Value % 2 != 0)
            {
                return item.Key;
            }
        }
        return -1;
    }
}