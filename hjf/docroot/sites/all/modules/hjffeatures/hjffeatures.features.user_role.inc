<?php
/**
 * @file
 * hjffeatures.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hjffeatures_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: funding_opportunities_Staff.
  $roles['funding_opportunities_Staff'] = array(
    'name' => 'funding_opportunities_Staff',
    'weight' => 3,
  );

  return $roles;
}
