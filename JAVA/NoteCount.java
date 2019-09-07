
class NoteCount {

    public static void countCurrency(int amount) {
        int notes[] = { 1000, 500, 100, 50, 20, 10, 5, 2, 1 };
        int noteCounter[] = new int[9];

        // count notes using Greedy approach
        for (int i = 0; i < 9; i++) {
            if (amount >= notes[i]) {
                noteCounter[i] = amount / notes[i];
                amount = amount - noteCounter[i] * notes[i];
            }
        }

        // Print notes
       
        int minNote = 0;
        String noteNmubers = "";

        for (int i = 0; i < 9; i++) {
            if (noteCounter[i] != 0) {

                minNote += noteCounter[i];

                for (int j = 0; j < noteCounter[i]; j++) {
                    noteNmubers += notes[i] + " ";
                }

            }
        }
        System.out.print("\nMinimum Note: " + minNote +"\n"+noteNmubers);

    }

    public static void main(String[] args) {

        int amount = 865;
        countCurrency(amount);

    }

}