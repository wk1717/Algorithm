import java.util.Scanner;
import java.util.Stack;

public class 4949{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        Stack<Integer> stack = new Stack<>();

        boolean invalid;
        String inputStr;

        while(true){
            inputStr = input.nextLine();

            if (inputStr.equals(".") && !inputStr.contains(" ")) break; 


            invalid = true;
            stack.clear();

            for (char c: inputStr.toCharArray()){
                switch (c) {
                    case '(':
                        stack.push(1);
                        break;
                    case '[':
                        stack.push(2);
                        break;
                    case ')':
                        if (stack.empty() || stack.pop() != 1) invalid = false;
                        break;
                    case ']':
                        if (stack.empty() || stack.pop() != 2) invalid = false;
                        break;
                    default:
                        break;
                }
            }

            if (invalid && stack.empty()) System.out.println("yes");
            else System.out.println("no");
        }
        input.close();
    }
}