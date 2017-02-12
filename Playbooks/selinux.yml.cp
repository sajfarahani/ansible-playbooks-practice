--- # SELINUX Module Example
- hosts: apacheweb
  user: sajj
  sudo: yes
  connection: ssh
  gather_facts: no
  tasks:
    - name: Change SeLinux Configuration to Permissive
      selinux: state=disabled
