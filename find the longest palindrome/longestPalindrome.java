public class longestPalindrome {

    public static String findPalindrome(String str) {
        str = str.toLowerCase();
        int n = str.length();
        int palindromeLength = 0;
        int start = 0;
        int end = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                boolean isPalindrome = true;
                for (int k = 0; k < (j - i + 1) / 2; k++) {
                    if (str.charAt(i + k) != str.charAt(j - k)) {
                        isPalindrome = false;
                        break; // break the loop if this is not a palindrome
                    }
                }

                if (isPalindrome && (j - i) >= palindromeLength) {
                    palindromeLength = j - i;
                    start = i;
                    end = j;
                }
            }
        }
        return str.substring(start, end + 1);
    }

    public static void main(String[] args) {
        String sampleString = "iradaropo"; // change the sample input and test the ouputs
        System.out.println(findPalindrome(sampleString));
    }
}
