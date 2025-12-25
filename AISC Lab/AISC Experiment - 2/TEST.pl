male(alberto). 
male(richard). 
male(aaron). 
male(john). 
male(scott). 
male(jose). 
female(doris). 
female(helen). 
female(donna). 
female(louise). 
female(ethel).
female(amber). 
female(karen). 
female(ruth). 
female(emily). 
parent(alberto,richard). 
parent(alberto,donna). 
parent(alberto,aaron). 
parent(doris,richard). 
parent(doris,donna). 
parent(doris,aaron). 
parent(richard,john). 
parent(richard,scott). 
parent(richard,amber). 
parent(helen,amber). 
parent(helen,john). 
parent(helen,scott). 
parent(aaron,karen). 
parent(louise,karen). 
parent(john,ruth). 
parent(ethel,ruth). 
parent(jose,emily). 
parent(karen,emily). 
mother(X,Y):- parent(X,Y),female(X). 
father(X,Y):- parent(X,Y),male(X). 
sister(X,Y):- parent(Z,X),parent(Z,Y), female(X), X =\= Y. 
brother(X,Y):- parent(Z,X),parent(Z,Y), male(X), X =\= Y.
