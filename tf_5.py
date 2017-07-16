import tensorflow as tf

# Cost Func.
cost = tf.reduce_mean(-tf.reduce_sum(Y*tf.reduce_sum(Y*tf.log(hypothesis) + (1-Y)*tf.log(1-hypothesis)))

	# Minimize
	a = tf.Variable(0.1)
	optimizer = tf.train.GradientDescentOptimizer(a)
	train = optimizer.minimize(cost)

