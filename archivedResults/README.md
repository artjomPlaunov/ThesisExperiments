# Combining Abstract Interpretation With Model Checking.

## Research Focus

The focus of this research is in looking at ways in which Abstract Interpretation
tools can aid model checking of software. Specifically, Frama-C with the Eva
plugin is used to perform sound static analysis of C programs, and in turn the
results of the analysis are passed to CPAchecker, which is used for model
checking.

As for now, the mechanism for passing information is assume statements inserted
into the program being model checked. This was done by [Shankar and Pajela](https://spinroot.com/spin/Workshops/ws16/SPIN_2016_paper_24.pdf) in the Cegarmc plugin for
Frama-C, which integrates model checking into the Frama-C verification framework.

Cegarmc allows for changing the backend of the CEGAR/model checking algorithm
being used, i.e. we can also run these experiments using SATABS. The next
iteration of experiments will include results with SATABS. Importantly, Cegarmc
provides a context flag which implements the aforementioned passing of information
from the Eva analysis to the program that is generated to be model checked.

## Running the Experiments

The examples in this repository assume CPAchecker version 2.0. (Although there is
currently a newer version of CPAchecker (2.2), so this may be changed upon running
more experiments.

**Important** The BASH environment should have a flag for CPACHECKER which points
to your installation of CPAchecker. Also note that depending on your version of
CPAchecker, the "svcomp21.properties" file may have a different year, like
svcomp20 or svcomp22, in which case that should be changed in the RunResults.hs
script.

The script to run analyses requires a GHC haskell compiler; it is known to work
on 8.8.4.

``` ghc RunResults.hs ``` to compile.

To run an analysis run ```./RunResults <analysis> <program name>```

Here analysis must be a string in the set ```{pred, value, cmc, svcomp, eva-svcomp,
eva-pred}```

program name must be a program in one of the corresponding d_ directories. For
example, if there if a program combo1.c in the d_svcomp directory, then it is
possible to run ```./RunResults svcomp combo1``` to perform the SVCOMP analysis
on combo1.c. Some other examples:

```./RunResults eva-pred mod2``` - this runs predicate analysis with information
from eva assumed to be supplied in the file being run by the model checker. It
looks for the file mod2.c in d_eva-pred and runs the analysis on that.

```./RunResults value mod2```, etc.

To summarize, each d_ directory corresponds to an analysis, and various programs
found in there can be run with that analysis. There is redundancy between
directories, but that is because for the current scope of research, it is
easier/more clear to keep a separate version of the program for each analysis being run,
even if in some cases these are the same.

Results of the analysis are stored in a newly created directory, and the directory
is named with the name of the analysis, program file, and a generated clock time
stamp.
