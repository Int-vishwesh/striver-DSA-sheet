import java.util.Scanner

class Solution(n: Int) {
    init {
        for (i in 1..n) {
            for (j in 1..n) {
                print("* ")
            }
            println()
        }
    }
}

/* pattern output:

* * * *
* * * *
* * * *
* * * *

*/

fun main() {
    val scanner = Scanner(System.`in`)
    println("Enter size of pattern:")
    val size = scanner.nextInt()

    println("directly constructor based output:")
    Solution(size)
}