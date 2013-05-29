parent(gerlinde,mark).
parent(gerlinde,lena).
parent(alex,mark).
parent(alex,lena).
parent(karin,andre).
parent(karin,eva).
parent(helmut,andre).
parent(helmut,eva).
parent(lena,paula).
parent(lena,marlene).
parent(andre,paula).
parent(andre,marlene).

male(alex).
male(helmut).
male(mark).
male(andre).

female(eva).
female(lena).
female(paula).
female(marlene).
female(gerlinde).
female(karin).

mother(M,C) :- parent(M,C), female(M).
grandparent(G,C) :- parent(G,P), parent(P,C).
grandfather(G,C) :- grandparent(G,C), male(G).


% main program, needed for SAUCE tests
dset([],[]).
dset([H|T],X) :- member(H,T), dset(T,X).
dset([H|T],[H|X]) :- not(member(H,T)), dset(T,X).
printform(L) :- dset(L,L2), sort(L2,L3), print(L3), print('\n').
printres(X,P) :- findall(X,P,L), printform(L).
main :-
   printres(X,parent(X,_)),
   printres(M,male(M)),
   printres(F,female(F)),
   printres(O,mother(O,_)),
   printres(C,mother(_,C)),
   printres(G,grandparent(G,_)),
   printres(GC,grandparent(_,GC)),
   printres(GP,grandfather(GP,_)),
   printres(GCC,grandfather(_,GCC)).
% end of main
