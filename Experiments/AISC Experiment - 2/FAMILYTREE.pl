male(a).
male(b).
male(c).
male(d).
male(e).
male(f).

female(g).
female(h).
female(i).
female(j).
female(k).
female(l).
female(m).
female(n).
female(o).

parent(a,b).
parent(a,i).
parent(a,c).
parent(g,b).
parent(g,i).
parent(g,c).
parent(b,d).
parent(b,e).
parent(b,l).
parent(h,l).
parent(h,d).
parent(h,e).
parent(c,m).
parent(j,m).
parent(d,n).
parent(k,n).
parent(f,o).
parent(m,o).

mother(X,Y) :- parent(X,Y),female(X). 
father(X,Y) :- parent(X,Y),male(X). 
sister(X,Y) :- parent(Z,X),parent(Z,Y), female(X), X =\= Y. 
brother(X,Y) :- parent(Z,X),parent(Z,Y), male(X), X =\= Y.
haschild(X) :- parent(X,_).