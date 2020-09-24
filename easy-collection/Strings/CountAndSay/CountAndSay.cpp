class Solution {
public:
    string countAndSay(int n) {
        //need to check concat strings and solution for n > 30
        char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        
        string seq = "1";
        for(int i = 1; i < n; i++)
        {
            int count = 1;
            string build = "";
            for(int j = 1; j < seq.length(); j++)
            {
                if(seq[j - 1] == seq[j])
                {
                    count++;
                }
                else
                {
                    build += char(nums[count]);
                    build += char(seq[j - 1]);
                    count = 1;
                }
            }
            build += char(nums[count]);
            build += char(seq[seq.length() - 1]);
            seq = build;
        }
        
        return seq;
    }
};