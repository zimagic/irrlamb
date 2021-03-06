-- Display tutorial text
function ShowMoreText()
	GUI.TutorialText("Touch the glowing orb to win.", 30)
end

-- Called when an orb is deactivated
function OnOrbDeactivate()
	GoalCount = GoalCount - 1
	if GoalCount == 0 then
		Level.Win()
	end
end

-- Set up goal
GoalCount = 1

-- Show text
GUI.TutorialText("Press [" .. KEY_FORWARD .. "], [" .. KEY_LEFT .. "], [" .. KEY_BACK .. "], [" .. KEY_RIGHT .. "] to move. The mouse is used to look around.", 15)
Timer.DelayedFunction("ShowMoreText", 20)
