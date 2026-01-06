# Erno_Enigma
<p>This project (Erno Enigma - 3 by 3 Rubiks Cube Solver) was done in the second semester and the idea was to be able to solve a 3*3 rubiks cube from the state at which it is (which is scrambled). And the code is written entirely in C. After the the code was made, an attempt was made to use it in <b>Arduino based rubiks cube solver</b>.</p><p>Given below is the image of it.</p>
<center><img src="./"/></center>
<p>Given below are the components used to make the proejct.</p>
<table>
  <thead>
    <tr>
      <th>Components</th>
      <th>Purpose</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Stepper motor</td>
      <td>There are six faces in Rubiks cube and it is theoritically possible to rotate just five faces and solve the rubiks cube. The code <b>Erno's Enigma</b> only rotates five faces of rubisk cube to solve it, hence five stepper motors were sued.. A stepper motor could be roated to any degree, any number of tiems. And therefore this was used to in the project to rotate the fac es of rubik's cube.</td>
    </tr>
    <tr>
      <td>5V Voltage Regulator</td>
      <td>The stepper motors used worked on 5V voltage and thus the regulators. Indian Voltage reguilation provides with 220V of AC current. And this has to be convetred to 5V DC current before using it to power the stepper motor.</td>
    </tr>
    <tr>
      <td>Arduino Mega</td>
      <td>Arduino mega was used with the memeory of code kept in mind.</td>
    </tr>
  </tbody>
</table>
