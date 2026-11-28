<h2><a href="https://codeforces.com/contest/1635/problem/A" target="_blank" rel="noopener noreferrer">1635A — Min Or Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1635A](https://codeforces.com/contest/1635/problem/A) |

## Topics
`bitmasks` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Min Or Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of size $$$n$$$.</p><p>You can perform the following operation on the array: </p><ul> <li> Choose two different integers $$$i, j$$$ $$$(1 \leq i  \lt  j \leq n$$$), replace $$$a_i$$$ with $$$x$$$ and $$$a_j$$$ with $$$y$$$. In order not to break the array, $$$a_i | a_j = x | y$$$ must be held, where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. Notice that $$$x$$$ and $$$y$$$ are non-negative integers. </li></ul><p>Please output the minimum sum of the array you can get after using the operation above any number of times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ $$$(1 \leq t \leq 1000)$$$. Description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ $$$(2 \leq n \leq 100)$$$ — the size of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots ,a_n$$$ $$$(0 \leq a_i  \lt  2^{30})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one number in a line — the minimum possible sum of the array.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016400219020705642" id="id005782421805545342" class="input-output-copier">Copy</div></div><pre data-content="4
3
1 3 2
5
1 2 4 8 16
2
6 6
3
3 5 6
" id="id0016400219020705642"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3 2</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 4 8 16</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">6 6</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">3 5 6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048560043696313615" id="id00015957160653203517" class="input-output-copier">Copy</div></div><pre id="id0048560043696313615">3
31
6
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can perform the following operations to obtain the array $$$[1, 0, 2]$$$:</p><p>1. choose $$$i = 1, j = 2$$$, change $$$a_1 = 1$$$ and $$$a_2 = 2$$$, it's valid since $$$1 | 3 = 1 | 2$$$. The array becomes $$$[1, 2, 2]$$$.</p><p>2. choose $$$i = 2, j = 3$$$, change $$$a_2 = 0$$$ and $$$a_3 = 2$$$, it's valid since $$$2 | 2 = 0 | 2$$$. The array becomes $$$[1, 0, 2]$$$.</p><p>We can prove that the minimum sum is $$$1 + 0 + 2 = 3$$$</p><p>In the second example, We don't need any operations.</p></div>