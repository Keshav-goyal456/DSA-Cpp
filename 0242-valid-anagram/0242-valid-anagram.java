class Solution {
    public boolean isAnagram(String s, String t) {
        char[] ch = s.toLowerCase().toCharArray();
        char[] ch1 = t.toLowerCase().toCharArray();

        Arrays.sort(ch);
        Arrays.sort(ch1);

        return Arrays.equals(ch, ch1);
    }
}