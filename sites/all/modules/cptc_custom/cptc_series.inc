<?php

function cptc_custom_series_compare_teams($team1, $team2){
  if(is_object($team1) && is_object($team1)){
    if($team1->rating < 6){
      if(abs($team1->rating - $team2->rating) > 1){
        return false;
      }
    }
    if($team1->rating > 5){
      if(abs($team1->rating - $team2->rating) > 2){
        return false;
      }
    }
    if($team2->rating < 6){
      if(abs($team1->rating - $team2->rating) > 1){
        return false;
      }
    }
    if($team2->rating > 5){
      if(abs($team1->rating - $team2->rating) > 2){
        return false;
      }
    }
  }
  elseif(is_array($team1) && is_array($team2)){
    if($team1['rating'] < 6){
      if(abs($team1['rating'] - $team2['rating']) > 1){
        return false;
      }
    }
    if($team1['rating'] > 5){
      if(abs($team1['rating'] - $team2['rating']) > 2){
        return false;
      }
    }
    if($team2['rating'] < 6){
      if(abs($team1['rating'] - $team2['rating']) > 1){
        return false;
      }
    }
    if($team2['rating'] > 5){
      if(abs($team1['rating'] - $team2['rating']) > 2){
        return false;
      }
    }
  }
  elseif((is_int($team1) || is_string($team1)) && (is_int($team1) || is_string($team2))){
    if($team1 < 6){
      if(abs(intval($team1) - intval($team2)) > 1){
        return false;
      }
    }
    if($team1 > 5){
      if(abs(intval($team1) - intval($team2)) > 2){
        return false;
      }
    }
    if($team2 < 6){
      if(abs(intval($team1) - intval($team2)) > 1){
        return false;
      }
    }
    if($team2 > 5){
      if(abs(intval($team1) - intval($team2)) > 2){
        return false;
      }
    }
  }
  return true;
}

