# PID Control Project

The following is a solution for [PID Control Project](https://github.com/udacity/CarND-PID-Control-Project) from Term 2 of Udacity's Self Driving Car Nanodegree. Refer to the main repository for compilation and testing instructions.

The following hyperparameters were chosen for the controller:

|  Kp  |  Ki  |  Kd  |
| -----| ---- | ---- |
| 0.25 | 0.00 | 1.50 |

I arrived at this solution by experimenting with different settings.
1. First, I started with Kp = 1.0 and all other hyperparameters set to zero. I tweaked this parameter alone until the vehicle would neither **overshoot** too aggresively (with Kp too large), nor **fail to follow the trajectory at all** (with Kp too small).
2. After I was satisfied with my initial result, I started increasing Kd to reduce overshooting. This parameter was responsible for **smoothing** the actual car trajectory when trying to return to the reference trajectory.
3. Eventually, changes in Kd stopped bringing visible improvements. I decreased Kp even more to still reduce overshooting.
4. I tried different values of Ki, but no visible improvement appeared. This implies the vehicle had small to none **systematic error**.
