import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

    //problem1

        /*
    LibraryBook book1 = new LibraryBook();

    book1.setTitle("Harry Potter");
    book1.setAuthor("Joanno ...");
    book1.setPages(521);

    System.out.print(book1.getBookTitle() + " " + book1.getAuthor() + " " + book1.getPage() + " " + book1.isThink());


        LibraryBook book2 = new LibraryBook();

        book2.setTitle("Harry Potter 2");
        book2.setAuthor("Joanno ...");
        book2.setPages(499);

        System.out.print(book2.getBookTitle() + " " + book2.getAuthor() + " " + book2.getPage() + " " + book2.isThink());

*/


        //problem 2

/*
        Scanner scanner = new Scanner(System.in);

        Sensor[] sensors = new Sensor[5];
        double sum = 0;

        for (int i = 0; i < sensors.length; i++) {
            System.out.print("Enter location for sensor " + (i + 1) + ": ");
            String location = scanner.nextLine();

            System.out.print("Enter temperature reading for sensor " + (i + 1) + ": ");
            double reading = scanner.nextDouble();
            scanner.nextLine(); // clear buffer

            sensors[i] = new Sensor(location, reading);
            sum += sensors[i].getReading();
        }

        double average = sum / sensors.length;

        System.out.println("\nAverage temperature reading: " + average);

        */


        //problem3

/*
        StepCounter userA = new StepCounter();
        StepCounter userB = new StepCounter();

        userA.walk(1000);
        userB.walk(1500);

        System.out.println("User A steps: " + userA.getIndividualSteps());
        System.out.println("User B steps: " + userB.getIndividualSteps());
        System.out.println("Total steps: " + StepCounter.getTotalSteps());


        StepCounter.resetGlobalSteps();
        System.out.println("Total steps after reset: " + StepCounter.getTotalSteps());

 */

        //problem4
        int n = 20;
        int repetitions = 1000000;

        StopWatch watch = new StopWatch();


        watch.start();
        for (int i = 0; i < repetitions; i++) {
            MathTool.factorialRecursive(n);
        }
        watch.stop();
        long recursiveTime = watch.getElapsedTime();


        watch.start();
        for (int i = 0; i < repetitions; i++) {
            MathTool.factorialIterative(n);
        }
        watch.stop();
        long iterativeTime = watch.getElapsedTime();


        System.out.println("Recursive time: " + recursiveTime + " ms");
        System.out.println("Iterative time: " + iterativeTime + " ms");

    }
}