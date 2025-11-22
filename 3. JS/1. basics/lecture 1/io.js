const prompt = require('prompt-sync')();

function main() {
//------------------------------------------------------------------


    const inputLine = prompt("Enter an integer: "); 

    const n = parseInt(inputLine.trim());
    
    console.log("You entered:", n);
    console.log("Input type:", typeof n); 


//------------------------------------------------------------------  
}

main();