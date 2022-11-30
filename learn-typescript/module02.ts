//Tipos de colecciones

//Matrices | Arrays
let list: number[] = [1, 2, 3];

//Tuplas
let tupla: [string, number] = ["matias", 1];


//interfaces
interface IceCream {
    flavor: string;
    scoops: number;
    instructions?: string;
}
 
let myIceCream: Sauce = {
   flavor: "vainilla",
   scoops: 6,
   sauce: "chocolate",
   nuts: true
}
 
//interfaces extendidas
interface Sauce extends IceCream {
    sauce: "chocolate" | "caramel" | "strawberry";
    nuts?: boolean;
    whippendCream?: boolean;
    instructions?: string; 
}

function tooManyScoops(dessert: Sauce) {
    if (dessert.scoops >= 4) return dessert.scoops + ' is too many scoops!';
    return 'Your order will be ready soon!';
}

console.log(tooManyScoops(myIceCream));

//interfaces indexables
interface IceCreamArray {
    [index: number]: string;
}

let myIceCreamArr: IceCreamArray;
myIceCreamArr = ['chocolate', 'vanilla', 'strawberry'];
let myStr: string = myIceCreamArr[2];
console.log(myStr);



