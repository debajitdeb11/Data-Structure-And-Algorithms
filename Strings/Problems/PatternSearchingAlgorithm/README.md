# Overview of Pattern Searching Algorithm

Algorithm | Complexity | Preprocessing | pros/cons
--- | --- | --- | --- | ---
__Naive__ | `O ((n - m + 1) * m)` | Not required
__Naive When all the characters are distinct__ | `O (n)` | Not required
__Rabin Karp__ | `O ((n - m + 1) * m)` | Preprocess Pattern | Better than naive algorithm on average case  
__KMP__ | `O (n)` | Preprocess Pattern
__Suffix Tree__ | `O (m)` | Preprocess Text

`m -> Pattern Length, n -> Text Length`

_1 <= m <= n_