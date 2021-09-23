using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace password
{
    public class PasswordChecker
    {
        public static bool validatePassword(string password)
        {
            if (password.Length < 8 || password.Length > 20)
                return false;
            if (!password.Any(char.IsLower))
                return false;
            if (!password.Any(char.IsUpper))
                return false;
            if (!password.Any(char.IsDigit))
                return false;
            if (password.Intersect("!@#$%^&*()").Count() == 0)
                return false;

            return true;


            
             static void Main() 
             Console.WriteLine(validatePassword("ftferr6F#"));
       }

    }
}
