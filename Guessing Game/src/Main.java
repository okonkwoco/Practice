import java.util.*;

public class Main
{
	public static void main(String[] args) {
		
		Scanner console = new Scanner(System.in);
		System.out.println("I'm thinking of a number...");
		Random r = new Random();
		int rand = r.nextInt(100) + 1;


		int count = 1;
		int totalCount = 0;
		
		int maxCount = 0;
		int guess = -1;
		int totalGames = 0;
		String play = "";

		do {
		while(guess != rand) {
			
			
			System.out.println("Your guess? ");
			guess = console.nextInt();
			if (guess > rand) {
				System.out.println("lower");
				count++;
			}
			if (guess < rand) {
				System.out.println("higher");
				count++;
			}
			
			if (count > maxCount) {
				maxCount = count;
			}
		}totalCount += count;
		
		System.out.println("You got it in " + count + " guesses");
		totalGames++;
		System.out.println("Do you want to play again?");
		play = console.next();
		guess = 0;
		count = 1;
		rand = r.nextInt(100) + 1;
		}while(play.equalsIgnoreCase("Yes"));
		if(play.equalsIgnoreCase("No")) {
			System.out.println("Overall Results: ");
			System.out.println("\ttotal games = " + totalGames);
			System.out.println("\ttotal guesses = " + totalCount);
			System.out.println("\tguesses/games = " +(float)totalCount/totalGames);
			System.out.println("\tmax guesses = " + maxCount);
		}
		
		
	}
	
}
