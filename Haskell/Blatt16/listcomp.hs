pyths :: Int -> [(Int,Int,Int)]
pyths n = [(x,y,z) | x <- [1..n], y <- [x..n], z <- [1..n], x^2+y^2==z^2]


factors :: Int -> [Int]
factors n = [x | x <- [1..n-1], n `mod` x == 0]

perfects :: Int -> [Int]
perfects n = [x | x <- [1..n], sum (factors x) == x ]


dot :: Num a => [a] -> [a] -> a
dot x y = sum [a*b | (a,b) <- zip x y ]

main :: IO ()
main = do putStrLn $ show $ pyths 30
          putStrLn $ show $ perfects 500
          putStrLn $ show $ dot [1..10] [4..13]
