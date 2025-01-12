class Solution {
    public boolean canBeValid(String s, String locked) {
        Stack<Integer> stackLocked = new Stack<>();
        Stack<Integer> stackUnlocked = new Stack<>();

        // Match closing parenthesis
        for (int i = 0; i < s.length(); i++) {
            if (locked.charAt(i) == '0') {
                stackUnlocked.push(i);
            } else if (s.charAt(i) == '(') {
                stackLocked.push(i);
            } else {
                if (!stackLocked.isEmpty()) {
                    stackLocked.pop();
                } else if (!stackUnlocked.isEmpty()) {
                    stackUnlocked.pop();
                } else {
                    return false;
                }
            }
        }

        while (!stackLocked.isEmpty() && !stackUnlocked.isEmpty() && stackLocked.peek() < stackUnlocked.peek()) {
            stackLocked.pop();
            stackUnlocked.pop();
        }

        if (!stackLocked.isEmpty()) {
            return false;
        }

        return stackUnlocked.size() % 2 == 0;
    }
}