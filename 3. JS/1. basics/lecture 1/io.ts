import promptSync from 'prompt-sync';
const prompt = promptSync();

function main(): void {
//---------------------------------------------------------------------


    let inputLine: string = prompt("Enter an integer: "); 
    const n: number = parseInt(inputLine.trim());
    
    console.log("You entered:", n);
    console.log("Input type:", typeof n);


//---------------------------------------------------------------------
}

main();