Statement : Statement are those sentence , which have mathematical and logical meaning.

Statement is of three types : 

1. Conditional or decision making Statement : The statement which depends upon decision i.e, true or false.
   
    example - ram is greater than shyam.

    1. if statement : The statement which depends upon only the true part of a decision.

        syntax : 
        
            if(condition)
            {
                // codes;
            }
    
        example : 
    
            if(a > b)
            {
                cout << "a is greater";
            }

    2. if_else statement : The statement which call the true part by 'if' and false part by 'else' is 
        called if_else statement.
        
        syntax :

            if(condition)
            {
                // true part;
            }
            else
            {
                // false part;
            }

        example :

            if(a > b)
            {
                cout << "a is greater.";
            }
            else 
            {
                cout << "b is greater.";
            }

    3. if_else_nested : Using if or if_else statement inside another if or if_else statement is 
    called if_else_nested.

        syntax : 

            if(condition)
            {
                if(condition)
                {
                    // code ;
                }
                else
                {
                    // code ;
                }
            }
            else
            {
                if(condition)
                {
                    // code;
                }
                else
                {
                    // code;
                }
            }

        example : 

            if(a>b)
            {
                if(a>c)
                {
                    cout << a;
                }
                else
                {
                    cout << c;
                }
            }
            else
            {
                if(b>c)
                {
                    cout << b;
                }
                else
                {
                    cout << c;
                }
            }
        

Questions:

    W.A.P in c++ to check a number is even or odd.
    W.A.P in c++ to check a character is vowel or consonent.
    W.A.P in c++ to check to greater between two number .
    W.A.P in c++ to check which greater among three number.
    W.A.P in c++ to check which year is leap or not.
    W.A.P in c++ to find the square root of a number.
    W.A.P in c++ to find square of a number.
    W.A.P in c++ to find the roots of a quadratic equation.