/**** 
 * Created by: Ruoyu Zhang
 * Date Created: March 16, 2022
 * 
 * Last Edited by:Ruoyu Zhang 
 * Last Edited:6/4/2022
 * 
 * Description: Create the pool for object
****/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    /***VARAIABLE***/
    static public ObjectPool POOL;

    #region POOL Singleton
    void CheckPoolIsInScene()
    {
        if(POOL == null)
        {
            POOL = this;
        }
        else
        {
            Debug.LogError("POOL.Awake() - Attempeted to assign a second ObjectPool.POOL");
        }
    }// end CheckPoolIsInScene()
    #endregion

    private Queue<GameObject> projectiles = new Queue<GameObject>(); // new queue of projectiles

    [Header("pool setting")]
    public GameObject projectilePrefab;
    public int poolStartSize = 5;

    /***METHOD***/

    private void Awake()
    {
        CheckPoolIsInScene();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
