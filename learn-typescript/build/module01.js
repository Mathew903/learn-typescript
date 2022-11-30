"use strict";
function suma(a, b) {
    return a + b;
}
let x, y = 1, z;
var ContractStatus;
(function (ContractStatus) {
    ContractStatus[ContractStatus["Permanent"] = 0] = "Permanent";
    ContractStatus[ContractStatus["Temp"] = 1] = "Temp";
    ContractStatus[ContractStatus["Apprentice"] = 2] = "Apprentice";
})(ContractStatus || (ContractStatus = {}));
const employeeStatus = ContractStatus.Temp;
console.log(employeeStatus);
console.log(ContractStatus[employeeStatus]);
//let ramdomValue: any = 10 - evitar usar any para futuros problemas, cuando sea necesario
let ramdomValue = 10;
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
ramdomValue.toUpperCase();
