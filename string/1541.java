import java.util.Scanner;

public class 1541{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String inputStr = input.nextLine();

        String[] subtractionArr = inputStr.split("-");
        
        int total = 0;

        String[] firstAdditionArr = subtractionArr[0].split("\\+");
        for (String num : firstAdditionArr) {
            total += Integer.parseInt(num);
        }

        for (int i = 1; i < subtractionArr.length; i++) {
            String[] additionArr = subtractionArr[i].split("\\+");
            int sum = 0;
            for (String num : additionArr) {
                sum += Integer.parseInt(num);
            }
            total -= sum;
        }
        System.out.println(total);

        input.close();
    }
}