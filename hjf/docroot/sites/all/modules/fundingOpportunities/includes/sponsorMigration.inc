<?php
/**
*inplementing my base classs base.inc that extends the migration class. 
*/
 class sponsorMigration extends Mybase {
  public function __construct() {
 
  parent::__construct();
  
 $this->description = t('importing Sponsors from filemaker json file to drupal');

 $fields = array(
     
      'title' => 'title',
      'description'=>'body',
	    );
    $json_file = 'data/sources/sponsors.json';
    //$mjason = file_get_contents('data/sources/funding_jsonlintverified.json');
 $this->source = new MigrateSourceJSON($mjson, array(), $fields);

 $this->destination = new MigrateDestinationNode('Sponsor');


$source_key = array(
      'pgid' => array('type' => 'int',
                      'unsigned' => TRUE,
                      'not null' => TRUE,
		      'description'=>'sponsor_sourceID',
                     )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key,
      MigrateDestinationNode::getKeySchema()
);

 $this->addFieldMapping('title', 'title');
  $this->addFieldMapping('body', 'description');


}
}


