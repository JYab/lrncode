using System.Collections;
using UnityEngine;

public class LearningScript : MonoBehaviour {

	public int number1 = 2;
	public float number2 = 4.7f;
	public string someWords = "Now is the time";
	public bool checkThisOut = true;

	// Use this for intialization
	void Start () {

	}

	// Update is called once per frame 
	void Update () {
		if (Input.GetKeyUp (KeyCode.Return)) AddTwoNumbers ();
	}


	void AddTwoNumbers() {

		Debug.Log (number1 + number2);
	}

}