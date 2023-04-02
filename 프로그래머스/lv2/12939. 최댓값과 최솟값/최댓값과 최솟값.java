import java.util.*;
import java.io.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String[] nums = s.split(" ");
        List<Integer> intList = new ArrayList<>();
        
        for (int i = 0; i< nums.length; i++) {
            intList.add(Integer.parseInt(nums[i]));
        }
        
        answer = Integer.toString(Collections.min(intList)) + " ";
        answer = answer + Collections.max(intList);
        return answer;
    }
}