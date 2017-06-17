using System.Collections;
using UnityEngine;

public class LearningStatements : MonoBehaviour {

	public bool willItBeRainingToday = true;

	void Start () {
		
		if ( ! willItBeRainingToday) {
			Debug.Log ("Yes you need umbrella");
		} else {
			Debug.Log ("No, you don't need umbrella");
		}
	}	
}