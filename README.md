# Erno Enigma
<p>
This project (<b>Erno Enigma – 3×3 Rubik’s Cube Solver</b>) was carried out in the second semester with the objective of solving a <b>3×3 Rubik’s Cube</b> from an arbitrary scrambled state. The solver was implemented entirely in <b>C</b>. Following the software implementation, an attempt was made to integrate the solver into an <b>Arduino-based Rubik’s Cube solving system</b>.
</p>
<p>
An image of the setup is shown below.
</p>

<center><img src="./Assembled.jpg"/></center>

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
      <td>28BYJ-48 Stepper Motor</td>
      <td>
        A Rubik’s Cube has six faces; however, it is theoretically sufficient to rotate only five faces to solve the cube. The <b>Erno’s Enigma</b> solver follows this principle by operating on five faces, and hence five stepper motors were used.          Each stepper motor can be rotated by arbitrary angles and for any number of steps, making them suitable for controlling the rotational motion of the cube’s faces in this project.
      </td>
    </tr>
    <tr>
      <td>5V Voltage Regulator</td>
        <td>The stepper motors used in this project operate at <b>5 V DC</b>. Since the standard Indian mains supply provides <b>220 V AC</b>, appropriate voltage regulation was required to convert the input power to <b>5 V DC</b> before driving               the stepper motors.</td>
      </td>
    </tr>
    <tr>
      <td>Arduino Mega</td>
      <td>An <b>Arduino Mega</b> was used, keeping the program memory requirements in mind.
</td>
    </tr>
    <tr>
      <td>Ice Cream Sticks</td>
      <td>This approach was chosen as a low-cost alternative to 3D-printed components for constructing the Rubik’s Cube solver structure. The frame supported the stepper motors that actuated the cube faces and provided space for mounting the microcontroller, wiring, and breadboard. Motor stands and the mechanical linkages connecting the stepper motors to the cube faces were fabricated using ice-cream sticks.
</td>
    </tr>
  </tbody>
</table>

<p>
  The projects did not turned out well due to 
  <ol>
    <li>High friction in the Rubik’s Cube. Although rotations are simple when performed manually, the friction made the turns difficult and demanding on the stepper motors.</li>
<li>Weak stepper motors. The motors used (<b>28BYJ-48 Stepper Motor, 5 V DC</b>) did not provide sufficient torque for reliable operation.</li>
<li>Weak and fragile structure. The frame, constructed using ice-cream sticks and approximate measurements, lacked rigidity and precision, which significantly affected overall performance.</li>
  </ol>
</p>
<p>But in future I would love to resume my work on making this Arduino based rubiks cueb solver with better robust structures, accurate and powerful motors, and more efficient algorithm to solve Rubik's cube.</p>
<p>
  <h2>Wooden stand to hold the motors.</h2><br>
  <img src="./Motor_Support.jpg"/>
  <hr>
  <h2>Base of the structure</h2><br>
  <img src="Base.jpg"/>
  
</p>
