t2 = q0*q0;
t3 = q1*q1;
t4 = q2*q2;
t5 = q3*q3;
t6 = q0*q3*2.0;
t7 = q0*q2*2.0;
t8 = q0*q1*2.0;
t9 = q2*q3*2.0;
A0[0][0] = pd*(t8+t9)+pe*(t2-t3+t4-t5)-pn*(t6-q1*q2*2.0);
A0[0][1] = -pn*(t2+t3-t4-t5)+pd*(t7-q1*q3*2.0)-pe*(t6+q1*q2*2.0);
A0[0][6] = -t7-q1*q3*2.0;
A0[0][7] = t8-t9;
A0[0][8] = -t2+t3+t4-t5;
