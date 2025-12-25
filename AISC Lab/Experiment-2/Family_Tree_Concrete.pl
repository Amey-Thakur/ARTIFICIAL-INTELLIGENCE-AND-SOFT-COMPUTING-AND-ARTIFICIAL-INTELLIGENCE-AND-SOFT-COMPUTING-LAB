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
male(alberto). 
male(richard). 
male(aaron). 
male(john). 
male(scott). 
male(jose). 

% --- Facts: Female ---
female(doris). 
female(helen). 
female(donna). 
female(louise). 
female(ethel).
female(amber). 
female(karen). 
female(ruth). 
female(emily). 

% --- Facts: Parent Relationships ---
% parent(Parent, Child).
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

% --- Rules: Family Relationships ---

% Rule: Mother
% X is the mother of Y if X is a parent of Y and X is female.
mother(X,Y):- parent(X,Y), female(X). 

% Rule: Father
% X is the father of Y if X is a parent of Y and X is male.
father(X,Y):- parent(X,Y), male(X). 

% Rule: Sister
% X is a sister of Y if they share a parent Z, X is female, and X is not Y.
sister(X,Y):- parent(Z,X), parent(Z,Y), female(X), X \= Y. 

% Rule: Brother
% X is a brother of Y if they share a parent Z, X is male, and X is not Y.
brother(X,Y):- parent(Z,X), parent(Z,Y), male(X), X \= Y.
