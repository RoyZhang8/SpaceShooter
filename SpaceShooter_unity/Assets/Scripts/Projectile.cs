/**** 
 * Created by: Ruoyu Zhang
 * Date Created: March 16, 2022
 * 
 * Last Edited by:Ruoyu Zhang 
 * Last Edited:6/4/2022
 * 
 * Description: Behaviours for the projectile
****/


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    private BoundsCheck bndCheck;

    // Start is called before the first frame update
    void Start()
    {
        bndCheck = GetComponent<BoundsCheck>();
    }

    // Update is called once per frame
    void Update()
    {
        if (bndCheck.offUp)
        {
            Destroy(gameObject);
        }
    }
}
