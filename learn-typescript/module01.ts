function suma(a: number, b: number){
    return a + b;
}

let x: number, y = 1, z;

enum ContractStatus {
    Permanent,
    Temp,
    Apprentice
}

const employeeStatus: ContractStatus = ContractStatus.Temp
console.log(employeeStatus)
console.log(ContractStatus[employeeStatus])

//let ramdomValue: any = 10 - evitar usar any para futuros problemas, cuando sea necesario
let ramdomValue: unknown = 10;
ramdomValue = false;
ramdomValue = "hola";

//ramdomValue() - error ya que es de tipo "unknown" y no any
//ramdomValue.name - si fuese any esto no me marcaria error

/* Asercion de tipos
    Basicamente le estamos diciendo a typescript que nos deje en nuestras manos
    declar de que tipo va a ser el dato, es decir, oye dejamelo en mis manos que yo
    se lo que hago, estos decimos que ramdomValue es un string, lo convertimos.
    Porque al principio no sabemos de que tipo es pero mas tarde al "saber" lo 
    transformamos y hay 2 formas:
    
    (ramdomValue as string).toUpperCase();
    (<string> ramdomValue).toUpperCase();

    tambien se puede de esta manera:
    if(typeof ramdomValue === "string") ramdomValue.toLocaleLowerCase()
*/

(ramdomValue as string).toUpperCase();

//Union de tipos
let tipo: number | string; 
tipo = 10;
tipo = "diez";
//tipo = true - error ya que el tipo no es number y ni boolean
tipo.toUpperCase()

function add(x:number|string, y:number|string){
    if(typeof x === "number" && typeof y === "number") return x + y;
    if(typeof x === "string" && typeof y === "string") return x.concat(y);
    throw new Error("Parameters must be numbers or strings");
}

add(1, 2);
add("one", "two");
add("one", 3);

/* Tipos de interseccion - Es parecido a una union, con la diferencia que este puede 
unir tipos con el fin de formar un solo tipo, que acceda con todas sus 
caracteristicas.Se utiliza el & para las interseccciones, junto con las interfaces. */

interface Employee {
    employeeId: number,
    age: number
}

interface Manager{
    stockPlan: boolean
}

type EmployeeManager = Manager & Employee;

const person: EmployeeManager = {
    employeeId: 123,
    age: 32,
    stockPlan: true
}

/* tipos literales - quiere decir que no vamos a utilizar un tipo en si, 
sino una limitacion de este tipo. Esto va para number, string y boolean */
type literal = "yes" | "no" | "maybe" | "matias";
let answer: literal;
answer = "yes";
//answer = "hola"; error ya que el tipo no corresponde con el tipo de literal.

