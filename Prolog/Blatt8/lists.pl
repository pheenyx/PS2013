list([]).
list([_|R]) :- list(R).

lastelem([X],X).
lastelem([_|R],X) :- lastelem(R,X).

contains([X|R],X).
contains([L|R],X) :- contains(R,X).

ascending([]).
ascending([X]).
ascending([X,Y|Tail]) :- X =< Y, ascending([Y|Tail]).

backwards(List, Reversed) :- backwards(List, [], Reversed).
backwards([], Reversed, Reversed).
backwards([Head|Tail], SoFar, Reversed) :- backwards(Tail, [Head|SoFar], Reversed).

partof([], []).
partof([E|Tail], [E|NTail]):- partof(Tail, NTail).
partof([_|Tail], NTail):- partof(Tail, NTail).


%-----------------------------------------------------------
% main program, needed for SAUCE tests
printres(X,P) :- findall(X,P,L), print(L), print('\n').
tests(L,X,Y) :-
    printres(L,list(L)),
    printres(L,ascending(L)),
    printres(R,lastelem(L,R)),
    printres(R,contains(L,R)),
    printres(R,backwards(L,R)),
    printres([A],partof([A],L)),
    printres([B,C],partof([B,C],L)),
    printres([1,D,E],partof([1,D,E],L)),
    printres(R,neighbors(X,R,L)),
    printres(R,neighbors(R,X,L)),
    printres(R,remove(L,X,R)),
    printres(R,replace(L,X,Y,R)).
main :-
   tests([],[],[]),
   tests([],1,2),
   tests([1],1,2),
   tests([1,2],1,2),
   tests([1,2,3,4,5,6,7,8,9,10],6,7),
   tests([2,1,5,93,6,14,5,6,5,38],5,99),
   tests([5,4,3,2,1,1,1,1,1],1,3).
% end of main
