const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

class Solution {
  constructor(n) {
    for (let i = 1; i <= n; i++) {
      let row = "";
      for (let j = 1; j <= n; j++) {
        row += "* ";
      }
      console.log(row);
    }
  }
}

/* pattern output:

* * * *
* * * *
* * * *
* * * *

*/

console.log("Enter size of pattern:");

readline.question('', (input) => {
  const size = parseInt(input);
  
  console.log("directly constructor based output:");
  new Solution(size);
  
  readline.close();
});