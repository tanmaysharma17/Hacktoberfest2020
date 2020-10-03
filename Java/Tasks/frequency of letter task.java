public class Main {

    public static void main(String[] args) {
        String str = "this code is for counting the frequency of specific letter.";
        char ch = 'e';
        int frequency = 0;
		for(int i = 0; i < str.length(); i++) {
            if(ch == str.charAt(i)) {
                ++frequency;
            }
        }     
        System.out.println("Frequency of " + ch + " = " + frequency);
    }
}