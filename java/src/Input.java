import java.util.Scanner;

public class Input {
    public static void main(String [] args) {
        Scanner nameInput = new Scanner(System.in);
        Scanner ageInput = new Scanner(System.in);

        System.out.println("Please enter your name: ");
        String name = nameInput.nextLine();
        System.out.println("Hi there, " + name);

        System.out.println("Please enter your age: ");
        int age = ageInput.nextInt();
        System.out.println("You are " + age + " years old.");
    }
}
