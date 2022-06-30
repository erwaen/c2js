//variable global que 
//podemos usar en todas partes
let a;
function fun1()  {
	a = 3;
	//ok
	let b;
	// solamente aca se puede usar
	b = 4;
	// ok
}
function main(){
	a = 4;
	// ok
	b was not declared in the scope 
 = 5;
	// ERROR
	return 0;
}
main();
