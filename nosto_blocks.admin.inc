<?php

/**
 * @file
 * Administration form for NewsCred module.
 */

/**
 * Menu callback: NewsCred administration settings.
 */
function nosto_blocks_admin_form($form, &$form_state) {
 
	// ask for API call full url
  $form['nosto_block_list'] = array( 
    '#type' => 'textarea',
    '#title' => t('List of nosto block IDs'), 
    '#description' => t("Enter a list of your nosto block IDs, one on each line. You can set up your blocks and get their IDs on this page !nosto_settings. Once you've added your slot IDs here they will be available on the !block_settings.",
    	 array(
    	 	'!nosto_settings' => l(t('nosto tagging settings'), 'admin/config/services/nostotagging'), 
	    	'!block_settings' => l(t('blocks page'), 'admin/config/services/nostotagging')
	    	)
  		),
    '#default_value' => variable_get('nosto_block_list', ''),
    '#size' => 160,         
    // '#maxlength' => 1024,
    '#required' => FALSE,
  );

  return system_settings_form($form);
}
