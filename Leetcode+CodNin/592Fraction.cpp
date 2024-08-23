class Solution
{
public:
    string fractionAddition(string expression)
    {
        int n = expression.size();
        int numFinal = 0, denoFinal = 1, i = 0, flag = 1;
        while (i < n)
        {
            int currNum = 0, currDeno = 0;
            if (expression[i] == '+')
            {
                flag = 1;
                i++;
            }
            if (expression[i] == '-')
            {
                flag = -1;
                i++;
            }
            while (i < n && isdigit(expression[i]))
            {
                currNum = currNum * 10 + (expression[i] - '0');
                i++;
            }
            i++;
            while (i < n && isdigit(expression[i]))
            {
                currDeno = currDeno * 10 + (expression[i] - '0');
                i++;
            }
            currNum *= flag;
            numFinal = numFinal * currDeno + denoFinal * currNum;
            denoFinal = currDeno * denoFinal;

            int gcdd = gcd(abs(numFinal), denoFinal);
            numFinal /= gcdd;
            denoFinal /= gcdd;
        }
        return to_string(numFinal) + "/" + to_string(denoFinal);
    }
};