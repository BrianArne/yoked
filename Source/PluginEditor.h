/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class YokedAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                   public juce::Slider::Listener
{
public:
    YokedAudioProcessorEditor (YokedAudioProcessor&);
    ~YokedAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //==============================================================================
    void sliderValueChanged(juce::Slider*) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    YokedAudioProcessor& audioProcessor;
    
    // GUI
    juce::Slider gainSlider;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (YokedAudioProcessorEditor)
};
