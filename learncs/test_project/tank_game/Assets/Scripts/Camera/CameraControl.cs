using UnityEngine;

public class CameraControl : MonoBehaviour
{
    public float m_DampTime = 0.2f;    // Camera does not move instantly. There is a slight pause
    public float m_ScreenEdgeBuffer = 4f;      // Makes sure that the tanks do not go out the edge of screen. padding
    public float m_MinSize = 6.5f;        // Minimum size for camera to zoom in          
    [HideInInspector] public Transform[] m_Targets;  // array  


    private Camera m_Camera;   // Reference for the camera                     
    private float m_ZoomSpeed;    // Reference for damping the camera size                  
    private Vector3 m_MoveVelocity;                 
    private Vector3 m_DesiredPosition;  // Position camera is trying to reach. Average between tank distances            


    private void Awake()
    {
        m_Camera = GetComponentInChildren<Camera>();	// finding camera object
    }


    private void FixedUpdate()
    {
        Move();	//Calles FindAveragePosition
        Zoom();
    }


    private void Move()
    {
        FindAveragePosition();	// Once finding the average position, it will set that value to transform.position

        transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
    }	// Smoooths the camera movement from the original position to its desired position
			// ref resets the value of the variable to how it is now moving
				// DampTime is the aproximation of how long it will take
    private void FindAveragePosition()	
    {
        Vector3 averagePos = new Vector3();	// creates new blank vector 
        int numTargets = 0;

        for (int i = 0; i < m_Targets.Length; i++) // for loop repeats while i is less than the length of the targets
        {
			if (!m_Targets[i].gameObject.activeSelf)	// checks if game object is dead( not active)
                continue;

            averagePos += m_Targets[i].position;
            numTargets++;
        }

        if (numTargets > 0)
            averagePos /= numTargets;

        averagePos.y = transform.position.y;

        m_DesiredPosition = averagePos;
    }


    private void Zoom()
    {
        float requiredSize = FindRequiredSize();
        m_Camera.orthographicSize = Mathf.SmoothDamp(m_Camera.orthographicSize, requiredSize, ref m_ZoomSpeed, m_DampTime);
    }


    private float FindRequiredSize()
    {
        Vector3 desiredLocalPos = transform.InverseTransformPoint(m_DesiredPosition);

        float size = 0f;

        for (int i = 0; i < m_Targets.Length; i++)
        {
            if (!m_Targets[i].gameObject.activeSelf)
                continue;

            Vector3 targetLocalPos = transform.InverseTransformPoint(m_Targets[i].position);

            Vector3 desiredPosToTarget = targetLocalPos - desiredLocalPos;

            size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.y));

            size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.x) / m_Camera.aspect);
        }
        
        size += m_ScreenEdgeBuffer;

        size = Mathf.Max(size, m_MinSize);

        return size;
    }


    public void SetStartPositionAndSize()
    {
        FindAveragePosition();

        transform.position = m_DesiredPosition;

        m_Camera.orthographicSize = FindRequiredSize();
    }
}