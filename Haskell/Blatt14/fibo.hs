{-# LANGUAGE NPlusKPatterns #-}

fibonacci :: Int -> [Int]
fibonacci 1 = [1]
fibonacci 2 = [1,1]
fibonacci (n+2) = fibonacci (n+1) ++ [last (fibonacci n) + last (fibonacci (n+1))]

