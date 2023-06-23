import System.Environment
import Data.List
import Data.Map (Map, (!))
import qualified Data.Map as Map
import System.CPUTime
import System.Directory
import System.Process

s1 = "$CPACHECKER/scripts/cpa.sh -config"
s2 = " $CPACHECKER/config/"
s3 = ".properties -timelimit 900s -heap 4000m -benchmark -preprocess "

analysisTypes = [("pred", "predicateAnalysis"),
                  ("value", "valueAnalysis"),
                  ("cmc", "combinations-value100+pred-cmc"),
                  ("svcomp", "svcomp23"),
                  ("eva-svcomp", "svcomp23"),
                  ("eva-pred", "predicateAnalysis")]
                  
main = do
  args <- getArgs
  let cmd = mkCmd (args !! 0) (args !! 1)
  putStrLn cmd
  ct <- getCPUTime
  let newDir = (args !! 0) ++ "_" ++ (args !! 1) ++ "_" ++ (show ct)
  createDirectory newDir
  setCurrentDirectory newDir
  handler <- runCommand cmd
  exitCode <- waitForProcess handler
  putStrLn $ show exitCode
  
  
mkCmd :: String -> String -> String 
mkCmd analysis file = 
  let a = Map.fromList analysisTypes in
  let analysisConfig = a ! analysis in
    s1 ++ s2 ++ analysisConfig ++
    s3 ++ "../d_" ++ analysis ++ "/" ++ file ++ ".c" 
  
  
  
  
