/****************************************
 *
 * epicpcm.h
 * Declare a graphical equaliser plugin.
 *
 * This file is part of mattulizer.
 *
 * Copyright 2011 (c) Matthew Leach.
 *
 * Mattulizer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mattulizer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Mattulizer.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _EPICPCM_H_
#define _EPICPCM_H_

#include "../../src/visualiser.h"
#include "../../src/visualiserWin.h"
#include "../../src/dsp/fft.h"
#include "../../src/dsp/pcm.h"

/**
 * This is a simple visualiser class that
 * will change the colour of the screen depending upon the
 * dominant frequencies in the playback. It will also draw
 * the PCM data with the inverse colour to the background.
 */
class epicpcm : public visualiser
{
	public:
		/**
		 * construct the plugin.
		 */
		epicpcm(visualiserWin* win);
		
		/**
		 * This function is called by the main thread to draw
		 * onto the screen. Here we simply draw the visualiser.
		 */
		void draw();
	private:
		/**
		 * The FFT plugin used to get DSP data.
		 */
		FFT* fftPlugin;
		PCM* pcmPlugin;
};

#endif
