ands :: [Bool] -> Bool
ands [] = True
ands (head:rest) = head && ands rest


repl :: Int -> a -> [a]
repl 0 a = []
repl n a = [a] ++ repl (n-1) a


part :: [a] -> Int -> a
part (head:rest) 1 = head
part (head:rest) n = part rest (n-1)


member :: Eq a => a -> [a] -> Bool
member _ [] = False
member a (head:rest) = if a==head then True else member a rest   
