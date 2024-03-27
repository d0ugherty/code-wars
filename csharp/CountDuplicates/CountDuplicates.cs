using System;
using NUnit;


namespace CountDuplicates
{
	public class Kata
	{
		public static void Main(string[] args)
		{
			Console.WriteLine(args);
			string input = args.Length > 0 ? args[0] : "";
			Console.WriteLine($"INPUT: {input}");
			Console.WriteLine($"Characters with duplicates: {CountDupes(input)}");
		}

		public static int CountDupes(string input)
		{
			Dictionary<char, bool> dupes = new Dictionary<char, bool>();

			char[] inputArray = input.ToLower().ToCharArray();

			foreach (char ch in inputArray)
			{
				if (!dupes.TryAdd(ch, false))
				{
					dupes[ch] = true;
				}
			}

			int count = 0;

			foreach (KeyValuePair<char,bool> item in dupes)
			{
				if (item.Value)
				{
					count++;
				}
			}
			return count;
		}
	}
}

