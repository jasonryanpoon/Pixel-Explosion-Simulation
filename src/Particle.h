/*
 * Particle.h
 *
 *  Created on: Apr 22, 2018
 *      Author: Jason
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace jrp {

struct Particle {
// Changed to struct so that following member variables are now public rather than private by default
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace jrp */

#endif /* PARTICLE_H_ */
