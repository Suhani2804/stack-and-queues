q2.push(value);
        N++;
         while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();

        }