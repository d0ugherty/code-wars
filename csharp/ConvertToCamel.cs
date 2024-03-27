using System;
using System.Text;
using System.Text.RegularExpressions;

namespace ConvertToCamelCase
{
	class ConvertToCamelCase
	{
		public static string ToCamelCase(string str)
		{
			string inputStr = str;
			var tokens = Regex.Split(inputStr,@"[-_]");
			var strBuilder = new StringBuilder();

			strBuilder.Append(tokens[0]);
    
			for (int idx = 1; idx < tokens.Length; idx++)
			{
				string token = tokens[idx];
				char[] tokenArray = token.ToCharArray(); 

				bool match = Regex.Match(token, @"[a-z]+[aZ-zZ]*").Success;
          
				if (match)
				{
					tokenArray[0] = Convert.ToChar(token[0].ToString().ToUpper());
				}
				strBuilder.Append(tokenArray);
			}
			string result = strBuilder.ToString();
				
			return result;
		}
	}
}