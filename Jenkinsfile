pipeline {
  agent {
    docker {
      image 'gcc'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh '''cmake
gcc -o bit-printer main.c'''
      }
    }
    stage('Run') {
      steps {
        sh './bit-printer 1024'
      }
    }
  }
}