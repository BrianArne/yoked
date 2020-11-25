/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
YokedAudioProcessorEditor::YokedAudioProcessorEditor (YokedAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor (p),
      gainSlider(juce::Slider::SliderStyle::Rotary, juce::Slider::TextBoxBelow)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible(gainSlider);
    gainSlider.addListener(this);
    
    setSize (400, 300);
}

YokedAudioProcessorEditor::~YokedAudioProcessorEditor()
{
}

//==============================================================================
void YokedAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void YokedAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    gainSlider.setBounds(getLocalBounds());
}

//==============================================================================
void YokedAudioProcessorEditor::sliderValueChanged (juce::Slider* slider)
{
    
}


