public class StepCounter {


    private static int totalSteps = 0;

    private int individualSteps = 0;


    public void walk(int steps) {
        individualSteps += steps;
        totalSteps += steps;
    }

    public int getIndividualSteps() {
        return individualSteps;
    }

    public static int getTotalSteps() {
        return totalSteps;
    }

    public static void resetGlobalSteps() {
        totalSteps = 0;
    }

}
