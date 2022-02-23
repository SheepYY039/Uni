# Riemann Sum

$$ \int_{b}^{a} f(x) \,dx = \lim_{n \to \infty} \sum_{i=1}^{n}f(a+ \Delta x i  )\Delta x$$

$a$: Beginning of Sum 

$b$: end of summation 

$$f(a + \frac{b-a}{n}i)(\frac{b-a}{n})$$ 


## Example

Find f(x) from Riemann Sum:

$$
\sum_{i=1}^{n} \sqrt[10+i \Delta x]{\frac{1}{2}}\\
= \sum_{n}^{i=1}\sqrt[10+i(\frac{10-6}{n})]{\frac{1}{2}}(\frac{10-6}{n})\\
= \int_{10}^{6}\sqrt[4+(6+i(\frac{4}{n}))]{\frac{1}{2}}(\frac{4}{n})\\
= \int_{10}^{6}\sqrt[4+x]{dx}\\ \therefore f(x)=\sqrt[4+x]{\frac{1}{2}} 
$$
