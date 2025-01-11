class Solution {
    public boolean canConstruct(String s, int k) {
        if(k > s.length()){
            return false;
        }
        Map<Character, Integer > count = new HashMap<>();
        for(char c : s.toCharArray()){
            count.put(c, count.getOrDefault(c, 0) + 1);
        }
        int odd = 0;
        for(int cnt : count.values()){
            odd += cnt % 2;
        }
        return odd <= k;
    }
}