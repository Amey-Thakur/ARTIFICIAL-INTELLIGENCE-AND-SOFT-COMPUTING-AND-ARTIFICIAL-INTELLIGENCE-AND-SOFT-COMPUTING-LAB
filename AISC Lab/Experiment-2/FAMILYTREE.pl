% =========================================================================================
% Terna Engineering College
% Computer Engineering Department
% 
% EXPERIMENT NO. 02
% 
% Name: Amey Mahendra Thakur    Roll No: 50
% Class: BE-COMPS-B             Batch: B3
% Date: 03-08-2021
% 
% Repository: https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
% Profile: https://github.com/Amey-Thakur
% =========================================================================================

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