# V4_12_MyProject_1

This project is an Unreal Engine 4.12.5 basic C++ project with a Blueprint C++ Plugin which
provides the following Linear Congruential Random Number Generators (LCG) blueprint nodes:

1. Derrick Henry Lehmer's LCG (1949),
2. Standard minimal LCG (from [NASA, 1982](http://ntrs.nasa.gov/search.jsp?R=19830007824&hterms=Nasa+Technical+Paper+2105&qs=N%3D0%26Ntk%3DAll%26Ntx%3Dmode%2Bmatchallany%26Ntt%3DNasa%2BTechnical%2BPaper%2B2105)): a=16807 and m=2147483647),
3. A much better LCG (from [L'Ecuyer, 1988](http://dl.acm.org/citation.cfm?doid=62959.62969)): a=40692 and m=2147483399),
4. A combined LCG (from [L'Ecuyer, 1988](http://dl.acm.org/citation.cfm?doid=62959.62969)): a1=40014, m1=2147483563, a2=40692 and m2=2147483399 
5. C88's LCG: a=1103515245, b=12345 and m=32768,
6. Visual C/C++ LCG: a=214013, b=2531011 and m=2147483648.

LCG 2. is available from the C++11 Standard Library as `std::minstd_rand0()` in `<random>`.

Use 3. if you want better randomness than 1., 2., and even 5. and 6.

Use 4. if you want an even better randomness then 3. (bottom line: 4. is the best RNG provided by this Plugin).

LCGs 5. and 6. _exactly_ implement the `rand()` function from C88 and Visual C/C++, respectively.

The Math/Random blueprint nodes provided by the UE4 uses 6.

Random seeds are automatically generated from `time`/1; but nodes are provided so that you can seed the LCGs yourself.

Implementation currently is trivial as it is meant to be pedagogical; a further branch will provide more efficient implementations.

Move the mouse over the blueprint nodes to get the documentation.

All Plugin files, including sources, are provided. Nothing has been removed from the Unreal Project. Open the Blueprint level to find an example and all the nodes provided by the Plugin.

Do anything you want with it and, if you have time, please keep me posted. :smiley:

If you can read french, step by step description of the making of this Plugin can be found [here](https://github.com/PCfVW/V4_12_MyProject_1/blob/master/%C3%89tapes%20du%20Projet%20Cr%C3%A9ation%20d'un%20Plugin%20pour%20l'Unreal%20Engine%204.12.5%20(4).pdf).

If not, sorry then, as I might not go into translating this one;
but you can still use the Plugin in a specific project (copy the Plugin in the "Plugins" directory of the specific project) or as an UE4 Plugin for any of your projects (copy the Plugin in UE4's "Plugins" directory).

-- The AI Hedgehog.

![Img](https://github.com/PCfVW/V4_12_MyProject_1/blob/master/Capture%20d%E2%80%99%C3%A9cran%20(125).png)
