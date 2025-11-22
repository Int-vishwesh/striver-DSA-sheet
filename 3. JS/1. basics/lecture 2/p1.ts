import * as readline from 'readline';

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

class Solution {
  constructor(n: number) {
    for (let i = 1; i <= n; i++) {
      let row: string = "";
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

rl.on('line', (input: string) => {
  const size: number = parseInt(input);
  
  console.log("directly constructor based output:");
  new Solution(size);
  
  rl.close();
});