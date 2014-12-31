<?php
/**
*inplementing my base classs base.inc that extends the migration class. 
*/
 class opportunities extends Mybase {
  public function __construct($arguments) {
 
  parent::__construct($arguments);
  
 $this->description = t('importing funding opportunities from filemaker json file to drupal');

 $fields = array(
     
      'title' => 'title',
      'number' => 'number',
	'url'=>'url',
	'source_sponsor_ID'=>'Sponsor',
	'source_program_ID'=>'Program',
	'source_type_ID'=>'Type',
      'preproposal_deadline' => 'preproposal_deadline',
	'proposal_deadline'=>'proposal_deadline',
	'source_RADS_ID'=>'RADS',
    );
    $json_file =file_get_contents('data/sources/mylist.json');
    //$mjason = file_get_contents('data/sources/funding_jsonlintverified.json');
 $this->source = new MigrateSourceJSON($json_file, array(), $fields);

 $this->destination = new MigrateDestinationNode('funding_opportunity');


$source_key = array(
      'pgid' => array('type' => 'int',
                      'unsigned' => TRUE,
                      'not null' => TRUE,
		      'description'=>'funding_opportunitiy_sourceID',
                     )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key,
      MigrateDestinationNode::getKeySchema()
);

$this->addFieldMapping('field_related_url', 'url');
 $this->addFieldMapping('field_relate_sponsor', 'source_sponsor_ID');
 $this->addFieldMapping('field_related_program', 'source_program_ID');
 $this->addFieldMapping('field_related_announcement_type', 'source_type_ID');
 $this->addFieldMapping('field_prepropsal_loideadline_dat', 'preproposal_deadline');
 $this->addFieldMapping('field_proposal_deadline', 'proposal_deadline');
 $this->addFieldMapping('field_rads', 'source_RADS_ID');





}
protected function createStub(Migration $migration, array $source_id) {
    $node = new stdClass();
    $node->title = t('Stub for @id', array('@id' => $source_id[0]));
    $node->body[LANGUAGE_NONE][0]['value'] = t('Stub body');
    $node->type = $this->destination->getBundle();
    $node->uid = 1;
    $node->status = 0;
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }
}


