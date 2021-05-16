// FUNÇÃO DE IDENTIDADE
let id = x => x;
r = id(5);
console.log("FUNÇÃO DE IDENTIDADE: ", r);
console.log("--------------------------------------");
// FUNÇÃO DE SOMA (CURRY)
add = a => b => a+b;
soma = add(1)(2);
console.log("FUNÇÃO DE SOMA: ", soma);
console.log("--------------------------------------");
// FUNÇÃO MOCKINBIRDS
M = f => f(f);
try {M(M)} catch (e) { console.log("FUNÇÃO MOCKINBIRDS: ",e.message) };

console.log("--------------------------------------");
// FUNÇÃO KESTREL
K = a => b => a;
ke = K(6)(9);
console.log("FUNÇÃO KESTREL: ", ke);
console.log("--------------------------------------");

// FUNÇÃO KISTRE 
KI = a => b => b;
i = KI(5)(29);
console.log("FUNÇÃO KI: ", i);

console.log("--------------------------------------");
//FUNÇÃO CARDINAL
C = f => a => b => f(b)(a)
ca = C(K)(1)(2);
console.log("FUNÇÃO CARDINAL: ", ca)
console.log("--------------------------------------");
// FUNÇÃO NOT 
T = K; // K = true
F = KI; // KI = FALSE
T.inspect = () => 'T/K';
F.inspect = () => 'F/KI';
NOT = p => p(F)(T);
n = NOT(T);
console.log("FUNÇÃO NOT (FALSE): ", n);
n = NOT(F)
console.log("FUNÇÃO NOT (TRUE) ", n);

console.log("--------------------------------------");

// FUNÇÃO C try
C(T);
c = C(T)(1)(2);
console.log("FUNÇÃO CT: ", c);

console.log("--------------------------------------");

// FUNÇÃO AND
AND = p => q => p => p(q)(p);
a = AND(F)(T);
console.log('FUNÇÃO AND (FALSE): ', a);
a = AND(T)(F);
console.log('FUNÇÃO AND (TRUE): ', a);

console.log("--------------------------------------");

// FUNÇÃO OR 
OR = p =>  q  => p(p)(q);
o = OR(T)(F);
console.log("FUNÇÃO OR (K = TRUE / KI = FALSE): ", o);
o = OR(F)(T);
console.log("FUNÇÃO OR (K = TRUE / KI = FALSE): ", o);
o = OR(F)(F);
console.log("FUNÇÃO OR (K = TRUE / KI = FALSE): ", o);
o = OR(T)(T);
console.log("FUNÇÃO OR (K = TRUE / KI = FALSE): ", o);

console.log("--------------------------------------");

// FUNÇÃO BOOLEAN EQUALITY 
BEQ = p=> q=> p(q)(NOT(q));
b = BEQ(T)(F);
console.log("FUNÇÃO B.EQ: ", b);
b = BEQ(T)(T);
console.log("FUNÇÃO B.EQ: ", b);





















