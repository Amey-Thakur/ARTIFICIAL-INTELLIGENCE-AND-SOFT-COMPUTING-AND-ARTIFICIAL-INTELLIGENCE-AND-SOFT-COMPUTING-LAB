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

% --- Facts: Male ---
male(a).
male(b).
male(c).
male(d).
male(e).
male(f).

% --- Facts: Female ---
female(g).
female(h).
female(i).
female(j).
female(k).
female(l).
female(m).
female(n).
female(o).

% --- Facts: Parent Relationships ---
% parent(Parent, Child).
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

% --- Rules: Family Relationships ---

% Rule: Mother
% X is the mother of Y if X is a parent of Y and X is female.
mother(X,Y) :- parent(X,Y), female(X). 

% Rule: Father
% X is the father of Y if X is a parent of Y and X is male.
father(X,Y) :- parent(X,Y), male(X). 

% Rule: Sister
% X is a sister of Y if they share a parent Z, X is female, and X is not Y.
sister(X,Y) :- parent(Z,X), parent(Z,Y), female(X), X \= Y. 

% Rule: Brother
% X is a brother of Y if they share a parent Z, X is male, and X is not Y.
brother(X,Y) :- parent(Z,X), parent(Z,Y), male(X), X \= Y.

% Rule: Has Child
% X has a child if X is a parent of someone.
haschild(X) :- parent(X,_).