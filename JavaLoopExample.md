## Java For Loop Example

```java
package org.example;

public class LoopEx {
	static int k = 0;

	public static void main(String[] args) {
		int initialPoint = 1;
		System.out.println("point no : " + initialPoint);
		initialPoint = initialPoint + 1;
		System.out.println("point no : " + initialPoint);
//		initialPoint = initialPoint + 1;
//		initialPoint += 1;// += -> = initialPoint + 1;
		initialPoint++; // initialPoint++ -> initialPoint = initialPoint + 1;

		/**
		 * previous value = 2
		 * previous value + 1
		 * 2 + 1 => 3
		 * assign result to initial point
		 * initialPoint = 3;
		 */
		System.out.println("point no : " + initialPoint);

//
//		int i = 0;
//		System.out.println("I : " + i);
//		i++;
//		System.out.println("I : " + i);
//		i++;
//		System.out.println("I : " + i);
//		i++;
//		System.out.println("I : " + i);

		//loop
		/**
		 * block 1 -> initialization -> int i = 0
		 * block 2 -> condition -> i < 4
		 * block 3 -> expression -> i++
		 *
		 * 0,1,2,3
		 */


		/**
		 *****
		 *****
		 *****
		 *****
		 *****
		 *
		 ***
		 *****

		 */

		for (int j = 0; j < 5; j++) {
			//statement
			System.out.println("*");
		}


		int i = 0;
		for (; i < 4; ) {
			//statement
			System.out.println("I : " + i);
			i = i + 1;
			System.out.println();
		}

		System.out.println("while");
		// while
//		int k = 0;
		while (k < 4) {
			System.out.println("K : " + k);
			k = k + 1;
		}


		/***
		   *
		  ***
		 *****

		 */


		//* -> 1
		//** -> 2
		//*** -> 3


//		printStar(1);
//		printStar(3);
//		printStar(5);
		System.out.println("=============");
		System.out.println(" ");
		for (int y = 1; y <=5; y = y + 2) {
			printStar(y);
		}
	}

	public static void printStar(int n) {
		String star = "";
		for (int z = 1; z <= n; z++) {
			//0,1,2
			//1,2,3
			//1,2,3,4,5
			star = star + "*";
		}
		System.out.println(star);
	}
}

```

