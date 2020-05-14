# PID Controller for Self Driving Cars

## Effect of P, I, D components:
- Changing the P parameter affects the amount the vehicle steers depending on cross-track error. If the speed is constant, the ossilations tend to decrease on decreasing the P component. However, in our case, since the speed is varying, the affect is much less pronounced.
- Changing the D parameter affects the speed at which ossilations die out. If the speed is constant, the ossilations die faster on increasing the D component. However, with varying speed, its affect on motion is difficult to understand.
- Changing the D parameter affects the bias in control scheme. Since the simulator environment provides perfect control, the affect of D cannot be detected. However, it definitely has some affect in motion, especially during the turns.

## Hyperparameter Tuning:
- All parameters are tuned manually. A simple logic to control the speed of car is used. When the car's speed is above 25mph, we consider greater than 12 degree as excessive steerig and apply brakes. If the steering is under 10 degrees, we consider the car to be in control and acclerate.
- To find the optimum PID parameters, the parameters used in class are considered as initial value. They are tweaked until a satisfactory motion is achieved. The start values are (.2,.004,3) and final values are (.12,.003,5). The end results are in accordance with our intusion since the P value decreases, I values is somewhat unchanged and D value increases. 